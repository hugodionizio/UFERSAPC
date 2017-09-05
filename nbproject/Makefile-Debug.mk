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
	${OBJECTDIR}/src/UnidadeII/Aula01/Exemp1_Estrutura.o \
	${OBJECTDIR}/src/UnidadeII/Aula01/Exemp2_HelloWorld.o \
	${OBJECTDIR}/src/UnidadeII/Aula01/Exemp3_ProdVet.o \
	${OBJECTDIR}/src/UnidadeII/Aula01/Exemp4_AdVet.o \
	${OBJECTDIR}/src/UnidadeII/Aula01/Exerc1_5threads.o \
	${OBJECTDIR}/src/UnidadeII/Aula01/Exerc2_Escalar.o \
	${OBJECTDIR}/src/UnidadeII/Aula01/Exerc3_SomaThreads.o \
	${OBJECTDIR}/src/UnidadeII/Aula01/Exerc4_SomaElemVet.o \
	${OBJECTDIR}/src/UnidadeII/Aula02/Exempl1_AdVet.o \
	${OBJECTDIR}/src/UnidadeII/Aula02/Exempl1_Single.o \
	${OBJECTDIR}/src/UnidadeII/Aula02/Exempl3_SingleComb.o \
	${OBJECTDIR}/src/UnidadeII/Aula02/Exempl4_ModifXCritical.o \
	${OBJECTDIR}/src/UnidadeII/Aula02/Exerc1_SomSubVet.o \
	${OBJECTDIR}/src/UnidadeII/Aula02/Exerc2_CorridaBarrier.o \
	${OBJECTDIR}/src/UnidadeII/Aula02/Exerc3_BuscaVetor.o \
	${OBJECTDIR}/src/UnidadeII/Aula02/Exerc4_VetThrOrd.o \
	${OBJECTDIR}/src/UnidadeII/Aula03/Exemp01VarAmbFor.o \
	${OBJECTDIR}/src/UnidadeII/Aula03/Exemp02ValPiArea.o \
	${OBJECTDIR}/src/UnidadeII/Aula03/Exer01_4Threads.o \
	${OBJECTDIR}/src/UnidadeII/Aula03/Exer02_ParaleloSemFor.o \
	${OBJECTDIR}/src/UnidadeII/Aula03/Exer03_MaxComBarreira.o \
	${OBJECTDIR}/src/UnidadeII/Aula04/Exe01ThreadaMenCol.o \
	${OBJECTDIR}/src/UnidadeII/Aula04/Exe02PedPapTes.o \
	${OBJECTDIR}/src/UnidadeII/Aula04/ValorPi.o \
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

${OBJECTDIR}/src/UnidadeII/Aula01/Exemp1_Estrutura.o: src/UnidadeII/Aula01/Exemp1_Estrutura.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula01
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula01/Exemp1_Estrutura.o src/UnidadeII/Aula01/Exemp1_Estrutura.c

${OBJECTDIR}/src/UnidadeII/Aula01/Exemp2_HelloWorld.o: src/UnidadeII/Aula01/Exemp2_HelloWorld.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula01
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula01/Exemp2_HelloWorld.o src/UnidadeII/Aula01/Exemp2_HelloWorld.c

${OBJECTDIR}/src/UnidadeII/Aula01/Exemp3_ProdVet.o: src/UnidadeII/Aula01/Exemp3_ProdVet.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula01
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula01/Exemp3_ProdVet.o src/UnidadeII/Aula01/Exemp3_ProdVet.c

${OBJECTDIR}/src/UnidadeII/Aula01/Exemp4_AdVet.o: src/UnidadeII/Aula01/Exemp4_AdVet.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula01
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula01/Exemp4_AdVet.o src/UnidadeII/Aula01/Exemp4_AdVet.c

${OBJECTDIR}/src/UnidadeII/Aula01/Exerc1_5threads.o: src/UnidadeII/Aula01/Exerc1_5threads.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula01
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula01/Exerc1_5threads.o src/UnidadeII/Aula01/Exerc1_5threads.c

${OBJECTDIR}/src/UnidadeII/Aula01/Exerc2_Escalar.o: src/UnidadeII/Aula01/Exerc2_Escalar.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula01
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula01/Exerc2_Escalar.o src/UnidadeII/Aula01/Exerc2_Escalar.c

${OBJECTDIR}/src/UnidadeII/Aula01/Exerc3_SomaThreads.o: src/UnidadeII/Aula01/Exerc3_SomaThreads.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula01
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula01/Exerc3_SomaThreads.o src/UnidadeII/Aula01/Exerc3_SomaThreads.c

${OBJECTDIR}/src/UnidadeII/Aula01/Exerc4_SomaElemVet.o: src/UnidadeII/Aula01/Exerc4_SomaElemVet.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula01
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula01/Exerc4_SomaElemVet.o src/UnidadeII/Aula01/Exerc4_SomaElemVet.c

${OBJECTDIR}/src/UnidadeII/Aula02/Exempl1_AdVet.o: src/UnidadeII/Aula02/Exempl1_AdVet.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula02
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula02/Exempl1_AdVet.o src/UnidadeII/Aula02/Exempl1_AdVet.c

${OBJECTDIR}/src/UnidadeII/Aula02/Exempl1_Single.o: src/UnidadeII/Aula02/Exempl1_Single.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula02
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula02/Exempl1_Single.o src/UnidadeII/Aula02/Exempl1_Single.c

${OBJECTDIR}/src/UnidadeII/Aula02/Exempl3_SingleComb.o: src/UnidadeII/Aula02/Exempl3_SingleComb.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula02
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula02/Exempl3_SingleComb.o src/UnidadeII/Aula02/Exempl3_SingleComb.c

${OBJECTDIR}/src/UnidadeII/Aula02/Exempl4_ModifXCritical.o: src/UnidadeII/Aula02/Exempl4_ModifXCritical.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula02
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula02/Exempl4_ModifXCritical.o src/UnidadeII/Aula02/Exempl4_ModifXCritical.c

${OBJECTDIR}/src/UnidadeII/Aula02/Exerc1_SomSubVet.o: src/UnidadeII/Aula02/Exerc1_SomSubVet.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula02
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula02/Exerc1_SomSubVet.o src/UnidadeII/Aula02/Exerc1_SomSubVet.c

${OBJECTDIR}/src/UnidadeII/Aula02/Exerc2_CorridaBarrier.o: src/UnidadeII/Aula02/Exerc2_CorridaBarrier.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula02
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula02/Exerc2_CorridaBarrier.o src/UnidadeII/Aula02/Exerc2_CorridaBarrier.c

${OBJECTDIR}/src/UnidadeII/Aula02/Exerc3_BuscaVetor.o: src/UnidadeII/Aula02/Exerc3_BuscaVetor.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula02
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula02/Exerc3_BuscaVetor.o src/UnidadeII/Aula02/Exerc3_BuscaVetor.c

${OBJECTDIR}/src/UnidadeII/Aula02/Exerc4_VetThrOrd.o: src/UnidadeII/Aula02/Exerc4_VetThrOrd.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula02
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula02/Exerc4_VetThrOrd.o src/UnidadeII/Aula02/Exerc4_VetThrOrd.c

${OBJECTDIR}/src/UnidadeII/Aula03/Exemp01VarAmbFor.o: src/UnidadeII/Aula03/Exemp01VarAmbFor.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula03
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula03/Exemp01VarAmbFor.o src/UnidadeII/Aula03/Exemp01VarAmbFor.c

${OBJECTDIR}/src/UnidadeII/Aula03/Exemp02ValPiArea.o: src/UnidadeII/Aula03/Exemp02ValPiArea.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula03
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula03/Exemp02ValPiArea.o src/UnidadeII/Aula03/Exemp02ValPiArea.c

${OBJECTDIR}/src/UnidadeII/Aula03/Exer01_4Threads.o: src/UnidadeII/Aula03/Exer01_4Threads.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula03
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula03/Exer01_4Threads.o src/UnidadeII/Aula03/Exer01_4Threads.c

${OBJECTDIR}/src/UnidadeII/Aula03/Exer02_ParaleloSemFor.o: src/UnidadeII/Aula03/Exer02_ParaleloSemFor.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula03
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula03/Exer02_ParaleloSemFor.o src/UnidadeII/Aula03/Exer02_ParaleloSemFor.c

${OBJECTDIR}/src/UnidadeII/Aula03/Exer03_MaxComBarreira.o: src/UnidadeII/Aula03/Exer03_MaxComBarreira.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula03
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula03/Exer03_MaxComBarreira.o src/UnidadeII/Aula03/Exer03_MaxComBarreira.c

${OBJECTDIR}/src/UnidadeII/Aula04/Exe01ThreadaMenCol.o: src/UnidadeII/Aula04/Exe01ThreadaMenCol.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula04
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula04/Exe01ThreadaMenCol.o src/UnidadeII/Aula04/Exe01ThreadaMenCol.c

${OBJECTDIR}/src/UnidadeII/Aula04/Exe02PedPapTes.o: src/UnidadeII/Aula04/Exe02PedPapTes.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula04
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula04/Exe02PedPapTes.o src/UnidadeII/Aula04/Exe02PedPapTes.c

${OBJECTDIR}/src/UnidadeII/Aula04/ValorPi.o: src/UnidadeII/Aula04/ValorPi.c 
	${MKDIR} -p ${OBJECTDIR}/src/UnidadeII/Aula04
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/src/UnidadeII/Aula04/ValorPi.o src/UnidadeII/Aula04/ValorPi.c

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
