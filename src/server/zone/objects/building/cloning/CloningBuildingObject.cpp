/*
 *	server/zone/objects/building/cloning/CloningBuildingObject.cpp generated by engine3 IDL compiler 0.60
 */

#include "CloningBuildingObject.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/cell/CellObject.h"

/*
 *	CloningBuildingObjectStub
 */

CloningBuildingObject::CloningBuildingObject() : BuildingObject(DummyConstructorParameter::instance()) {
	CloningBuildingObjectImplementation* _implementation = new CloningBuildingObjectImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

CloningBuildingObject::CloningBuildingObject(DummyConstructorParameter* param) : BuildingObject(param) {
}

CloningBuildingObject::~CloningBuildingObject() {
}


void CloningBuildingObject::loadTemplateData(SharedObjectTemplate* templateData) {
	CloningBuildingObjectImplementation* _implementation = (CloningBuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

bool CloningBuildingObject::isCloningBuildingObject() {
	CloningBuildingObjectImplementation* _implementation = (CloningBuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isCloningBuildingObject();
}

CloneSpawnPoint* CloningBuildingObject::getRandomSpawnPoint() {
	CloningBuildingObjectImplementation* _implementation = (CloningBuildingObjectImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getRandomSpawnPoint();
}

DistributedObjectServant* CloningBuildingObject::_getImplementation() {

	_updated = true;
	return _impl;
}

void CloningBuildingObject::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CloningBuildingObjectImplementation
 */

CloningBuildingObjectImplementation::CloningBuildingObjectImplementation(DummyConstructorParameter* param) : BuildingObjectImplementation(param) {
	_initializeImplementation();
}


CloningBuildingObjectImplementation::~CloningBuildingObjectImplementation() {
}


void CloningBuildingObjectImplementation::finalize() {
}

void CloningBuildingObjectImplementation::_initializeImplementation() {
	_setClassHelper(CloningBuildingObjectHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void CloningBuildingObjectImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CloningBuildingObject*) stub;
	BuildingObjectImplementation::_setStub(stub);
}

DistributedObjectStub* CloningBuildingObjectImplementation::_getStub() {
	return _this;
}

CloningBuildingObjectImplementation::operator const CloningBuildingObject*() {
	return _this;
}

void CloningBuildingObjectImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CloningBuildingObjectImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CloningBuildingObjectImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CloningBuildingObjectImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CloningBuildingObjectImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CloningBuildingObjectImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CloningBuildingObjectImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CloningBuildingObjectImplementation::_serializationHelperMethod() {
	BuildingObjectImplementation::_serializationHelperMethod();

	_setClassName("CloningBuildingObject");

}

void CloningBuildingObjectImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CloningBuildingObjectImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CloningBuildingObjectImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (BuildingObjectImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void CloningBuildingObjectImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CloningBuildingObjectImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CloningBuildingObjectImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + BuildingObjectImplementation::writeObjectMembers(stream);
}

CloningBuildingObjectImplementation::CloningBuildingObjectImplementation() {
	_initializeImplementation();
	// server/zone/objects/building/cloning/CloningBuildingObject.idl():  		Logger.setLoggingName("CloningBuildingObject");
	Logger::setLoggingName("CloningBuildingObject");
}

void CloningBuildingObjectImplementation::loadTemplateData(SharedObjectTemplate* templateData) {
	// server/zone/objects/building/cloning/CloningBuildingObject.idl():  		super.loadTemplateData(templateData);
	BuildingObjectImplementation::loadTemplateData(templateData);
}

bool CloningBuildingObjectImplementation::isCloningBuildingObject() {
	// server/zone/objects/building/cloning/CloningBuildingObject.idl():  		return true;
	return true;
}

CloneSpawnPoint* CloningBuildingObjectImplementation::getRandomSpawnPoint() {
	// server/zone/objects/building/cloning/CloningBuildingObject.idl():  		CloningBuildingObjectTemplate cloningTemplate = null;
	CloningBuildingObjectTemplate* cloningTemplate = NULL;
	// server/zone/objects/building/cloning/CloningBuildingObject.idl():  		}
	if (BuildingObjectImplementation::templateObject->isCloningBuildingObjectTemplate()){
	// server/zone/objects/building/cloning/CloningBuildingObject.idl():  			cloningTemplate = (CloningBuildingObjectTemplate) super.templateObject;
	cloningTemplate = (CloningBuildingObjectTemplate*) BuildingObjectImplementation::templateObject;
	// server/zone/objects/building/cloning/CloningBuildingObject.idl():  			return cloningTemplate.getRandomSpawnPoint();
	return cloningTemplate->getRandomSpawnPoint();
}

	else {
	// server/zone/objects/building/cloning/CloningBuildingObject.idl():  			return null;
	return NULL;
}
}

/*
 *	CloningBuildingObjectAdapter
 */

CloningBuildingObjectAdapter::CloningBuildingObjectAdapter(CloningBuildingObjectImplementation* obj) : BuildingObjectAdapter(obj) {
}

enum {RPC_ISCLONINGBUILDINGOBJECT__,};

Packet* CloningBuildingObjectAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_ISCLONINGBUILDINGOBJECT__:
		resp->insertBoolean(isCloningBuildingObject());
		break;
	default:
		return NULL;
	}

	return resp;
}

bool CloningBuildingObjectAdapter::isCloningBuildingObject() {
	return ((CloningBuildingObjectImplementation*) impl)->isCloningBuildingObject();
}

/*
 *	CloningBuildingObjectHelper
 */

CloningBuildingObjectHelper* CloningBuildingObjectHelper::staticInitializer = CloningBuildingObjectHelper::instance();

CloningBuildingObjectHelper::CloningBuildingObjectHelper() {
	className = "CloningBuildingObject";

	Core::getObjectBroker()->registerClass(className, this);
}

void CloningBuildingObjectHelper::finalizeHelper() {
	CloningBuildingObjectHelper::finalize();
}

DistributedObject* CloningBuildingObjectHelper::instantiateObject() {
	return new CloningBuildingObject(DummyConstructorParameter::instance());
}

DistributedObjectServant* CloningBuildingObjectHelper::instantiateServant() {
	return new CloningBuildingObjectImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CloningBuildingObjectHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CloningBuildingObjectAdapter((CloningBuildingObjectImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

