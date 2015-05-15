# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := stack
DEFS_Default := \
	'-DPROJECT_NAME="stack"' \
	'-DPROJECT_VERSION="v0.1-dev"'

# Flags passed to all source files.
CFLAGS_Default := \
	-Wall \
	-pipe \
	-O0 \
	-ggdb \
	-std=c++11 \
	-fPIE \
	-fPIC \
	-fno-stack-protector \
	-m32

# Flags passed to only C files.
CFLAGS_C_Default :=

# Flags passed to only C++ files.
CFLAGS_CC_Default :=

INCS_Default :=

OBJS := \
	$(obj).target/$(TARGET)/src/main.o

# Add to the list of files we specially track dependencies for.
all_deps += $(OBJS)

# CFLAGS et al overrides must be target-local.
# See "Target-specific Variable Values" in the GNU Make manual.
$(OBJS): TOOLSET := $(TOOLSET)
$(OBJS): GYP_CFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_C_$(BUILDTYPE))
$(OBJS): GYP_CXXFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_CC_$(BUILDTYPE))

# Suffix rules, putting all outputs into $(obj).

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.cpp FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# Try building from generated source, too.

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.cpp FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.cpp FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# End of this set of suffix rules
### Rules for final target.
LDFLAGS_Default := \
	-m32

LIBS := \
	-lboost_system \
	-lboost_filesystem \
	-lboost_program_options

$(builddir)/stack: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(builddir)/stack: LIBS := $(LIBS)
$(builddir)/stack: LD_INPUTS := $(OBJS)
$(builddir)/stack: TOOLSET := $(TOOLSET)
$(builddir)/stack: $(OBJS) FORCE_DO_CMD
	$(call do_cmd,link)

all_deps += $(builddir)/stack
# Add target alias
.PHONY: stack
stack: $(builddir)/stack

# Add executable to "all" target.
.PHONY: all
all: $(builddir)/stack

