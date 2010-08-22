/*
 *	server/zone/objects/mission/MissionObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "MissionObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/objects/waypoint/WaypointObject.h"

#include "server/zone/Zone.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/mission/MissionObserver.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/mission/MissionObjective.h"

/*
 *	MissionObjectStub
 */

MissionObject::MissionObject() : IntangibleObject(DummyConstructorParameter::instance()) {
	_impl = new MissionObjectImplementation();
	_impl->_setStub(this);
}

MissionObject::MissionObject(DummyConstructorParameter* param) : IntangibleObject(param) {
}

MissionObject::~MissionObject() {
}


WaypointObject* MissionObject::createWaypoint() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return (WaypointObject*) method.executeWithObjectReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->createWaypoint();
}

void MissionObject::destroyObjectFromDatabase(bool destroyContainedObjects) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

void MissionObject::updateToDatabaseAllObjects(bool startTask) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addBooleanParameter(startTask);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->updateToDatabaseAllObjects(startTask);
}

void MissionObject::setRefreshCounter(int ctr, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addSignedIntParameter(ctr);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setRefreshCounter(ctr, notifyClient);
}

void MissionObject::setTypeCRC(unsigned int crc, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addUnsignedIntParameter(crc);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setTypeCRC(crc, notifyClient);
}

void MissionObject::initializeTransientMembers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->initializeTransientMembers();
}

void MissionObject::sendBaselinesTo(SceneObject* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->sendBaselinesTo(player);
}

void MissionObject::setMissionDescription(const String& file, const String& id, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addAsciiParameter(file);
		method.addAsciiParameter(id);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionDescription(file, id, notifyClient);
}

void MissionObject::setMissionTitle(const String& file, const String& id, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addAsciiParameter(file);
		method.addAsciiParameter(id);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionTitle(file, id, notifyClient);
}

void MissionObject::setMissionTargetName(const String& target, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addAsciiParameter(target);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionTargetName(target, notifyClient);
}

void MissionObject::setMissionDifficulty(int difficulty, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addSignedIntParameter(difficulty);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionDifficulty(difficulty, notifyClient);
}

void MissionObject::setRewardCredits(int creds, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(creds);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setRewardCredits(creds, notifyClient);
}

void MissionObject::setTargetTemplate(SharedObjectTemplate* templ, bool notifyClient) {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		((MissionObjectImplementation*) _impl)->setTargetTemplate(templ, notifyClient);
}

void MissionObject::setStartPosition(float posX, float posY, unsigned int planetCRC, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addFloatParameter(posX);
		method.addFloatParameter(posY);
		method.addUnsignedIntParameter(planetCRC);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setStartPosition(posX, posY, planetCRC, notifyClient);
}

void MissionObject::setEndPosition(float posX, float posY, unsigned int planetCRC, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addFloatParameter(posX);
		method.addFloatParameter(posY);
		method.addUnsignedIntParameter(planetCRC);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setEndPosition(posX, posY, planetCRC, notifyClient);
}

void MissionObject::setCreatorName(const String& name, bool notifyClient) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addAsciiParameter(name);
		method.addBooleanParameter(notifyClient);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setCreatorName(name, notifyClient);
}

void MissionObject::updateMissionLocation() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->updateMissionLocation();
}

void MissionObject::abort() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->abort();
}

void MissionObject::setMissionObjective(MissionObjective* obj) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);
		method.addObjectParameter(obj);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionObjective(obj);
}

void MissionObject::setStartPlanetCRC(unsigned int crc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);
		method.addUnsignedIntParameter(crc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setStartPlanetCRC(crc);
}

void MissionObject::setEndPlanetCRC(unsigned int crc) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addUnsignedIntParameter(crc);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setEndPlanetCRC(crc);
}

void MissionObject::setMissionTarget(SceneObject* target) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionTarget(target);
}

void MissionObject::setMissionTargetDest(SceneObject* target) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);
		method.addObjectParameter(target);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionTargetDest(target);
}

void MissionObject::setMissionNumber(int num) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addSignedIntParameter(num);

		method.executeWithVoidReturn();
	} else
		((MissionObjectImplementation*) _impl)->setMissionNumber(num);
}

float MissionObject::getStartPositionX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getStartPositionX();
}

float MissionObject::getStartPositionY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getStartPositionY();
}

unsigned int MissionObject::getStartPlanetCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getStartPlanetCRC();
}

float MissionObject::getEndPositionX() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getEndPositionX();
}

float MissionObject::getEndPositionY() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithFloatReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getEndPositionY();
}

unsigned int MissionObject::getEndPlanetCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getEndPlanetCRC();
}

WaypointObject* MissionObject::getWaypointToMission() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return (WaypointObject*) method.executeWithObjectReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getWaypointToMission();
}

SceneObject* MissionObject::getMissionTarget() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getMissionTarget();
}

SceneObject* MissionObject::getMissionTargetDest() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getMissionTargetDest();
}

unsigned int MissionObject::getTypeCRC() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return method.executeWithUnsignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getTypeCRC();
}

int MissionObject::getRewardCredits() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return method.executeWithSignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getRewardCredits();
}

UnicodeString MissionObject::getCreatorName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		method.executeWithUnicodeReturn(_return_getCreatorName);
		return _return_getCreatorName;
	} else
		return ((MissionObjectImplementation*) _impl)->getCreatorName();
}

int MissionObject::getDifficultyLevel() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		return method.executeWithSignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getDifficultyLevel();
}

StringId* MissionObject::getMissionDescription() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((MissionObjectImplementation*) _impl)->getMissionDescription();
}

StringId* MissionObject::getMissionTitle() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((MissionObjectImplementation*) _impl)->getMissionTitle();
}

String MissionObject::getTargetName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);

		method.executeWithAsciiReturn(_return_getTargetName);
		return _return_getTargetName;
	} else
		return ((MissionObjectImplementation*) _impl)->getTargetName();
}

int MissionObject::getRefreshCounter() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);

		return method.executeWithSignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getRefreshCounter();
}

int MissionObject::getMissionNumber() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);

		return method.executeWithSignedIntReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->getMissionNumber();
}

SharedObjectTemplate* MissionObject::getTargetTemplate() {
	if (_impl == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return ((MissionObjectImplementation*) _impl)->getTargetTemplate();
}

bool MissionObject::isSurveyMission() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->isSurveyMission();
}

bool MissionObject::isMissionObject() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		return method.executeWithBooleanReturn();
	} else
		return ((MissionObjectImplementation*) _impl)->isMissionObject();
}

/*
 *	MissionObjectImplementation
 */

MissionObjectImplementation::MissionObjectImplementation(DummyConstructorParameter* param) : IntangibleObjectImplementation(param) {
	_initializeImplementation();
}

MissionObjectImplementation::~MissionObjectImplementation() {
}


void MissionObjectImplementation::finalize() {
}

void MissionObjectImplementation::_initializeImplementation() {
	_setClassHelper(MissionObjectHelper::instance());

	_serializationHelperMethod();
}

void MissionObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (MissionObject*) stub;
	IntangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* MissionObjectImplementation::_getStub() {
	return _this;
}

MissionObjectImplementation::operator const MissionObject*() {
	return _this;
}

void MissionObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void MissionObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void MissionObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void MissionObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void MissionObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void MissionObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void MissionObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void MissionObjectImplementation::_serializationHelperMethod() {
	IntangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("MissionObject");

	addSerializableVariable("waypointToMission", &waypointToMission);
	addSerializableVariable("missionObjective", &missionObjective);
	addSerializableVariable("typeCRC", &typeCRC);
	addSerializableVariable("difficultyLevel", &difficultyLevel);
	addSerializableVariable("creatorName", &creatorName);
	addSerializableVariable("rewardCredits", &rewardCredits);
	addSerializableVariable("missionNumber", &missionNumber);
	addSerializableVariable("startPositionX", &startPositionX);
	addSerializableVariable("startPositionY", &startPositionY);
	addSerializableVariable("startPlanetCRC", &startPlanetCRC);
	addSerializableVariable("endPositionX", &endPositionX);
	addSerializableVariable("endPositionY", &endPositionY);
	addSerializableVariable("endPlanetCRC", &endPlanetCRC);
	addSerializableVariable("missionDescription", &missionDescription);
	addSerializableVariable("missionTitle", &missionTitle);
	addSerializableVariable("refreshCounter", &refreshCounter);
	addSerializableVariable("targetName", &targetName);
	addSerializableVariable("missionTarget", &missionTarget);
	addSerializableVariable("missionTargetDest", &missionTargetDest);
	addSerializableVariable("targetTemplate", &targetTemplate);
}

MissionObjectImplementation::MissionObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/mission/MissionObject.idl(111):  		typeCRC = SURVEY;
	typeCRC = SURVEY;
	// server/zone/objects/mission/MissionObject.idl(113):  		refreshCounter = 0;
	refreshCounter = 0;
	// server/zone/objects/mission/MissionObject.idl(118):  		missionDescription.setStringId("mission/mission_npc_survey_neutral_easy", "m1o");
	(&missionDescription)->setStringId("mission/mission_npc_survey_neutral_easy", "m1o");
	// server/zone/objects/mission/MissionObject.idl(119):  		missionTitle.setStringId("mission/mission_npc_survey_neutral_easy", "m1t");
	(&missionTitle)->setStringId("mission/mission_npc_survey_neutral_easy", "m1t");
	// server/zone/objects/mission/MissionObject.idl(120):  		targetName = "Testing target name";
	targetName = "Testing target name";
	// server/zone/objects/mission/MissionObject.idl(121):  		difficultyLevel = 50;
	difficultyLevel = 50;
	// server/zone/objects/mission/MissionObject.idl(123):  		rewardCredits = 100;
	rewardCredits = 100;
	// server/zone/objects/mission/MissionObject.idl(125):  		startPositionX = 0;
	startPositionX = 0;
	// server/zone/objects/mission/MissionObject.idl(126):  		startPositionY = 0;
	startPositionY = 0;
	// server/zone/objects/mission/MissionObject.idl(127):  		startPlanetCRC = 0;
	startPlanetCRC = 0;
	// server/zone/objects/mission/MissionObject.idl(129):  		Logger.setLoggingName("MissionObject");
	Logger::setLoggingName("MissionObject");
}

void MissionObjectImplementation::abort() {
	// server/zone/objects/mission/MissionObject.idl(170):  	}
	if (missionObjective != NULL)	// server/zone/objects/mission/MissionObject.idl(171):  			missionObjective.abort();
	missionObjective->abort();
}

void MissionObjectImplementation::setMissionObjective(MissionObjective* obj) {
	// server/zone/objects/mission/MissionObject.idl(175):  		missionObjective = obj;
	missionObjective = obj;
}

void MissionObjectImplementation::setStartPlanetCRC(unsigned int crc) {
	// server/zone/objects/mission/MissionObject.idl(179):  		startPlanetCRC = crc;
	startPlanetCRC = crc;
}

void MissionObjectImplementation::setEndPlanetCRC(unsigned int crc) {
	// server/zone/objects/mission/MissionObject.idl(183):  		endPlanetCRC = crc;
	endPlanetCRC = crc;
}

void MissionObjectImplementation::setMissionTarget(SceneObject* target) {
	// server/zone/objects/mission/MissionObject.idl(187):  		missionTarget = target;
	missionTarget = target;
}

void MissionObjectImplementation::setMissionTargetDest(SceneObject* target) {
	// server/zone/objects/mission/MissionObject.idl(191):  		missionTargetDest = target;
	missionTargetDest = target;
}

void MissionObjectImplementation::setMissionNumber(int num) {
	// server/zone/objects/mission/MissionObject.idl(195):  		missionNumber = num;
	missionNumber = num;
}

float MissionObjectImplementation::getStartPositionX() {
	// server/zone/objects/mission/MissionObject.idl(199):  		return startPositionX;
	return startPositionX;
}

float MissionObjectImplementation::getStartPositionY() {
	// server/zone/objects/mission/MissionObject.idl(203):  		return startPositionY;
	return startPositionY;
}

unsigned int MissionObjectImplementation::getStartPlanetCRC() {
	// server/zone/objects/mission/MissionObject.idl(207):  		return startPlanetCRC;
	return startPlanetCRC;
}

float MissionObjectImplementation::getEndPositionX() {
	// server/zone/objects/mission/MissionObject.idl(211):  		return endPositionX;
	return endPositionX;
}

float MissionObjectImplementation::getEndPositionY() {
	// server/zone/objects/mission/MissionObject.idl(215):  		return endPositionY;
	return endPositionY;
}

unsigned int MissionObjectImplementation::getEndPlanetCRC() {
	// server/zone/objects/mission/MissionObject.idl(219):  		return endPlanetCRC;
	return endPlanetCRC;
}

WaypointObject* MissionObjectImplementation::getWaypointToMission() {
	// server/zone/objects/mission/MissionObject.idl(223):  		return waypointToMission;
	return waypointToMission;
}

SceneObject* MissionObjectImplementation::getMissionTarget() {
	// server/zone/objects/mission/MissionObject.idl(227):  		return missionTarget;
	return missionTarget;
}

SceneObject* MissionObjectImplementation::getMissionTargetDest() {
	// server/zone/objects/mission/MissionObject.idl(231):  		return missionTargetDest;
	return missionTargetDest;
}

unsigned int MissionObjectImplementation::getTypeCRC() {
	// server/zone/objects/mission/MissionObject.idl(235):  		return typeCRC;
	return typeCRC;
}

int MissionObjectImplementation::getRewardCredits() {
	// server/zone/objects/mission/MissionObject.idl(239):  		return rewardCredits;
	return rewardCredits;
}

UnicodeString MissionObjectImplementation::getCreatorName() {
	// server/zone/objects/mission/MissionObject.idl(243):  		return creatorName;
	return creatorName;
}

int MissionObjectImplementation::getDifficultyLevel() {
	// server/zone/objects/mission/MissionObject.idl(247):  		return difficultyLevel;
	return difficultyLevel;
}

StringId* MissionObjectImplementation::getMissionDescription() {
	// server/zone/objects/mission/MissionObject.idl(252):  		return missionDescription;
	return (&missionDescription);
}

StringId* MissionObjectImplementation::getMissionTitle() {
	// server/zone/objects/mission/MissionObject.idl(257):  		return missionTitle;
	return (&missionTitle);
}

String MissionObjectImplementation::getTargetName() {
	// server/zone/objects/mission/MissionObject.idl(261):  		return targetName;
	return targetName;
}

int MissionObjectImplementation::getRefreshCounter() {
	// server/zone/objects/mission/MissionObject.idl(265):  		return refreshCounter;
	return refreshCounter;
}

int MissionObjectImplementation::getMissionNumber() {
	// server/zone/objects/mission/MissionObject.idl(269):  		return missionNumber;
	return missionNumber;
}

bool MissionObjectImplementation::isSurveyMission() {
	// server/zone/objects/mission/MissionObject.idl(276):  		return typeCRC == this.SURVEY;
	return typeCRC == _this->SURVEY;
}

bool MissionObjectImplementation::isMissionObject() {
	// server/zone/objects/mission/MissionObject.idl(280):  		return true;
	return true;
}

/*
 *	MissionObjectAdapter
 */

MissionObjectAdapter::MissionObjectAdapter(MissionObjectImplementation* obj) : IntangibleObjectAdapter(obj) {
}

Packet* MissionObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertLong(createWaypoint()->_getObjectID());
		break;
	case 7:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case 8:
		updateToDatabaseAllObjects(inv->getBooleanParameter());
		break;
	case 9:
		setRefreshCounter(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 10:
		setTypeCRC(inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case 11:
		initializeTransientMembers();
		break;
	case 12:
		sendBaselinesTo((SceneObject*) inv->getObjectParameter());
		break;
	case 13:
		setMissionDescription(inv->getAsciiParameter(_param0_setMissionDescription__String_String_bool_), inv->getAsciiParameter(_param1_setMissionDescription__String_String_bool_), inv->getBooleanParameter());
		break;
	case 14:
		setMissionTitle(inv->getAsciiParameter(_param0_setMissionTitle__String_String_bool_), inv->getAsciiParameter(_param1_setMissionTitle__String_String_bool_), inv->getBooleanParameter());
		break;
	case 15:
		setMissionTargetName(inv->getAsciiParameter(_param0_setMissionTargetName__String_bool_), inv->getBooleanParameter());
		break;
	case 16:
		setMissionDifficulty(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 17:
		setRewardCredits(inv->getSignedIntParameter(), inv->getBooleanParameter());
		break;
	case 18:
		setStartPosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case 19:
		setEndPosition(inv->getFloatParameter(), inv->getFloatParameter(), inv->getUnsignedIntParameter(), inv->getBooleanParameter());
		break;
	case 20:
		setCreatorName(inv->getAsciiParameter(_param0_setCreatorName__String_bool_), inv->getBooleanParameter());
		break;
	case 21:
		updateMissionLocation();
		break;
	case 22:
		abort();
		break;
	case 23:
		setMissionObjective((MissionObjective*) inv->getObjectParameter());
		break;
	case 24:
		setStartPlanetCRC(inv->getUnsignedIntParameter());
		break;
	case 25:
		setEndPlanetCRC(inv->getUnsignedIntParameter());
		break;
	case 26:
		setMissionTarget((SceneObject*) inv->getObjectParameter());
		break;
	case 27:
		setMissionTargetDest((SceneObject*) inv->getObjectParameter());
		break;
	case 28:
		setMissionNumber(inv->getSignedIntParameter());
		break;
	case 29:
		resp->insertFloat(getStartPositionX());
		break;
	case 30:
		resp->insertFloat(getStartPositionY());
		break;
	case 31:
		resp->insertInt(getStartPlanetCRC());
		break;
	case 32:
		resp->insertFloat(getEndPositionX());
		break;
	case 33:
		resp->insertFloat(getEndPositionY());
		break;
	case 34:
		resp->insertInt(getEndPlanetCRC());
		break;
	case 35:
		resp->insertLong(getWaypointToMission()->_getObjectID());
		break;
	case 36:
		resp->insertLong(getMissionTarget()->_getObjectID());
		break;
	case 37:
		resp->insertLong(getMissionTargetDest()->_getObjectID());
		break;
	case 38:
		resp->insertInt(getTypeCRC());
		break;
	case 39:
		resp->insertSignedInt(getRewardCredits());
		break;
	case 40:
		resp->insertUnicode(getCreatorName());
		break;
	case 41:
		resp->insertSignedInt(getDifficultyLevel());
		break;
	case 42:
		resp->insertAscii(getTargetName());
		break;
	case 43:
		resp->insertSignedInt(getRefreshCounter());
		break;
	case 44:
		resp->insertSignedInt(getMissionNumber());
		break;
	case 45:
		resp->insertBoolean(isSurveyMission());
		break;
	case 46:
		resp->insertBoolean(isMissionObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

WaypointObject* MissionObjectAdapter::createWaypoint() {
	return ((MissionObjectImplementation*) impl)->createWaypoint();
}

void MissionObjectAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	((MissionObjectImplementation*) impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

void MissionObjectAdapter::updateToDatabaseAllObjects(bool startTask) {
	((MissionObjectImplementation*) impl)->updateToDatabaseAllObjects(startTask);
}

void MissionObjectAdapter::setRefreshCounter(int ctr, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setRefreshCounter(ctr, notifyClient);
}

void MissionObjectAdapter::setTypeCRC(unsigned int crc, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setTypeCRC(crc, notifyClient);
}

void MissionObjectAdapter::initializeTransientMembers() {
	((MissionObjectImplementation*) impl)->initializeTransientMembers();
}

void MissionObjectAdapter::sendBaselinesTo(SceneObject* player) {
	((MissionObjectImplementation*) impl)->sendBaselinesTo(player);
}

void MissionObjectAdapter::setMissionDescription(const String& file, const String& id, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setMissionDescription(file, id, notifyClient);
}

void MissionObjectAdapter::setMissionTitle(const String& file, const String& id, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setMissionTitle(file, id, notifyClient);
}

void MissionObjectAdapter::setMissionTargetName(const String& target, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setMissionTargetName(target, notifyClient);
}

void MissionObjectAdapter::setMissionDifficulty(int difficulty, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setMissionDifficulty(difficulty, notifyClient);
}

void MissionObjectAdapter::setRewardCredits(int creds, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setRewardCredits(creds, notifyClient);
}

void MissionObjectAdapter::setStartPosition(float posX, float posY, unsigned int planetCRC, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setStartPosition(posX, posY, planetCRC, notifyClient);
}

void MissionObjectAdapter::setEndPosition(float posX, float posY, unsigned int planetCRC, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setEndPosition(posX, posY, planetCRC, notifyClient);
}

void MissionObjectAdapter::setCreatorName(const String& name, bool notifyClient) {
	((MissionObjectImplementation*) impl)->setCreatorName(name, notifyClient);
}

void MissionObjectAdapter::updateMissionLocation() {
	((MissionObjectImplementation*) impl)->updateMissionLocation();
}

void MissionObjectAdapter::abort() {
	((MissionObjectImplementation*) impl)->abort();
}

void MissionObjectAdapter::setMissionObjective(MissionObjective* obj) {
	((MissionObjectImplementation*) impl)->setMissionObjective(obj);
}

void MissionObjectAdapter::setStartPlanetCRC(unsigned int crc) {
	((MissionObjectImplementation*) impl)->setStartPlanetCRC(crc);
}

void MissionObjectAdapter::setEndPlanetCRC(unsigned int crc) {
	((MissionObjectImplementation*) impl)->setEndPlanetCRC(crc);
}

void MissionObjectAdapter::setMissionTarget(SceneObject* target) {
	((MissionObjectImplementation*) impl)->setMissionTarget(target);
}

void MissionObjectAdapter::setMissionTargetDest(SceneObject* target) {
	((MissionObjectImplementation*) impl)->setMissionTargetDest(target);
}

void MissionObjectAdapter::setMissionNumber(int num) {
	((MissionObjectImplementation*) impl)->setMissionNumber(num);
}

float MissionObjectAdapter::getStartPositionX() {
	return ((MissionObjectImplementation*) impl)->getStartPositionX();
}

float MissionObjectAdapter::getStartPositionY() {
	return ((MissionObjectImplementation*) impl)->getStartPositionY();
}

unsigned int MissionObjectAdapter::getStartPlanetCRC() {
	return ((MissionObjectImplementation*) impl)->getStartPlanetCRC();
}

float MissionObjectAdapter::getEndPositionX() {
	return ((MissionObjectImplementation*) impl)->getEndPositionX();
}

float MissionObjectAdapter::getEndPositionY() {
	return ((MissionObjectImplementation*) impl)->getEndPositionY();
}

unsigned int MissionObjectAdapter::getEndPlanetCRC() {
	return ((MissionObjectImplementation*) impl)->getEndPlanetCRC();
}

WaypointObject* MissionObjectAdapter::getWaypointToMission() {
	return ((MissionObjectImplementation*) impl)->getWaypointToMission();
}

SceneObject* MissionObjectAdapter::getMissionTarget() {
	return ((MissionObjectImplementation*) impl)->getMissionTarget();
}

SceneObject* MissionObjectAdapter::getMissionTargetDest() {
	return ((MissionObjectImplementation*) impl)->getMissionTargetDest();
}

unsigned int MissionObjectAdapter::getTypeCRC() {
	return ((MissionObjectImplementation*) impl)->getTypeCRC();
}

int MissionObjectAdapter::getRewardCredits() {
	return ((MissionObjectImplementation*) impl)->getRewardCredits();
}

UnicodeString MissionObjectAdapter::getCreatorName() {
	return ((MissionObjectImplementation*) impl)->getCreatorName();
}

int MissionObjectAdapter::getDifficultyLevel() {
	return ((MissionObjectImplementation*) impl)->getDifficultyLevel();
}

String MissionObjectAdapter::getTargetName() {
	return ((MissionObjectImplementation*) impl)->getTargetName();
}

int MissionObjectAdapter::getRefreshCounter() {
	return ((MissionObjectImplementation*) impl)->getRefreshCounter();
}

int MissionObjectAdapter::getMissionNumber() {
	return ((MissionObjectImplementation*) impl)->getMissionNumber();
}

bool MissionObjectAdapter::isSurveyMission() {
	return ((MissionObjectImplementation*) impl)->isSurveyMission();
}

bool MissionObjectAdapter::isMissionObject() {
	return ((MissionObjectImplementation*) impl)->isMissionObject();
}

/*
 *	MissionObjectHelper
 */

MissionObjectHelper* MissionObjectHelper::staticInitializer = MissionObjectHelper::instance();

MissionObjectHelper::MissionObjectHelper() {
	className = "MissionObject";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void MissionObjectHelper::finalizeHelper() {
	MissionObjectHelper::finalize();
}

DistributedObject* MissionObjectHelper::instantiateObject() {
	return new MissionObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* MissionObjectHelper::instantiateServant() {
	return new MissionObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* MissionObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new MissionObjectAdapter((MissionObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

