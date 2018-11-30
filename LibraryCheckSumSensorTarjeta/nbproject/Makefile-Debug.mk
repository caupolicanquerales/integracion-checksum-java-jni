#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Paquete_CheckSum_ClaseConectoraLibrary.o


# C Compiler Flags
CFLAGS=-Wl,--export-all-symbols -Wl,--add-stdcall-alias, -shared -m32

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk dist/ClaseConectoraLibrary.dll

dist/ClaseConectoraLibrary.dll: ${OBJECTFILES}
	${MKDIR} -p dist
	${LINK.c} -o dist/ClaseConectoraLibrary.dll ${OBJECTFILES} ${LDLIBSOPTIONS} -shared

${OBJECTDIR}/Paquete_CheckSum_ClaseConectoraLibrary.o: Paquete_CheckSum_ClaseConectoraLibrary.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -I/C/Program\ Files/Java/jdk1.8.0_151/include -I/C/Program\ Files/Java/jdk1.8.0_151/include/win32  -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Paquete_CheckSum_ClaseConectoraLibrary.o Paquete_CheckSum_ClaseConectoraLibrary.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
