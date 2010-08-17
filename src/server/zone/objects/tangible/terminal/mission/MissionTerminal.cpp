/*
 *	server/zone/objects/tangible/terminal/mission/MissionTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "MissionTerminal.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/Zone.h"


// Imported class dependencies

#include "engine/util/Quaternion.h"

#include "server/zone/managers/object/ObjectMap.h"

#include "server/zone/ZoneClientSession.h"

#include "server/zone/objects/scene/ObserverEventMap.h"

#include "system/util/SortedVector.h"

#include "server/zone/objects/player/TradeContainer.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "engine/core/ObjectUpdateToDatabaseTask.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/managers/planet/PlanetManager.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/player/events/PlayerRecoveryEvent.h"

#include "server/zone/managers/planet/MapLocationTable.h"

#include "server/zone/objects/scene/variables/PendingTasksMap.h"

#include "server/zone/objects/tangible/tool/CraftingTool.h"

#include "server/zone/objects/player/events/PlayerDisconnectEvent.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/managers/creature/CreatureManager.h"

#include "server/zone/objects/scene/variables/CustomizationVariables.h"

#include "system/lang/Time.h"

#include "server/zone/objects/tangible/tool/SurveyTool.h"

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/managers/planet/HeightMap.h"

#include "server/zone/objects/player/badges/Badges.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "system/util/VectorMap.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "system/util/Vector.h"

/*
 *	MissionTerminalStub
 */

MissionTerminal::MissionTerminal() : Terminal(DummyConstructorParameter::instance()) {
	ManagedObject::_setImplementation(new MissionTerminalImplementation());
	ManagedObject::_getImplementation()->_setStub(this);
}

MissionTerminal::MissionTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

MissionTerminal::~MissionTerminal() {
}


void MissionTerminal::loadTemplateData(SharedObjectTemplate* templateData) {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		((MissionTerminalImplementation*) _getImplementation())->loadTemplateData(templateData);
}

void MissionTerminal::initializeTransientMembers() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		((MissionTerminalImplementation*) _getImplementation())->initializeTransientMembers();
}

bool MissionTerminal::isMissionTerminal() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionTerminalImplementation*) _getImplementation())->isMissionTerminal();
}

bool MissionTerminal::isArtisanTerminal() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionTerminalImplementation*) _getImplementation())->isArtisanTerminal();
}

bool MissionTerminal::isGeneralTerminal() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionTerminalImplementation*) _getImplementation())->isGeneralTerminal();
}

/*
 *	MissionTerminalImplementation
 */

MissionTerminalImplementation::MissionTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


MissionTerminalImplementation::~MissionTerminalImplementation() {
}


void MissionTerminalImplementation::finalize() {
}

void MissionTerminalImplementation::_initializeImplementation() {
	_setClassHelper(MissionTerminalHelper::instance());

	_serializationHelperMethod();
}

void MissionTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (MissionTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* MissionTerminalImplementation::_getStub() {
	return _this;
}

MissionTerminalImplementation::operator const MissionTerminal*() {
	return _this;
}

TransactionalObject* MissionTerminalImplementation::clone() {
	return (TransactionalObject*) new MissionTerminalImplementation(*this);
}


void MissionTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void MissionTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void MissionTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void MissionTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void MissionTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void MissionTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void MissionTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void MissionTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("MissionTerminal");

	addSerializableVariable("terminalType", &terminalType);
}

MissionTerminalImplementation::MissionTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(58):  		Logger.setLoggingName("MissionTerminal");
	Logger::setLoggingName("MissionTerminal");
}

void MissionTerminalImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(69):  		super.loadTemplateData(templateData);
	TerminalImplementation::loadTemplateData(templateData);
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(71):  		MissionTerminalTemplate 
	if (!templateData->isMissionTerminalTemplate())	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(72):  			return;
	return;
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(74):  templ = (MissionTerminalTemplate) templateData;
	MissionTerminalTemplate* templ = (MissionTerminalTemplate*) templateData;
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(76):  		terminalType = templ.getMissionTerminalType();
	terminalType = templ->getMissionTerminalType();
}

void MissionTerminalImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(80):  		super.initializeTransientMembers();
	TerminalImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(82):  		Logger.setLoggingName("MissionTerminal");
	Logger::setLoggingName("MissionTerminal");
}

bool MissionTerminalImplementation::isMissionTerminal() {
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(86):  		return true;
	return true;
}

bool MissionTerminalImplementation::isArtisanTerminal() {
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(90):  		return terminalType == "artisan";
	return terminalType == "artisan";
}

bool MissionTerminalImplementation::isGeneralTerminal() {
	// server/zone/objects/tangible/terminal/mission/MissionTerminal.idl(94):  		return terminalType == "general";
	return terminalType == "general";
}

/*
 *	MissionTerminalAdapter
 */

MissionTerminalAdapter::MissionTerminalAdapter(MissionTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* MissionTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		initializeTransientMembers();
		break;
	case 7:
		resp->insertBoolean(isMissionTerminal());
		break;
	case 8:
		resp->insertBoolean(isArtisanTerminal());
		break;
	case 9:
		resp->insertBoolean(isGeneralTerminal());
		break;
	default:
		return NULL;
	}

	return resp;
}

void MissionTerminalAdapter::initializeTransientMembers() {
	((MissionTerminalImplementation*) impl)->initializeTransientMembers();
}

bool MissionTerminalAdapter::isMissionTerminal() {
	return ((MissionTerminalImplementation*) impl)->isMissionTerminal();
}

bool MissionTerminalAdapter::isArtisanTerminal() {
	return ((MissionTerminalImplementation*) impl)->isArtisanTerminal();
}

bool MissionTerminalAdapter::isGeneralTerminal() {
	return ((MissionTerminalImplementation*) impl)->isGeneralTerminal();
}

/*
 *	MissionTerminalHelper
 */

MissionTerminalHelper* MissionTerminalHelper::staticInitializer = MissionTerminalHelper::instance();

MissionTerminalHelper::MissionTerminalHelper() {
	className = "MissionTerminal";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionTerminalHelper::finalizeHelper() {
	MissionTerminalHelper::finalize();
}

DistributedObject* MissionTerminalHelper::instantiateObject() {
	return new MissionTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionTerminalHelper::instantiateServant() {
	return new MissionTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionTerminalAdapter((MissionTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

