{
	'target_defaults': {
		'defines': [
			'PROJECT_NAME="stack"',
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
			'-fPIE',
			'-fPIC',
			'-fno-stack-protector',
			'-m32',
			#'-static',
			#'-z execstack',
		],
		'ldflags': [
			'-m32',
			#'-static',
			#'-z execstack',
		],
	},
	'targets': [
		{
			'target_name': 'stack',
			'type': 'executable',
			'dependencies': [
			],
			'include_dirs': [
			],
			'defines': [
			],
			'sources': [
				'src/main.cpp',
			],
			'libraries': [
				'-lboost_system',
				'-lboost_filesystem',
				'-lboost_program_options',
			],
		},
	],
}
