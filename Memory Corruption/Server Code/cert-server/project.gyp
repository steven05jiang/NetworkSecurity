{
	'target_defaults': {
		'defines': [
			'PROJECT_NAME="memory3"',
			'PROJECT_VERSION="v0.1-dev"',
			#'PROJECT_BRANCH="<!(hg id -b)"',
			#'PROJECT_REVISION="<!(hg id -i)"',
			#'NDEBUG',
		],
		'cflags': [
			'-Wall',
			'-pipe',
			'-O0',
			'-ggdb',
			#'-gdwarf-3',
			'-std=c++11',
			'-pthread',
			'-fPIE',
			'-fPIC',
			'-z execstack',
			'-fno-stack-protector',
			#'-m32',
		],
		'ldflags': [
			#'-m32',
			'-z execstack',
		],
	},
	'targets': [
		{
			'target_name': 'memory3',
			'type': 'executable',
			'dependencies': [
			],
			'include_dirs': [
			],
			'defines': [
			],
			'sources': [
				'src/main.cpp',
				'src/msg.pb.h',
				'src/msg.pb.cc',
			],
			'libraries': [
				'-lpthread',
				'-lboost_system',
				'-lboost_thread',
				'-lboost_filesystem',
				'-lboost_program_options',
				'-lcryptopp',
				'-lprotobuf',
				'-lglog',
			],
		},
	],
}
