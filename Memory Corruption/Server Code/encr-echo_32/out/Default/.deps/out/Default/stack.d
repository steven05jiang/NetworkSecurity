cmd_out/Default/stack := flock out/Default/linker.lock g++ -m32  -o out/Default/stack -Wl,--start-group out/Default/obj.target/stack/src/main.o -Wl,--end-group -lboost_system -lboost_filesystem -lboost_program_options