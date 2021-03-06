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
CND_PLATFORM=None-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Functions.o \
	${OBJECTDIR}/Session.o \
	${OBJECTDIR}/Templates.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/model/ModelData.o \
	${OBJECTDIR}/model/ModelGame.o \
	${OBJECTDIR}/model/ModelUser.o \
	${OBJECTDIR}/model/Product.o \
	${OBJECTDIR}/model/db_objects/Game.o \
	${OBJECTDIR}/model/db_objects/User.o \
	${OBJECTDIR}/view/Controller.o \
	${OBJECTDIR}/view/Widget.o \
	${OBJECTDIR}/view/WidgetFooter.o \
	${OBJECTDIR}/view/WidgetHeader.o \
	${OBJECTDIR}/view/WidgetIndex.o \
	${OBJECTDIR}/view/WidgetProduction.o \
	${OBJECTDIR}/view/WidgetSales.o


# C Compiler Flags
CFLAGS=

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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/project-dealicsson

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/project-dealicsson: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/project-dealicsson ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Functions.o: Functions.cc 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Functions.o Functions.cc

${OBJECTDIR}/Session.o: Session.cc 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Session.o Session.cc

${OBJECTDIR}/Templates.o: Templates.cc 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Templates.o Templates.cc

${OBJECTDIR}/main.o: main.cc 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cc

${OBJECTDIR}/model/ModelData.o: model/ModelData.cc 
	${MKDIR} -p ${OBJECTDIR}/model
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/model/ModelData.o model/ModelData.cc

${OBJECTDIR}/model/ModelGame.o: model/ModelGame.cc 
	${MKDIR} -p ${OBJECTDIR}/model
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/model/ModelGame.o model/ModelGame.cc

${OBJECTDIR}/model/ModelUser.o: model/ModelUser.cc 
	${MKDIR} -p ${OBJECTDIR}/model
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/model/ModelUser.o model/ModelUser.cc

${OBJECTDIR}/model/Product.o: model/Product.cc 
	${MKDIR} -p ${OBJECTDIR}/model
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/model/Product.o model/Product.cc

${OBJECTDIR}/model/db_objects/Game.o: model/db_objects/Game.cc 
	${MKDIR} -p ${OBJECTDIR}/model/db_objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/model/db_objects/Game.o model/db_objects/Game.cc

${OBJECTDIR}/model/db_objects/User.o: model/db_objects/User.cc 
	${MKDIR} -p ${OBJECTDIR}/model/db_objects
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/model/db_objects/User.o model/db_objects/User.cc

${OBJECTDIR}/view/Controller.o: view/Controller.cc 
	${MKDIR} -p ${OBJECTDIR}/view
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/view/Controller.o view/Controller.cc

${OBJECTDIR}/view/Widget.o: view/Widget.cc 
	${MKDIR} -p ${OBJECTDIR}/view
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/view/Widget.o view/Widget.cc

${OBJECTDIR}/view/WidgetFooter.o: view/WidgetFooter.cc 
	${MKDIR} -p ${OBJECTDIR}/view
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/view/WidgetFooter.o view/WidgetFooter.cc

${OBJECTDIR}/view/WidgetHeader.o: view/WidgetHeader.cc 
	${MKDIR} -p ${OBJECTDIR}/view
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/view/WidgetHeader.o view/WidgetHeader.cc

${OBJECTDIR}/view/WidgetIndex.o: view/WidgetIndex.cc 
	${MKDIR} -p ${OBJECTDIR}/view
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/view/WidgetIndex.o view/WidgetIndex.cc

${OBJECTDIR}/view/WidgetProduction.o: view/WidgetProduction.cc 
	${MKDIR} -p ${OBJECTDIR}/view
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/view/WidgetProduction.o view/WidgetProduction.cc

${OBJECTDIR}/view/WidgetSales.o: view/WidgetSales.cc 
	${MKDIR} -p ${OBJECTDIR}/view
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/view/WidgetSales.o view/WidgetSales.cc

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/project-dealicsson

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
