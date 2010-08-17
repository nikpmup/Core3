/*
 *	server/zone/objects/creature/VehicleObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "VehicleObject.h"

#include "server/zone/objects/tangible/TangibleObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/objects/intangible/VehicleControlDevice.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"


// Imported class dependencies

#include "server/zone/managers/object/ObjectMap.h"

#include "engine/util/Quaternion.h"

#include "server/zone/ZoneClientSession.h"

#include "server/zone/objects/scene/ObserverEventMap.h"

#include "system/util/SortedVector.h"

#include "server/zone/objects/player/TradeContainer.h"

#include "server/zone/Zone.h"

#include "server/zone/ZoneProcessServerImplementation.h"

#include "engine/core/ObjectUpdateToDatabaseTask.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/managers/planet/PlanetManager.h"

#include "server/zone/objects/creature/buffs/BuffList.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/player/events/PlayerRecoveryEvent.h"

#include "server/zone/managers/planet/MapLocationTable.h"

#include "server/zone/objects/scene/variables/PendingTasksMap.h"

#include "server/zone/objects/tangible/tool/CraftingTool.h"

#include "server/zone/objects/creature/damageovertime/DamageOverTimeList.h"

#include "server/zone/objects/player/events/PlayerDisconnectEvent.h"

#include "server/zone/objects/area/ActiveArea.h"

#include "server/zone/objects/creature/variables/CooldownTimerMap.h"

#include "server/zone/objects/intangible/ControlDevice.h"

#include "server/zone/managers/creature/CreatureManager.h"

#include "server/zone/objects/scene/variables/CustomizationVariables.h"

#include "system/lang/Time.h"

#include "server/zone/objects/scene/variables/DeltaVectorMap.h"

#include "server/zone/objects/tangible/tool/SurveyTool.h"

#include "server/zone/objects/scene/variables/DeltaVector.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/managers/planet/HeightMap.h"

#include "server/zone/objects/player/badges/Badges.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "system/util/VectorMap.h"

#include "server/zone/objects/scene/variables/StringId.h"

#include "server/zone/objects/group/GroupObject.h"

#include "system/util/Vector.h"

#include "server/zone/objects/tangible/weapon/WeaponObject.h"

#include "server/zone/objects/creature/variables/SkillBoxList.h"

/*
 *	VehicleObjectStub
 */

VehicleObject::VehicleObject() : CreatureObject(DummyConstructorParameter::instance()) {
	ManagedObject::_setImplementation(new VehicleObjectImplementation());
	ManagedObject::_getImplementation()->_setStub(this);
}

VehicleObject::VehicleObject(DummyConstructorParameter* param) : CreatureObject(param) {
}

VehicleObject::~VehicleObject() {
}


void VehicleObject::loadTemplateData(SharedObjectTemplate* templateData) {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		((VehicleObjectImplementation*) _getImplementation())->loadTemplateData(templateData);
}

void VehicleObject::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	if (isNull()) {
		throw ObjectNotLocalException(this);

	} else
		((VehicleObjectImplementation*) _getImplementation())->fillObjectMenuResponse(menuResponse, player);
}

bool VehicleObject::checkInRangeGarage() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return method.executeWithBooleanReturn();
	} else
		return ((VehicleObjectImplementation*) _getImplementation())->checkInRangeGarage();
}

void VehicleObject::insertToZone(Zone* zone) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(zone);

		method.executeWithVoidReturn();
	} else
		((VehicleObjectImplementation*) _getImplementation())->insertToZone(zone);
}

int VehicleObject::inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(attacker);
		method.addSignedIntParameter(damageType);
		method.addSignedIntParameter(damage);
		method.addBooleanParameter(destroy);
		method.addBooleanParameter(notifyClient);

		return method.executeWithSignedIntReturn();
	} else
		return ((VehicleObjectImplementation*) _getImplementation())->inflictDamage(attacker, damageType, damage, destroy, notifyClient);
}

int VehicleObject::healDamage(TangibleObject* healer, int damageType, int damageToHeal, bool notifyClient) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(healer);
		method.addSignedIntParameter(damageType);
		method.addSignedIntParameter(damageToHeal);
		method.addBooleanParameter(notifyClient);

		return method.executeWithSignedIntReturn();
	} else
		return ((VehicleObjectImplementation*) _getImplementation())->healDamage(healer, damageType, damageToHeal, notifyClient);
}

void VehicleObject::addDefender(SceneObject* defender) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((VehicleObjectImplementation*) _getImplementation())->addDefender(defender);
}

void VehicleObject::removeDefender(SceneObject* defender) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((VehicleObjectImplementation*) _getImplementation())->removeDefender(defender);
}

void VehicleObject::setDefender(SceneObject* defender) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(defender);

		method.executeWithVoidReturn();
	} else
		((VehicleObjectImplementation*) _getImplementation())->setDefender(defender);
}

bool VehicleObject::isAttackableBy(CreatureObject* object) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(object);

		return method.executeWithBooleanReturn();
	} else
		return ((VehicleObjectImplementation*) _getImplementation())->isAttackableBy(object);
}

int VehicleObject::notifyObjectDestructionObservers(TangibleObject* attacker, int condition) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(attacker);
		method.addSignedIntParameter(condition);

		return method.executeWithSignedIntReturn();
	} else
		return ((VehicleObjectImplementation*) _getImplementation())->notifyObjectDestructionObservers(attacker, condition);
}

int VehicleObject::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((VehicleObjectImplementation*) _getImplementation())->handleObjectMenuSelect(player, selectedID);
}

bool VehicleObject::isVehicleObject() {
	if (isNull()) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);

		return method.executeWithBooleanReturn();
	} else
		return ((VehicleObjectImplementation*) _getImplementation())->isVehicleObject();
}

/*
 *	VehicleObjectImplementation
 */

VehicleObjectImplementation::VehicleObjectImplementation(DummyConstructorParameter* param) : CreatureObjectImplementation(param) {
	_initializeImplementation();
}


VehicleObjectImplementation::~VehicleObjectImplementation() {
}


void VehicleObjectImplementation::finalize() {
}

void VehicleObjectImplementation::_initializeImplementation() {
	_setClassHelper(VehicleObjectHelper::instance());

	_serializationHelperMethod();
}

void VehicleObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (VehicleObject*) stub;
	CreatureObjectImplementation::_setStub(stub);
}

DistributedObjectStub* VehicleObjectImplementation::_getStub() {
	return _this;
}

VehicleObjectImplementation::operator const VehicleObject*() {
	return _this;
}

TransactionalObject* VehicleObjectImplementation::clone() {
	return (TransactionalObject*) new VehicleObjectImplementation(*this);
}


void VehicleObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void VehicleObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void VehicleObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void VehicleObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void VehicleObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void VehicleObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void VehicleObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void VehicleObjectImplementation::_serializationHelperMethod() {
	CreatureObjectImplementation::_serializationHelperMethod();

	_setClassName("VehicleObject");

	addSerializableVariable("vehicleType", &vehicleType);
}

VehicleObjectImplementation::VehicleObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/creature/VehicleObject.idl(63):  		vehicleType = SceneObject.HOVERVEHICLE;
	vehicleType = SceneObject::HOVERVEHICLE;
	// server/zone/objects/creature/VehicleObject.idl(65):  		Logger.setLoggingName("VehicleObject");
	Logger::setLoggingName("VehicleObject");
	// server/zone/objects/creature/VehicleObject.idl(66):  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/objects/creature/VehicleObject.idl(67):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
}

void VehicleObjectImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/creature/VehicleObject.idl(72):  		super.loadTemplateData(templateData);
	CreatureObjectImplementation::loadTemplateData(templateData);
	// server/zone/objects/creature/VehicleObject.idl(74):  		super.optionsBitmask = 0x1080;
	CreatureObjectImplementation::optionsBitmask = 0x1080;
	// server/zone/objects/creature/VehicleObject.idl(75):  		super.pvpStatusBitmask = 0;
	CreatureObjectImplementation::pvpStatusBitmask = 0;
}

void VehicleObjectImplementation::addDefender(SceneObject* defender) {
}

void VehicleObjectImplementation::removeDefender(SceneObject* defender) {
}

void VehicleObjectImplementation::setDefender(SceneObject* defender) {
}

bool VehicleObjectImplementation::isAttackableBy(CreatureObject* object) {
	// server/zone/objects/creature/VehicleObject.idl(143):  		return 
	if (CreatureObjectImplementation::linkedCreature == NULL)	// server/zone/objects/creature/VehicleObject.idl(144):  			return false;
	return false;
	// server/zone/objects/creature/VehicleObject.idl(146):  super.linkedCreature.isAttackableBy(object);
	return CreatureObjectImplementation::linkedCreature->isAttackableBy(object);
}

bool VehicleObjectImplementation::isVehicleObject() {
	// server/zone/objects/creature/VehicleObject.idl(168):  		return true;
	return true;
}

/*
 *	VehicleObjectAdapter
 */

VehicleObjectAdapter::VehicleObjectAdapter(VehicleObjectImplementation* obj) : CreatureObjectAdapter(obj) {
}

Packet* VehicleObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertBoolean(checkInRangeGarage());
		break;
	case 7:
		insertToZone((Zone*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertSignedInt(inflictDamage((TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter(), inv->getBooleanParameter()));
		break;
	case 9:
		resp->insertSignedInt(healDamage((TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter(), inv->getSignedIntParameter(), inv->getBooleanParameter()));
		break;
	case 10:
		addDefender((SceneObject*) inv->getObjectParameter());
		break;
	case 11:
		removeDefender((SceneObject*) inv->getObjectParameter());
		break;
	case 12:
		setDefender((SceneObject*) inv->getObjectParameter());
		break;
	case 13:
		resp->insertBoolean(isAttackableBy((CreatureObject*) inv->getObjectParameter()));
		break;
	case 14:
		resp->insertSignedInt(notifyObjectDestructionObservers((TangibleObject*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case 15:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 16:
		resp->insertBoolean(isVehicleObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

bool VehicleObjectAdapter::checkInRangeGarage() {
	return ((VehicleObjectImplementation*) impl)->checkInRangeGarage();
}

void VehicleObjectAdapter::insertToZone(Zone* zone) {
	((VehicleObjectImplementation*) impl)->insertToZone(zone);
}

int VehicleObjectAdapter::inflictDamage(TangibleObject* attacker, int damageType, int damage, bool destroy, bool notifyClient) {
	return ((VehicleObjectImplementation*) impl)->inflictDamage(attacker, damageType, damage, destroy, notifyClient);
}

int VehicleObjectAdapter::healDamage(TangibleObject* healer, int damageType, int damageToHeal, bool notifyClient) {
	return ((VehicleObjectImplementation*) impl)->healDamage(healer, damageType, damageToHeal, notifyClient);
}

void VehicleObjectAdapter::addDefender(SceneObject* defender) {
	((VehicleObjectImplementation*) impl)->addDefender(defender);
}

void VehicleObjectAdapter::removeDefender(SceneObject* defender) {
	((VehicleObjectImplementation*) impl)->removeDefender(defender);
}

void VehicleObjectAdapter::setDefender(SceneObject* defender) {
	((VehicleObjectImplementation*) impl)->setDefender(defender);
}

bool VehicleObjectAdapter::isAttackableBy(CreatureObject* object) {
	return ((VehicleObjectImplementation*) impl)->isAttackableBy(object);
}

int VehicleObjectAdapter::notifyObjectDestructionObservers(TangibleObject* attacker, int condition) {
	return ((VehicleObjectImplementation*) impl)->notifyObjectDestructionObservers(attacker, condition);
}

int VehicleObjectAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((VehicleObjectImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

bool VehicleObjectAdapter::isVehicleObject() {
	return ((VehicleObjectImplementation*) impl)->isVehicleObject();
}

/*
 *	VehicleObjectHelper
 */

VehicleObjectHelper* VehicleObjectHelper::staticInitializer = VehicleObjectHelper::instance();

VehicleObjectHelper::VehicleObjectHelper() {
	className = "VehicleObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void VehicleObjectHelper::finalizeHelper() {
	VehicleObjectHelper::finalize();
}

DistributedObject* VehicleObjectHelper::instantiateObject() {
	return new VehicleObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* VehicleObjectHelper::instantiateServant() {
	return new VehicleObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* VehicleObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new VehicleObjectAdapter((VehicleObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

