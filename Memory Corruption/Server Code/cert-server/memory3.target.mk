# This file is generated by gyp; do not edit.

TOOLSET := target
TARGET := memory3
DEFS_Default := \
	'-DPROJECT_NAME="memory3"' \
	'-DPROJECT_VERSION="v0.1-dev"'

# Flags passed to all source files.
CFLAGS_Default := \
	-Wall \
	-pipe \
	-O0 \
	-ggdb \
	-std=c++11 \
	-pthread \
	-fPIE \
	-fPIC \
	-z execstack \
	-fno-stack-protector

# Flags passed to only C files.
CFLAGS_C_Default :=

# Flags passed to only C++ files.
CFLAGS_CC_Default :=

INCS_Default :=

OBJS := \
	$(obj).target/$(TARGET)/src/main.o \
	$(obj).target/$(TARGET)/src/msg.pb.o

# Add to the list of files we specially track dependencies for.
all_deps += $(OBJS)

# CFLAGS et al overrides must be target-local.
# See "Target-specific Variable Values" in the GNU Make manual.
$(OBJS): TOOLSET := $(TOOLSET)
$(OBJS): GYP_CFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_C_$(BUILDTYPE))
$(OBJS): GYP_CXXFLAGS := $(DEFS_$(BUILDTYPE)) $(INCS_$(BUILDTYPE))  $(CFLAGS_$(BUILDTYPE)) $(CFLAGS_CC_$(BUILDTYPE))

# Suffix rules, putting all outputs into $(obj).

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(srcdir)/%.cpp FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# Try building from generated source, too.

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj).$(TOOLSET)/%.cpp FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.cc FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

$(obj).$(TOOLSET)/$(TARGET)/%.o: $(obj)/%.cpp FORCE_DO_CMD
	@$(call do_cmd,cxx,1)

# End of this set of suffix rules
### Rules for final target.
LDFLAGS_Default := \
	-z execstack

LIBS := \
	-lpthread \
	-lboost_system \
	-lboost_thread \
	-lboost_filesystem \
	-lboost_program_options \
	-lcryptopp \
	-lprotobuf \
	-lglog

$(builddir)/memory3: GYP_LDFLAGS := $(LDFLAGS_$(BUILDTYPE))
$(builddir)/memory3: LIBS := $(LIBS)
$(builddir)/memory3: LD_INPUTS := $(OBJS)
$(builddir)/memory3: TOOLSET := $(TOOLSET)
$(builddir)/memory3: $(OBJS) FORCE_DO_CMD
	$(call do_cmd,link)

all_deps += $(builddir)/memory3
# Add target alias
.PHONY: memory3
memory3: $(builddir)/memory3

# Add executable to "all" target.
.PHONY: all
all: $(builddir)/memory3
