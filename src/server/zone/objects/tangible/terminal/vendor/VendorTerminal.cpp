/*
 *	server/zone/objects/tangible/terminal/vendor/VendorTerminal.cpp generated by engine3 IDL compiler 0.60
 */

#include "VendorTerminal.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/templates/SharedObjectTemplate.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

/*
 *	VendorTerminalStub
 */

enum {RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_,RPC_SETOWNERID__LONG_,RPC_DESTROYOBJECTFROMDATABASE__BOOL_,RPC_ISVENDOR__,RPC_ISVENDORTERMINAL__};

VendorTerminal::VendorTerminal() : Terminal(DummyConstructorParameter::instance()) {
	VendorTerminalImplementation* _implementation = new VendorTerminalImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

VendorTerminal::VendorTerminal(DummyConstructorParameter* param) : Terminal(param) {
}

VendorTerminal::~VendorTerminal() {
}


void VendorTerminal::loadTemplateData(SharedObjectTemplate* templateData) {
	VendorTerminalImplementation* _implementation = (VendorTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void VendorTerminal::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	VendorTerminalImplementation* _implementation = (VendorTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

int VendorTerminal::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	VendorTerminalImplementation* _implementation = (VendorTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void VendorTerminal::setOwnerID(unsigned long long ownerID) {
	VendorTerminalImplementation* _implementation = (VendorTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETOWNERID__LONG_);
		method.addUnsignedLongParameter(ownerID);

		method.executeWithVoidReturn();
	} else
		_implementation->setOwnerID(ownerID);
}

void VendorTerminal::destroyObjectFromDatabase(bool destroyContainedObjects) {
	VendorTerminalImplementation* _implementation = (VendorTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_DESTROYOBJECTFROMDATABASE__BOOL_);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		_implementation->destroyObjectFromDatabase(destroyContainedObjects);
}

Vendor* VendorTerminal::getVendor() {
	VendorTerminalImplementation* _implementation = (VendorTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getVendor();
}

bool VendorTerminal::isVendor() {
	VendorTerminalImplementation* _implementation = (VendorTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISVENDOR__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isVendor();
}

bool VendorTerminal::isVendorTerminal() {
	VendorTerminalImplementation* _implementation = (VendorTerminalImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISVENDORTERMINAL__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isVendorTerminal();
}

DistributedObjectServant* VendorTerminal::_getImplementation() {

	_updated = true;
	return _impl;
}

void VendorTerminal::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	VendorTerminalImplementation
 */

VendorTerminalImplementation::VendorTerminalImplementation(DummyConstructorParameter* param) : TerminalImplementation(param) {
	_initializeImplementation();
}


VendorTerminalImplementation::~VendorTerminalImplementation() {
}


void VendorTerminalImplementation::finalize() {
}

void VendorTerminalImplementation::_initializeImplementation() {
	_setClassHelper(VendorTerminalHelper::instance());

	_serializationHelperMethod();
	_serializationHelperMethod();
}

void VendorTerminalImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (VendorTerminal*) stub;
	TerminalImplementation::_setStub(stub);
}

DistributedObjectStub* VendorTerminalImplementation::_getStub() {
	return _this;
}

VendorTerminalImplementation::operator const VendorTerminal*() {
	return _this;
}

void VendorTerminalImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void VendorTerminalImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void VendorTerminalImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void VendorTerminalImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void VendorTerminalImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void VendorTerminalImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void VendorTerminalImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void VendorTerminalImplementation::_serializationHelperMethod() {
	TerminalImplementation::_serializationHelperMethod();

	_setClassName("VendorTerminal");

}

void VendorTerminalImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(VendorTerminalImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool VendorTerminalImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (TerminalImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "vendor") {
		TypeInfo<Vendor >::parseFromBinaryStream(&vendor, stream);
		return true;
	}


	return false;
}

void VendorTerminalImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = VendorTerminalImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int VendorTerminalImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "vendor";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<Vendor >::toBinaryStream(&vendor, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + TerminalImplementation::writeObjectMembers(stream);
}

VendorTerminalImplementation::VendorTerminalImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/terminal/vendor/VendorTerminal.idl():  		Logger.setLoggingName("VendorTerminal");
	Logger::setLoggingName("VendorTerminal");
}

void VendorTerminalImplementation::setOwnerID(unsigned long long ownerID) {
	// server/zone/objects/tangible/terminal/vendor/VendorTerminal.idl():  		vendor.setOwnerID(ownerID);
	(&vendor)->setOwnerID(ownerID);
}

Vendor* VendorTerminalImplementation::getVendor() {
	// server/zone/objects/tangible/terminal/vendor/VendorTerminal.idl():  		return vendor;
	return (&vendor);
}

bool VendorTerminalImplementation::isVendor() {
	// server/zone/objects/tangible/terminal/vendor/VendorTerminal.idl():  		return true;
	return true;
}

bool VendorTerminalImplementation::isVendorTerminal() {
	// server/zone/objects/tangible/terminal/vendor/VendorTerminal.idl():  		return true;
	return true;
}

/*
 *	VendorTerminalAdapter
 */

VendorTerminalAdapter::VendorTerminalAdapter(VendorTerminalImplementation* obj) : TerminalAdapter(obj) {
}

Packet* VendorTerminalAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case RPC_SETOWNERID__LONG_:
		setOwnerID(inv->getUnsignedLongParameter());
		break;
	case RPC_DESTROYOBJECTFROMDATABASE__BOOL_:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case RPC_ISVENDOR__:
		resp->insertBoolean(isVendor());
		break;
	case RPC_ISVENDORTERMINAL__:
		resp->insertBoolean(isVendorTerminal());
		break;
	default:
		return NULL;
	}

	return resp;
}

int VendorTerminalAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((VendorTerminalImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void VendorTerminalAdapter::setOwnerID(unsigned long long ownerID) {
	((VendorTerminalImplementation*) impl)->setOwnerID(ownerID);
}

void VendorTerminalAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	((VendorTerminalImplementation*) impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

bool VendorTerminalAdapter::isVendor() {
	return ((VendorTerminalImplementation*) impl)->isVendor();
}

bool VendorTerminalAdapter::isVendorTerminal() {
	return ((VendorTerminalImplementation*) impl)->isVendorTerminal();
}

/*
 *	VendorTerminalHelper
 */

VendorTerminalHelper* VendorTerminalHelper::staticInitializer = VendorTerminalHelper::instance();

VendorTerminalHelper::VendorTerminalHelper() {
	className = "VendorTerminal";

	Core::getObjectBroker()->registerClass(className, this);
}

void VendorTerminalHelper::finalizeHelper() {
	VendorTerminalHelper::finalize();
}

DistributedObject* VendorTerminalHelper::instantiateObject() {
	return new VendorTerminal(DummyConstructorParameter::instance());
}

DistributedObjectServant* VendorTerminalHelper::instantiateServant() {
	return new VendorTerminalImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* VendorTerminalHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new VendorTerminalAdapter((VendorTerminalImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

