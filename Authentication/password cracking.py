#https://mjanja.ch/2013/01/generate-salted-shadow-hashes-using-python-crypt/


import crypt
import json
def reduction(md5value):
    result =''
    md5value=md5value[-8:]
    for i in range(len(md5value)):
        b=ord(md5value[i])%26+97
        resulttemp=chr(b)
        result=resulttemp+result
    return result
def hashfun(reducedstring,salt):
    result=crypt.crypt(reducedstring,salt)
    return result
def testfun():
    teststr='malinche'
    Dtable={}
    Dtablerev={}
    fp=open('table.json')
    keypair=json.load(fp)
    k=keypair['k']
    salt=keypair['salt']
    keypair=keypair['chains']
    #for i in range(len(keypair)):
        #Dtable[keypair[i]['start']]=keypair[i]['end']
        #Dtablerev[keypair[i]['end']]=keypair[i]['start']
    for i in range(k):
        teststr=reduction(hashfun(teststr,salt))
    print(teststr)
def decrypt(chainbegin,tries,salt,crypyedkey):
    tempprevious=chainbegin
    found=False
    kkk=0
    while kkk<tries:
        if(hashfun(tempprevious,salt)==crypyedkey):
            return tempprevious
        tempprevious=reduction(hashfun(tempprevious,salt))
        kkk=kkk+1
    return ''

def main():
    keytodecrypt='$1$HUSKIES!$R9bstTQ9eG2Pzql0cq7kd/'
    tempresult=''
    temphash=keytodecrypt
    tempchain=''
    alreadyfound=False
    Dtable={}
    Dtablerev={}
    fp=open('table.json')
    keypair=json.load(fp)
    k=keypair['k']
    salt=keypair['salt']
    keypair=keypair['chains']
    for i in range(len(keypair)):
        #Dtable[keypair[i]['start']]=keypair[i]['end']
        Dtablerev[keypair[i]['end']]=keypair[i]['start']
    kk=0
    tempresult=reduction(temphash)
    while kk<k and alreadyfound == False:
        tempresult=reduction(hashfun(tempresult,salt))
        tempchain=Dtablerev.get(tempresult,'')
        if tempchain!='':
            tempchain=decrypt(tempchain,k-kk,salt,keytodecrypt)
            if tempchain!='':
                alreadyfound = True
        kk=kk+1
    fp.close
    print(tempchain)
    print(crypt.crypt(tempchain,salt))

main()

