/*
 *	server/zone/managers/resource/ResourceManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "ResourceManager.h"

#include "server/zone/ZoneServer.h"

#include "server/zone/ZoneProcessServerImplementation.h"

/*
 *	ResourceManagerStub
 */

ResourceManager::ResourceManager(ZoneServer* server, ZoneProcessServerImplementation* impl) : ManagedObject(DummyConstructorParameter::instance()) {
	_impl = new ResourceManagerImplementation(server, impl);
	_impl->_setStub(this);
}

ResourceManager::ResourceManager(DummyConstructorParameter* param) : ManagedObject(param) {
}

ResourceManager::~ResourceManager() {
}


/*
 *	ResourceManagerImplementation
 */

ResourceManagerImplementation::ResourceManagerImplementation(DummyConstructorParameter* param) : ManagedObjectImplementation(param) {
	_initializeImplementation();
}

ResourceManagerImplementation::~ResourceManagerImplementation() {
}


void ResourceManagerImplementation::finalize() {
}

void ResourceManagerImplementation::_initializeImplementation() {
	_setClassHelper(ResourceManagerHelper::instance());

	_serializationHelperMethod();
}

void ResourceManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (ResourceManager*) stub;
	ManagedObjectImplementation::_setStub(stub);
}

DistributedObjectStub* ResourceManagerImplementation::_getStub() {
	return _this;
}

ResourceManagerImplementation::operator const ResourceManager*() {
	return _this;
}

void ResourceManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void ResourceManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void ResourceManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void ResourceManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void ResourceManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void ResourceManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void ResourceManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void ResourceManagerImplementation::_serializationHelperMethod() {
	ManagedObjectImplementation::_serializationHelperMethod();

	_setClassName("ResourceManager");

	addSerializableVariable("zoneServer", &zoneServer);
}

ResourceManagerImplementation::ResourceManagerImplementation(ZoneServer* server, ZoneProcessServerImplementation* impl) {
	_initializeImplementation();
	// server/zone/managers/resource/ResourceManager.idl(59):  		Logger.setLoggingName("ResourceManager");
	Logger::setLoggingName("ResourceManager");
	// server/zone/managers/resource/ResourceManager.idl(61):  		Logger.setLogging(true);
	Logger::setLogging(true);
	// server/zone/managers/resource/ResourceManager.idl(62):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
	// server/zone/managers/resource/ResourceManager.idl(64):  		zoneServer = server;
	zoneServer = server;
	// server/zone/managers/resource/ResourceManager.idl(65):  		processor = impl;
	processor = impl;
}

/*
 *	ResourceManagerAdapter
 */

ResourceManagerAdapter::ResourceManagerAdapter(ResourceManagerImplementation* obj) : ManagedObjectAdapter(obj) {
}

Packet* ResourceManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	default:
		return NULL;
	}

	return resp;
}

/*
 *	ResourceManagerHelper
 */

ResourceManagerHelper* ResourceManagerHelper::staticInitializer = ResourceManagerHelper::instance();

ResourceManagerHelper::ResourceManagerHelper() {
	className = "ResourceManager";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ResourceManagerHelper::finalizeHelper() {
	ResourceManagerHelper::finalize();
}

DistributedObject* ResourceManagerHelper::instantiateObject() {
	return new ResourceManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* ResourceManagerHelper::instantiateServant() {
	return new ResourceManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ResourceManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ResourceManagerAdapter((ResourceManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

