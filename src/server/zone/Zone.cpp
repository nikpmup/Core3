/*
 *	server/zone/Zone.cpp generated by engine3 IDL compiler 0.60
 */

#include "Zone.h"

#include "server/zone/ZoneProcessServer.h"

#include "server/zone/managers/structure/StructureManager.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/managers/planet/PlanetManager.h"

#include "server/zone/managers/city/CityManager.h"

#include "server/zone/managers/creature/CreatureManager.h"

#include "server/zone/managers/objectcontroller/ObjectController.h"

#include "server/zone/objects/building/cloning/CloningBuildingObject.h"

#include "server/zone/objects/creature/CreatureObject.h"

/*
 *	ZoneStub
 */

Zone::Zone(ZoneProcessServer* processor, int zoneid) : ManagedObject(DummyConstructorParameter::instance()) {
	ZoneImplementation* _implementation = new ZoneImplementation(processor, zoneid);
	_impl = _implementation;
	_impl->_setStub(this);
}

Zone::Zone(DummyConstructorParameter* param) : ManagedObject(param) {
}

Zone::~Zone() {
}


void Zone::initializeTransientMembers() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

CloningBuildingObject* Zone::getNearestCloningBuilding(CreatureObject* creature) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(creature);

		return (CloningBuildingObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getNearestCloningBuilding(creature);
}

SceneObject* Zone::getNearestPlanetaryObject(SceneObject* object, unsigned int mapObjectLocationType) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(object);
		method.addUnsignedIntParameter(mapObjectLocationType);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return _implementation->getNearestPlanetaryObject(object, mapObjectLocationType);
}

void Zone::initializePrivateData() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);

		method.executeWithVoidReturn();
	} else
		_implementation->initializePrivateData();
}

QuadTree* Zone::getRegionTree() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getRegionTree();
}

int Zone::getInRangeObjects(float x, float y, float range, SortedVector<ManagedReference<SceneObject* > >* objects) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getInRangeObjects(x, y, range, objects);
}

SortedVector<ManagedReference<SceneObject* > > Zone::getPlanetaryObjectList(unsigned int mapObjectLocationType) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getPlanetaryObjectList(mapObjectLocationType);
}

void Zone::insert(QuadTreeEntry* entry) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->insert(entry);
}

void Zone::remove(QuadTreeEntry* entry) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->remove(entry);
}

void Zone::update(QuadTreeEntry* entry) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->update(entry);
}

void Zone::inRange(QuadTreeEntry* entry, float range) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->inRange(entry, range);
}

void Zone::updateActiveAreas(SceneObject* object) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->updateActiveAreas(object);
}

void Zone::startManagers() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);

		method.executeWithVoidReturn();
	} else
		_implementation->startManagers();
}

void Zone::stopManagers() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);

		method.executeWithVoidReturn();
	} else
		_implementation->stopManagers();
}

float Zone::getHeight(float x, float y) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addFloatParameter(x);
		method.addFloatParameter(y);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getHeight(x, y);
}

void Zone::addSceneObject(SceneObject* object) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->addSceneObject(object);
}

void Zone::sendMapLocationsTo(const String& planetName, SceneObject* player) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addAsciiParameter(planetName);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendMapLocationsTo(planetName, player);
}

void Zone::dropSceneObject(SceneObject* object) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(object);

		method.executeWithVoidReturn();
	} else
		_implementation->dropSceneObject(object);
}

int Zone::getZoneID() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getZoneID();
}

String Zone::getPlanetName() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		method.executeWithAsciiReturn(_return_getPlanetName);
		return _return_getPlanetName;
	} else
		return _implementation->getPlanetName();
}

PlanetManager* Zone::getPlanetManager() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return (PlanetManager*) method.executeWithObjectReturn();
	} else
		return _implementation->getPlanetManager();
}

CityManager* Zone::getCityManager() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return (CityManager*) method.executeWithObjectReturn();
	} else
		return _implementation->getCityManager();
}

ZoneServer* Zone::getZoneServer() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return (ZoneServer*) method.executeWithObjectReturn();
	} else
		return _implementation->getZoneServer();
}

CreatureManager* Zone::getCreatureManager() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return (CreatureManager*) method.executeWithObjectReturn();
	} else
		return _implementation->getCreatureManager();
}

unsigned long long Zone::getGalacticTime() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithUnsignedLongReturn();
	} else
		return _implementation->getGalacticTime();
}

unsigned int Zone::getWeatherID() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithUnsignedIntReturn();
	} else
		return _implementation->getWeatherID();
}

void Zone::setWeatherID(unsigned int value) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);
		method.addUnsignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setWeatherID(value);
}

void Zone::changeWeatherID(int value) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->changeWeatherID(value);
}

bool Zone::isWeatherEnabled() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isWeatherEnabled();
}

bool Zone::hasManagersStarted() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->hasManagersStarted();
}

void Zone::setWeatherEnabled(bool value) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);
		method.addBooleanParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setWeatherEnabled(value);
}

void Zone::setWeatherWindX(float value) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setWeatherWindX(value);
}

void Zone::setWeatherWindY(float value) {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);
		method.addFloatParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->setWeatherWindY(value);
}

float Zone::getWeatherWindX() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getWeatherWindX();
}

float Zone::getWeatherWindY() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getWeatherWindY();
}

float Zone::getMinX() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getMinX();
}

float Zone::getMaxX() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getMaxX();
}

float Zone::getMinY() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getMinY();
}

float Zone::getMaxY() {
	ZoneImplementation* _implementation = (ZoneImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getMaxY();
}

DistributedObjectServant* Zone::_getImplementation() {

	_updated = true;
	return _impl;
}

void Zone::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	ZoneImplementation
 */

ZoneImplementation::ZoneImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}


ZoneImplementation::~ZoneImplementation() {
	ZoneImplementation::finalize();
}


void ZoneImplementation::_initializeImplementation() {
	_setClassHelper(ZoneHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void ZoneImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (Zone*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ZoneImplementation::_getStub() {
	return _this;
}

ZoneImplementation::operator const Zone*() {
	return _this;
}

void ZoneImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ZoneImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ZoneImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ZoneImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ZoneImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ZoneImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ZoneImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ZoneImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("Zone");

}

void ZoneImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(ZoneImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool ZoneImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ManagedObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "zoneID") {
		TypeInfo<int >::parseFromBinaryStream(&zoneID, stream);
		return true;
	}

	if (_name == "objectMap") {
		TypeInfo<ObjectMap >::parseFromBinaryStream(&objectMap, stream);
		return true;
	}

	if (_name == "planetManager") {
		TypeInfo<ManagedReference<PlanetManager* > >::parseFromBinaryStream(&planetManager, stream);
		return true;
	}

	if (_name == "cityManager") {
		TypeInfo<ManagedReference<CityManager* > >::parseFromBinaryStream(&cityManager, stream);
		return true;
	}

	if (_name == "creatureManager") {
		TypeInfo<ManagedReference<CreatureManager* > >::parseFromBinaryStream(&creatureManager, stream);
		return true;
	}

	if (_name == "server") {
		TypeInfo<ManagedWeakReference<ZoneServer* > >::parseFromBinaryStream(&server, stream);
		return true;
	}

	if (_name == "galacticTime") {
		TypeInfo<Time >::parseFromBinaryStream(&galacticTime, stream);
		return true;
	}

	if (_name == "managersStarted") {
		TypeInfo<bool >::parseFromBinaryStream(&managersStarted, stream);
		return true;
	}

	if (_name == "weatherWindX") {
		TypeInfo<float >::parseFromBinaryStream(&weatherWindX, stream);
		return true;
	}

	if (_name == "weatherWindY") {
		TypeInfo<float >::parseFromBinaryStream(&weatherWindY, stream);
		return true;
	}

	if (_name == "weatherID") {
		TypeInfo<unsigned int >::parseFromBinaryStream(&weatherID, stream);
		return true;
	}

	if (_name == "weatherEnabled") {
		TypeInfo<bool >::parseFromBinaryStream(&weatherEnabled, stream);
		return true;
	}


	return false;
}

void ZoneImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = ZoneImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int ZoneImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "zoneID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&zoneID, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "objectMap";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ObjectMap >::toBinaryStream(&objectMap, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "planetManager";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<PlanetManager* > >::toBinaryStream(&planetManager, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "cityManager";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<CityManager* > >::toBinaryStream(&cityManager, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "creatureManager";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<CreatureManager* > >::toBinaryStream(&creatureManager, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "server";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedWeakReference<ZoneServer* > >::toBinaryStream(&server, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "galacticTime";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Time >::toBinaryStream(&galacticTime, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "managersStarted";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&managersStarted, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "weatherWindX";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&weatherWindX, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "weatherWindY";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<float >::toBinaryStream(&weatherWindY, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "weatherID";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<unsigned int >::toBinaryStream(&weatherID, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "weatherEnabled";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&weatherEnabled, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 12 + ManagedObjectImplementation::writeObjectMembers(stream);
}

QuadTree* ZoneImplementation::getRegionTree() {
	// server/zone/Zone.idl():  		return regionTree;
	return regionTree;
}

int ZoneImplementation::getZoneID() {
	// server/zone/Zone.idl():  		return zoneID;
	return zoneID;
}

PlanetManager* ZoneImplementation::getPlanetManager() {
	// server/zone/Zone.idl():  		return planetManager;
	return planetManager;
}

CityManager* ZoneImplementation::getCityManager() {
	// server/zone/Zone.idl():  		return cityManager;
	return cityManager;
}

ZoneServer* ZoneImplementation::getZoneServer() {
	// server/zone/Zone.idl():  		return server;
	return server;
}

CreatureManager* ZoneImplementation::getCreatureManager() {
	// server/zone/Zone.idl():  		return creatureManager;
	return creatureManager;
}

unsigned long long ZoneImplementation::getGalacticTime() {
	// server/zone/Zone.idl():  		return galacticTime.miliDifference() / 1000;
	return (&galacticTime)->miliDifference() / 1000;
}

unsigned int ZoneImplementation::getWeatherID() {
	// server/zone/Zone.idl():  		if 
	if (server != NULL)	// server/zone/Zone.idl():  			server.increaseOnlinePlayers();
	server->increaseOnlinePlayers();
	// server/zone/Zone.idl():  		return 
	if (server == NULL)	// server/zone/Zone.idl():  			server.decreaseOnlinePlayers();
	server->decreaseOnlinePlayers();
	// server/zone/Zone.idl():  		return weatherID;
	return weatherID;
}

void ZoneImplementation::setWeatherID(unsigned int value) {
	// server/zone/Zone.idl():  		weatherID = value;
	weatherID = value;
}

void ZoneImplementation::changeWeatherID(int value) {
	// server/zone/Zone.idl():  		weatherID 
	if (weatherID == 0 && value < 0){
	// server/zone/Zone.idl():  			weatherID = 0;
	weatherID = 0;
	// server/zone/Zone.idl():  			return;
	return;
}
	// server/zone/Zone.idl():  		weatherID += value;
	weatherID += value;
	// server/zone/Zone.idl():  	}
	if (weatherID > 4){
	// server/zone/Zone.idl():  			weatherID = 4;
	weatherID = 4;
	// server/zone/Zone.idl():  			return;
	return;
}
}

bool ZoneImplementation::isWeatherEnabled() {
	// server/zone/Zone.idl():  		return weatherEnabled;
	return weatherEnabled;
}

bool ZoneImplementation::hasManagersStarted() {
	// server/zone/Zone.idl():  		return managersStarted;
	return managersStarted;
}

void ZoneImplementation::setWeatherEnabled(bool value) {
	// server/zone/Zone.idl():  		weatherEnabled = value;
	weatherEnabled = value;
}

void ZoneImplementation::setWeatherWindX(float value) {
	// server/zone/Zone.idl():  		weatherWindX = value;
	weatherWindX = value;
}

void ZoneImplementation::setWeatherWindY(float value) {
	// server/zone/Zone.idl():  		weatherWindY = value;
	weatherWindY = value;
}

float ZoneImplementation::getWeatherWindX() {
	// server/zone/Zone.idl():  		return weatherWindX;
	return weatherWindX;
}

float ZoneImplementation::getWeatherWindY() {
	// server/zone/Zone.idl():  		return weatherWindY;
	return weatherWindY;
}

/*
 *	ZoneAdapter
 */

ZoneAdapter::ZoneAdapter(ZoneImplementation* obj) : ManagedObjectAdapter(obj) {
}

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_FINALIZE__,RPC_GETNEARESTCLONINGBUILDING__CREATUREOBJECT_,RPC_GETNEARESTPLANETARYOBJECT__SCENEOBJECT_INT_,RPC_INITIALIZEPRIVATEDATA__,RPC_UPDATEACTIVEAREAS__SCENEOBJECT_,RPC_STARTMANAGERS__,RPC_STOPMANAGERS__,RPC_GETHEIGHT__FLOAT_FLOAT_,RPC_ADDSCENEOBJECT__SCENEOBJECT_,RPC_SENDMAPLOCATIONSTO__STRING_SCENEOBJECT_,RPC_DROPSCENEOBJECT__SCENEOBJECT_,RPC_GETZONEID__,RPC_GETPLANETNAME__,RPC_GETPLANETMANAGER__,RPC_GETCITYMANAGER__,RPC_GETZONESERVER__,RPC_GETCREATUREMANAGER__,RPC_GETGALACTICTIME__,RPC_GETWEATHERID__,RPC_SETWEATHERID__INT_,RPC_CHANGEWEATHERID__INT_,RPC_ISWEATHERENABLED__,RPC_HASMANAGERSSTARTED__,RPC_SETWEATHERENABLED__BOOL_,RPC_SETWEATHERWINDX__FLOAT_,RPC_SETWEATHERWINDY__FLOAT_,RPC_GETWEATHERWINDX__,RPC_GETWEATHERWINDY__,RPC_GETMINX__,RPC_GETMAXX__,RPC_GETMINY__,RPC_GETMAXY__};

Packet* ZoneAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_FINALIZE__:
		finalize();
		break;
	case RPC_GETNEARESTCLONINGBUILDING__CREATUREOBJECT_:
		resp->insertLong(getNearestCloningBuilding((CreatureObject*) inv->getObjectParameter())->_getObjectID());
		break;
	case RPC_GETNEARESTPLANETARYOBJECT__SCENEOBJECT_INT_:
		resp->insertLong(getNearestPlanetaryObject((SceneObject*) inv->getObjectParameter(), inv->getUnsignedIntParameter())->_getObjectID());
		break;
	case RPC_INITIALIZEPRIVATEDATA__:
		initializePrivateData();
		break;
	case RPC_UPDATEACTIVEAREAS__SCENEOBJECT_:
		updateActiveAreas((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_STARTMANAGERS__:
		startManagers();
		break;
	case RPC_STOPMANAGERS__:
		stopManagers();
		break;
	case RPC_GETHEIGHT__FLOAT_FLOAT_:
		resp->insertFloat(getHeight(inv->getFloatParameter(), inv->getFloatParameter()));
		break;
	case RPC_ADDSCENEOBJECT__SCENEOBJECT_:
		addSceneObject((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_SENDMAPLOCATIONSTO__STRING_SCENEOBJECT_:
		sendMapLocationsTo(inv->getAsciiParameter(_param0_sendMapLocationsTo__String_SceneObject_), (SceneObject*) inv->getObjectParameter());
		break;
	case RPC_DROPSCENEOBJECT__SCENEOBJECT_:
		dropSceneObject((SceneObject*) inv->getObjectParameter());
		break;
	case RPC_GETZONEID__:
		resp->insertSignedInt(getZoneID());
		break;
	case RPC_GETPLANETNAME__:
		resp->insertAscii(getPlanetName());
		break;
	case RPC_GETPLANETMANAGER__:
		resp->insertLong(getPlanetManager()->_getObjectID());
		break;
	case RPC_GETCITYMANAGER__:
		resp->insertLong(getCityManager()->_getObjectID());
		break;
	case RPC_GETZONESERVER__:
		resp->insertLong(getZoneServer()->_getObjectID());
		break;
	case RPC_GETCREATUREMANAGER__:
		resp->insertLong(getCreatureManager()->_getObjectID());
		break;
	case RPC_GETGALACTICTIME__:
		resp->insertLong(getGalacticTime());
		break;
	case RPC_GETWEATHERID__:
		resp->insertInt(getWeatherID());
		break;
	case RPC_SETWEATHERID__INT_:
		setWeatherID(inv->getUnsignedIntParameter());
		break;
	case RPC_CHANGEWEATHERID__INT_:
		changeWeatherID(inv->getSignedIntParameter());
		break;
	case RPC_ISWEATHERENABLED__:
		resp->insertBoolean(isWeatherEnabled());
		break;
	case RPC_HASMANAGERSSTARTED__:
		resp->insertBoolean(hasManagersStarted());
		break;
	case RPC_SETWEATHERENABLED__BOOL_:
		setWeatherEnabled(inv->getBooleanParameter());
		break;
	case RPC_SETWEATHERWINDX__FLOAT_:
		setWeatherWindX(inv->getFloatParameter());
		break;
	case RPC_SETWEATHERWINDY__FLOAT_:
		setWeatherWindY(inv->getFloatParameter());
		break;
	case RPC_GETWEATHERWINDX__:
		resp->insertFloat(getWeatherWindX());
		break;
	case RPC_GETWEATHERWINDY__:
		resp->insertFloat(getWeatherWindY());
		break;
	case RPC_GETMINX__:
		resp->insertFloat(getMinX());
		break;
	case RPC_GETMAXX__:
		resp->insertFloat(getMaxX());
		break;
	case RPC_GETMINY__:
		resp->insertFloat(getMinY());
		break;
	case RPC_GETMAXY__:
		resp->insertFloat(getMaxY());
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneAdapter::initializeTransientMembers() {
	((ZoneImplementation*) impl)->initializeTransientMembers();
}

void ZoneAdapter::finalize() {
	((ZoneImplementation*) impl)->finalize();
}

CloningBuildingObject* ZoneAdapter::getNearestCloningBuilding(CreatureObject* creature) {
	return ((ZoneImplementation*) impl)->getNearestCloningBuilding(creature);
}

SceneObject* ZoneAdapter::getNearestPlanetaryObject(SceneObject* object, unsigned int mapObjectLocationType) {
	return ((ZoneImplementation*) impl)->getNearestPlanetaryObject(object, mapObjectLocationType);
}

void ZoneAdapter::initializePrivateData() {
	((ZoneImplementation*) impl)->initializePrivateData();
}

void ZoneAdapter::updateActiveAreas(SceneObject* object) {
	((ZoneImplementation*) impl)->updateActiveAreas(object);
}

void ZoneAdapter::startManagers() {
	((ZoneImplementation*) impl)->startManagers();
}

void ZoneAdapter::stopManagers() {
	((ZoneImplementation*) impl)->stopManagers();
}

float ZoneAdapter::getHeight(float x, float y) {
	return ((ZoneImplementation*) impl)->getHeight(x, y);
}

void ZoneAdapter::addSceneObject(SceneObject* object) {
	((ZoneImplementation*) impl)->addSceneObject(object);
}

void ZoneAdapter::sendMapLocationsTo(const String& planetName, SceneObject* player) {
	((ZoneImplementation*) impl)->sendMapLocationsTo(planetName, player);
}

void ZoneAdapter::dropSceneObject(SceneObject* object) {
	((ZoneImplementation*) impl)->dropSceneObject(object);
}

int ZoneAdapter::getZoneID() {
	return ((ZoneImplementation*) impl)->getZoneID();
}

String ZoneAdapter::getPlanetName() {
	return ((ZoneImplementation*) impl)->getPlanetName();
}

PlanetManager* ZoneAdapter::getPlanetManager() {
	return ((ZoneImplementation*) impl)->getPlanetManager();
}

CityManager* ZoneAdapter::getCityManager() {
	return ((ZoneImplementation*) impl)->getCityManager();
}

ZoneServer* ZoneAdapter::getZoneServer() {
	return ((ZoneImplementation*) impl)->getZoneServer();
}

CreatureManager* ZoneAdapter::getCreatureManager() {
	return ((ZoneImplementation*) impl)->getCreatureManager();
}

unsigned long long ZoneAdapter::getGalacticTime() {
	return ((ZoneImplementation*) impl)->getGalacticTime();
}

unsigned int ZoneAdapter::getWeatherID() {
	return ((ZoneImplementation*) impl)->getWeatherID();
}

void ZoneAdapter::setWeatherID(unsigned int value) {
	((ZoneImplementation*) impl)->setWeatherID(value);
}

void ZoneAdapter::changeWeatherID(int value) {
	((ZoneImplementation*) impl)->changeWeatherID(value);
}

bool ZoneAdapter::isWeatherEnabled() {
	return ((ZoneImplementation*) impl)->isWeatherEnabled();
}

bool ZoneAdapter::hasManagersStarted() {
	return ((ZoneImplementation*) impl)->hasManagersStarted();
}

void ZoneAdapter::setWeatherEnabled(bool value) {
	((ZoneImplementation*) impl)->setWeatherEnabled(value);
}

void ZoneAdapter::setWeatherWindX(float value) {
	((ZoneImplementation*) impl)->setWeatherWindX(value);
}

void ZoneAdapter::setWeatherWindY(float value) {
	((ZoneImplementation*) impl)->setWeatherWindY(value);
}

float ZoneAdapter::getWeatherWindX() {
	return ((ZoneImplementation*) impl)->getWeatherWindX();
}

float ZoneAdapter::getWeatherWindY() {
	return ((ZoneImplementation*) impl)->getWeatherWindY();
}

float ZoneAdapter::getMinX() {
	return ((ZoneImplementation*) impl)->getMinX();
}

float ZoneAdapter::getMaxX() {
	return ((ZoneImplementation*) impl)->getMaxX();
}

float ZoneAdapter::getMinY() {
	return ((ZoneImplementation*) impl)->getMinY();
}

float ZoneAdapter::getMaxY() {
	return ((ZoneImplementation*) impl)->getMaxY();
}

/*
 *	ZoneHelper
 */

ZoneHelper* ZoneHelper::staticInitializer = ZoneHelper::instance();

ZoneHelper::ZoneHelper() {
	className = "Zone";

	Core::getObjectBroker()->registerClass(className, this);
}

void ZoneHelper::finalizeHelper() {
	ZoneHelper::finalize();
}

DistributedObject* ZoneHelper::instantiateObject() {
	return new Zone(DummyConstructorParameter::instance());
}

DistributedObjectServant* ZoneHelper::instantiateServant() {
	return new ZoneImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneAdapter((ZoneImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

