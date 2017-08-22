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
CND_PLATFORM=Cygwin-Windows
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
	${OBJECTDIR}/src/UnidadeII/Aula02/Exerc4_VetThrOrd.o \
	${OBJECTDIR}/src/UnidadeII/Exemp1_Estrutura.o \
	${OBJECTDIR}/src/UnidadeII/Exemp2_HelloWorld.o \
	${OBJECTDIR}/src/UnidadeII/Exemp3_ProdVet.o \
	${OBJECTDIR}/src/UnidadeII/Exemp4_AdVet.o \
	${OBJECTDIR}/src/UnidadeII/Exerc1_5threads.o \
	${OBJECTDIR}/src/UnidadeII/Exerc2_Escalar.o \
	${OBJECTDIR}/src/UnidadeII/Exerc3_SomaThreads.o \
	${OBJECTDIR}/src/UnidadeII/Exerc4_SomaElemVet.o \
	${OBJECTDIR}/src/main.o


# C Compiler Flags
CFLAGS=-fopenmp

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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ufersapc.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ufersapc.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ufersapc ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/src/UnidadeII/Aula02/Exerc4_VetThrOrd.o: src/UnidadeII/Aula02/Exerc4_VetThrOrd.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula02
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula02/Exerc4_VetThrOrd.o src/UnidadeII/Aula02/Exerc4_VetThrOrd.c

${OBJECTDIR}/src/UnidadeII/Exemp1_Estrutura.o: src/UnidadeII/Exemp1_Estrutura.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Exemp1_Estrutura.o src/UnidadeII/Exemp1_Estrutura.c

${OBJECTDIR}/src/UnidadeII/Exemp2_HelloWorld.o: src/UnidadeII/Exemp2_HelloWorld.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Exemp2_HelloWorld.o src/UnidadeII/Exemp2_HelloWorld.c

${OBJECTDIR}/src/UnidadeII/Exemp3_ProdVet.o: src/UnidadeII/Exemp3_ProdVet.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Exemp3_ProdVet.o src/UnidadeII/Exemp3_ProdVet.c

${OBJECTDIR}/src/UnidadeII/Exemp4_AdVet.o: src/UnidadeII/Exemp4_AdVet.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Exemp4_AdVet.o src/UnidadeII/Exemp4_AdVet.c

${OBJECTDIR}/src/UnidadeII/Exerc1_5threads.o: src/UnidadeII/Exerc1_5threads.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Exerc1_5threads.o src/UnidadeII/Exerc1_5threads.c

${OBJECTDIR}/src/UnidadeII/Exerc2_Escalar.o: src/UnidadeII/Exerc2_Escalar.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Exerc2_Escalar.o src/UnidadeII/Exerc2_Escalar.c

${OBJECTDIR}/src/UnidadeII/Exerc3_SomaThreads.o: src/UnidadeII/Exerc3_SomaThreads.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Exerc3_SomaThreads.o src/UnidadeII/Exerc3_SomaThreads.c

${OBJECTDIR}/src/UnidadeII/Exerc4_SomaElemVet.o: src/UnidadeII/Exerc4_SomaElemVet.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Exerc4_SomaElemVet.o src/UnidadeII/Exerc4_SomaElemVet.c

${OBJECTDIR}/src/main.o: src/main.c 
	${MKDIR} -p ${OBJECTDIR}/src
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/main.o src/main.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ufersapc.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
