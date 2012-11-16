/*
 * JS Bindings: https://github.com/zynga/jsbindings
 *
 * Copyright (c) 2012 Zynga Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef JSB_INCLUDE_CHIPMUNK
#define JSB_INCLUDE_CHIPMUNK
#endif

#include "js_bindings_config.h"
#include "ScriptingCore.h"


// chipmunk
#include "js_bindings_chipmunk_auto_classes.h"
#include "js_bindings_chipmunk_functions.h"
#include "js_bindings_chipmunk_manual.h"


void jsb_register_chipmunk(JSContext *_cx, JSObject *object)
{
	//
	// Chipmunk
	//
	JSObject *chipmunk = JS_NewObject(_cx, NULL, NULL, NULL);
	jsval chipmunkVal = OBJECT_TO_JSVAL(chipmunk);
	JS_SetProperty(_cx, object, "cp", &chipmunkVal);
	
	JSB_cpBase_createClass(_cx, chipmunk, "Base");  // manual base class registration
    JSB_cpConstraint_createClass(_cx, chipmunk, "Constraint");
    JSB_cpGrooveJoint_createClass(_cx, chipmunk, "GrooveJoint");
    JSB_cpSimpleMotor_createClass(_cx, chipmunk, "SimpleMotor");
    JSB_cpPivotJoint_createClass(_cx, chipmunk, "PivotJoint");
    JSB_cpPinJoint_createClass(_cx, chipmunk, "PinJoint");
    JSB_cpSlideJoint_createClass(_cx, chipmunk, "SlideJoint");
    JSB_cpGearJoint_createClass(_cx, chipmunk, "GearJoint");
    JSB_cpDampedRotarySpring_createClass(_cx, chipmunk, "DampedRotarySpring");
    JSB_cpDampedSpring_createClass(_cx, chipmunk, "DampedSpring");
    JSB_cpRatchetJoint_createClass(_cx, chipmunk, "RatchetJoint");
    JSB_cpRotaryLimitJoint_createClass(_cx, chipmunk, "RotaryLimitJoint");
    JSB_cpArbiter_createClass(_cx, chipmunk, "Arbiter");
    JSB_cpSpace_createClass(_cx, chipmunk, "Space");
    JSB_cpBody_createClass(_cx, chipmunk, "Body");
    JSB_cpShape_createClass(_cx, chipmunk, "Shape");
    JSB_cpCircleShape_createClass(_cx, chipmunk, "CircleShape");
    JSB_cpSegmentShape_createClass(_cx, chipmunk, "SegmentShape");
    JSB_cpPolyShape_createClass(_cx, chipmunk, "PolyShape");
    JS_DefineFunction(_cx, chipmunk, "arbiterGetCount", JSB_cpArbiterGetCount, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterGetDepth", JSB_cpArbiterGetDepth, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterGetElasticity", JSB_cpArbiterGetElasticity, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterGetFriction", JSB_cpArbiterGetFriction, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterGetNormal", JSB_cpArbiterGetNormal, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterGetPoint", JSB_cpArbiterGetPoint, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterGetSurfaceVelocity", JSB_cpArbiterGetSurfaceVelocity, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterIgnore", JSB_cpArbiterIgnore, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterIsFirstContact", JSB_cpArbiterIsFirstContact, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterSetElasticity", JSB_cpArbiterSetElasticity, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterSetFriction", JSB_cpArbiterSetFriction, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterSetSurfaceVelocity", JSB_cpArbiterSetSurfaceVelocity, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterTotalImpulse", JSB_cpArbiterTotalImpulse, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterTotalImpulseWithFriction", JSB_cpArbiterTotalImpulseWithFriction, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "arbiterTotalKE", JSB_cpArbiterTotalKE, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "areaForCircle", JSB_cpAreaForCircle, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "areaForSegment", JSB_cpAreaForSegment, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBArea", JSB_cpBBArea, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBClampVect", JSB_cpBBClampVect, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBContainsBB", JSB_cpBBContainsBB, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBContainsVect", JSB_cpBBContainsVect, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBExpand", JSB_cpBBExpand, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBIntersects", JSB_cpBBIntersects, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBIntersectsSegment", JSB_cpBBIntersectsSegment, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBMerge", JSB_cpBBMerge, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBMergedArea", JSB_cpBBMergedArea, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBNew", JSB_cpBBNew, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBNewForCircle", JSB_cpBBNewForCircle, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBSegmentQuery", JSB_cpBBSegmentQuery, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bBWrapVect", JSB_cpBBWrapVect, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyActivate", JSB_cpBodyActivate, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyActivateStatic", JSB_cpBodyActivateStatic, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyApplyForce", JSB_cpBodyApplyForce, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyApplyImpulse", JSB_cpBodyApplyImpulse, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyDestroy", JSB_cpBodyDestroy, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyFree", JSB_cpBodyFree, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetAngVel", JSB_cpBodyGetAngVel, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetAngVelLimit", JSB_cpBodyGetAngVelLimit, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetAngle", JSB_cpBodyGetAngle, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetForce", JSB_cpBodyGetForce, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetMass", JSB_cpBodyGetMass, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetMoment", JSB_cpBodyGetMoment, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetPos", JSB_cpBodyGetPos, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetRot", JSB_cpBodyGetRot, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetSpace", JSB_cpBodyGetSpace, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetTorque", JSB_cpBodyGetTorque, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetVel", JSB_cpBodyGetVel, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetVelAtLocalPoint", JSB_cpBodyGetVelAtLocalPoint, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetVelAtWorldPoint", JSB_cpBodyGetVelAtWorldPoint, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyGetVelLimit", JSB_cpBodyGetVelLimit, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyInit", JSB_cpBodyInit, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyInitStatic", JSB_cpBodyInitStatic, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyIsRogue", JSB_cpBodyIsRogue, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyIsSleeping", JSB_cpBodyIsSleeping, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyIsStatic", JSB_cpBodyIsStatic, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyKineticEnergy", JSB_cpBodyKineticEnergy, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyLocal2World", JSB_cpBodyLocal2World, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyNew", JSB_cpBodyNew, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyNewStatic", JSB_cpBodyNewStatic, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyResetForces", JSB_cpBodyResetForces, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySetAngVel", JSB_cpBodySetAngVel, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySetAngVelLimit", JSB_cpBodySetAngVelLimit, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySetAngle", JSB_cpBodySetAngle, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySetForce", JSB_cpBodySetForce, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySetMass", JSB_cpBodySetMass, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySetMoment", JSB_cpBodySetMoment, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySetPos", JSB_cpBodySetPos, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySetTorque", JSB_cpBodySetTorque, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySetVel", JSB_cpBodySetVel, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySetVelLimit", JSB_cpBodySetVelLimit, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySleep", JSB_cpBodySleep, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodySleepWithGroup", JSB_cpBodySleepWithGroup, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyUpdatePosition", JSB_cpBodyUpdatePosition, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyUpdateVelocity", JSB_cpBodyUpdateVelocity, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "bodyWorld2Local", JSB_cpBodyWorld2Local, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "boxShapeNew", JSB_cpBoxShapeNew, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "boxShapeNew2", JSB_cpBoxShapeNew2, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "circleShapeGetOffset", JSB_cpCircleShapeGetOffset, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "circleShapeGetRadius", JSB_cpCircleShapeGetRadius, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "circleShapeNew", JSB_cpCircleShapeNew, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintActivateBodies", JSB_cpConstraintActivateBodies, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintDestroy", JSB_cpConstraintDestroy, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintFree", JSB_cpConstraintFree, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintGetA", JSB_cpConstraintGetA, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintGetB", JSB_cpConstraintGetB, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintGetErrorBias", JSB_cpConstraintGetErrorBias, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintGetImpulse", JSB_cpConstraintGetImpulse, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintGetMaxBias", JSB_cpConstraintGetMaxBias, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintGetMaxForce", JSB_cpConstraintGetMaxForce, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintGetSpace", JSB_cpConstraintGetSpace, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintSetErrorBias", JSB_cpConstraintSetErrorBias, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintSetMaxBias", JSB_cpConstraintSetMaxBias, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "constraintSetMaxForce", JSB_cpConstraintSetMaxForce, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedRotarySpringGetDamping", JSB_cpDampedRotarySpringGetDamping, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedRotarySpringGetRestAngle", JSB_cpDampedRotarySpringGetRestAngle, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedRotarySpringGetStiffness", JSB_cpDampedRotarySpringGetStiffness, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedRotarySpringNew", JSB_cpDampedRotarySpringNew, 5, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedRotarySpringSetDamping", JSB_cpDampedRotarySpringSetDamping, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedRotarySpringSetRestAngle", JSB_cpDampedRotarySpringSetRestAngle, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedRotarySpringSetStiffness", JSB_cpDampedRotarySpringSetStiffness, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedSpringGetAnchr1", JSB_cpDampedSpringGetAnchr1, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedSpringGetAnchr2", JSB_cpDampedSpringGetAnchr2, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedSpringGetDamping", JSB_cpDampedSpringGetDamping, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedSpringGetRestLength", JSB_cpDampedSpringGetRestLength, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedSpringGetStiffness", JSB_cpDampedSpringGetStiffness, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedSpringNew", JSB_cpDampedSpringNew, 7, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedSpringSetAnchr1", JSB_cpDampedSpringSetAnchr1, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedSpringSetAnchr2", JSB_cpDampedSpringSetAnchr2, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedSpringSetDamping", JSB_cpDampedSpringSetDamping, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedSpringSetRestLength", JSB_cpDampedSpringSetRestLength, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "dampedSpringSetStiffness", JSB_cpDampedSpringSetStiffness, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "gearJointGetPhase", JSB_cpGearJointGetPhase, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "gearJointGetRatio", JSB_cpGearJointGetRatio, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "gearJointNew", JSB_cpGearJointNew, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "gearJointSetPhase", JSB_cpGearJointSetPhase, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "gearJointSetRatio", JSB_cpGearJointSetRatio, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "grooveJointGetAnchr2", JSB_cpGrooveJointGetAnchr2, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "grooveJointGetGrooveA", JSB_cpGrooveJointGetGrooveA, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "grooveJointGetGrooveB", JSB_cpGrooveJointGetGrooveB, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "grooveJointNew", JSB_cpGrooveJointNew, 5, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "grooveJointSetAnchr2", JSB_cpGrooveJointSetAnchr2, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "grooveJointSetGrooveA", JSB_cpGrooveJointSetGrooveA, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "grooveJointSetGrooveB", JSB_cpGrooveJointSetGrooveB, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "initChipmunk", JSB_cpInitChipmunk, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "momentForBox", JSB_cpMomentForBox, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "momentForBox2", JSB_cpMomentForBox2, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "momentForCircle", JSB_cpMomentForCircle, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "momentForSegment", JSB_cpMomentForSegment, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pinJointGetAnchr1", JSB_cpPinJointGetAnchr1, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pinJointGetAnchr2", JSB_cpPinJointGetAnchr2, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pinJointGetDist", JSB_cpPinJointGetDist, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pinJointNew", JSB_cpPinJointNew, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pinJointSetAnchr1", JSB_cpPinJointSetAnchr1, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pinJointSetAnchr2", JSB_cpPinJointSetAnchr2, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pinJointSetDist", JSB_cpPinJointSetDist, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pivotJointGetAnchr1", JSB_cpPivotJointGetAnchr1, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pivotJointGetAnchr2", JSB_cpPivotJointGetAnchr2, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pivotJointNew", JSB_cpPivotJointNew, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pivotJointNew2", JSB_cpPivotJointNew2, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pivotJointSetAnchr1", JSB_cpPivotJointSetAnchr1, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "pivotJointSetAnchr2", JSB_cpPivotJointSetAnchr2, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "polyShapeGetNumVerts", JSB_cpPolyShapeGetNumVerts, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "polyShapeGetVert", JSB_cpPolyShapeGetVert, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "ratchetJointGetAngle", JSB_cpRatchetJointGetAngle, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "ratchetJointGetPhase", JSB_cpRatchetJointGetPhase, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "ratchetJointGetRatchet", JSB_cpRatchetJointGetRatchet, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "ratchetJointNew", JSB_cpRatchetJointNew, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "ratchetJointSetAngle", JSB_cpRatchetJointSetAngle, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "ratchetJointSetPhase", JSB_cpRatchetJointSetPhase, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "ratchetJointSetRatchet", JSB_cpRatchetJointSetRatchet, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "resetShapeIdCounter", JSB_cpResetShapeIdCounter, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "rotaryLimitJointGetMax", JSB_cpRotaryLimitJointGetMax, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "rotaryLimitJointGetMin", JSB_cpRotaryLimitJointGetMin, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "rotaryLimitJointNew", JSB_cpRotaryLimitJointNew, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "rotaryLimitJointSetMax", JSB_cpRotaryLimitJointSetMax, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "rotaryLimitJointSetMin", JSB_cpRotaryLimitJointSetMin, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "segmentShapeGetA", JSB_cpSegmentShapeGetA, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "segmentShapeGetB", JSB_cpSegmentShapeGetB, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "segmentShapeGetNormal", JSB_cpSegmentShapeGetNormal, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "segmentShapeGetRadius", JSB_cpSegmentShapeGetRadius, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "segmentShapeNew", JSB_cpSegmentShapeNew, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "segmentShapeSetNeighbors", JSB_cpSegmentShapeSetNeighbors, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeCacheBB", JSB_cpShapeCacheBB, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeDestroy", JSB_cpShapeDestroy, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeFree", JSB_cpShapeFree, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeGetBB", JSB_cpShapeGetBB, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeGetBody", JSB_cpShapeGetBody, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeGetCollisionType", JSB_cpShapeGetCollisionType, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeGetElasticity", JSB_cpShapeGetElasticity, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeGetFriction", JSB_cpShapeGetFriction, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeGetGroup", JSB_cpShapeGetGroup, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeGetLayers", JSB_cpShapeGetLayers, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeGetSensor", JSB_cpShapeGetSensor, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeGetSpace", JSB_cpShapeGetSpace, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeGetSurfaceVelocity", JSB_cpShapeGetSurfaceVelocity, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapePointQuery", JSB_cpShapePointQuery, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeSetBody", JSB_cpShapeSetBody, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeSetCollisionType", JSB_cpShapeSetCollisionType, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeSetElasticity", JSB_cpShapeSetElasticity, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeSetFriction", JSB_cpShapeSetFriction, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeSetGroup", JSB_cpShapeSetGroup, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeSetLayers", JSB_cpShapeSetLayers, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeSetSensor", JSB_cpShapeSetSensor, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeSetSurfaceVelocity", JSB_cpShapeSetSurfaceVelocity, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "shapeUpdate", JSB_cpShapeUpdate, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "simpleMotorGetRate", JSB_cpSimpleMotorGetRate, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "simpleMotorNew", JSB_cpSimpleMotorNew, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "simpleMotorSetRate", JSB_cpSimpleMotorSetRate, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "slideJointGetAnchr1", JSB_cpSlideJointGetAnchr1, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "slideJointGetAnchr2", JSB_cpSlideJointGetAnchr2, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "slideJointGetMax", JSB_cpSlideJointGetMax, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "slideJointGetMin", JSB_cpSlideJointGetMin, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "slideJointNew", JSB_cpSlideJointNew, 6, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "slideJointSetAnchr1", JSB_cpSlideJointSetAnchr1, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "slideJointSetAnchr2", JSB_cpSlideJointSetAnchr2, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "slideJointSetMax", JSB_cpSlideJointSetMax, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "slideJointSetMin", JSB_cpSlideJointSetMin, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceActivateShapesTouchingShape", JSB_cpSpaceActivateShapesTouchingShape, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceAddBody", JSB_cpSpaceAddBody, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceAddConstraint", JSB_cpSpaceAddConstraint, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceAddShape", JSB_cpSpaceAddShape, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceAddStaticShape", JSB_cpSpaceAddStaticShape, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceContainsBody", JSB_cpSpaceContainsBody, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceContainsConstraint", JSB_cpSpaceContainsConstraint, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceContainsShape", JSB_cpSpaceContainsShape, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceDestroy", JSB_cpSpaceDestroy, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceFree", JSB_cpSpaceFree, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceGetCollisionBias", JSB_cpSpaceGetCollisionBias, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceGetCollisionPersistence", JSB_cpSpaceGetCollisionPersistence, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceGetCollisionSlop", JSB_cpSpaceGetCollisionSlop, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceGetCurrentTimeStep", JSB_cpSpaceGetCurrentTimeStep, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceGetDamping", JSB_cpSpaceGetDamping, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceGetEnableContactGraph", JSB_cpSpaceGetEnableContactGraph, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceGetGravity", JSB_cpSpaceGetGravity, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceGetIdleSpeedThreshold", JSB_cpSpaceGetIdleSpeedThreshold, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceGetIterations", JSB_cpSpaceGetIterations, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceGetSleepTimeThreshold", JSB_cpSpaceGetSleepTimeThreshold, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceGetStaticBody", JSB_cpSpaceGetStaticBody, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceInit", JSB_cpSpaceInit, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceIsLocked", JSB_cpSpaceIsLocked, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceNew", JSB_cpSpaceNew, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spacePointQueryFirst", JSB_cpSpacePointQueryFirst, 4, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceReindexShape", JSB_cpSpaceReindexShape, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceReindexShapesForBody", JSB_cpSpaceReindexShapesForBody, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceReindexStatic", JSB_cpSpaceReindexStatic, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceRemoveBody", JSB_cpSpaceRemoveBody, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceRemoveConstraint", JSB_cpSpaceRemoveConstraint, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceRemoveShape", JSB_cpSpaceRemoveShape, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceRemoveStaticShape", JSB_cpSpaceRemoveStaticShape, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceSetCollisionBias", JSB_cpSpaceSetCollisionBias, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceSetCollisionPersistence", JSB_cpSpaceSetCollisionPersistence, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceSetCollisionSlop", JSB_cpSpaceSetCollisionSlop, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceSetDamping", JSB_cpSpaceSetDamping, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceSetEnableContactGraph", JSB_cpSpaceSetEnableContactGraph, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceSetGravity", JSB_cpSpaceSetGravity, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceSetIdleSpeedThreshold", JSB_cpSpaceSetIdleSpeedThreshold, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceSetIterations", JSB_cpSpaceSetIterations, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceSetSleepTimeThreshold", JSB_cpSpaceSetSleepTimeThreshold, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceStep", JSB_cpSpaceStep, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "spaceUseSpatialHash", JSB_cpSpaceUseSpatialHash, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "fabs", JSB_cpfabs, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "fclamp", JSB_cpfclamp, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "fclamp01", JSB_cpfclamp01, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "flerp", JSB_cpflerp, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "flerpconst", JSB_cpflerpconst, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "fmax", JSB_cpfmax, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "fmin", JSB_cpfmin, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vadd", JSB_cpvadd, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vclamp", JSB_cpvclamp, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vcross", JSB_cpvcross, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vdist", JSB_cpvdist, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vdistsq", JSB_cpvdistsq, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vdot", JSB_cpvdot, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "veql", JSB_cpveql, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vforangle", JSB_cpvforangle, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vlength", JSB_cpvlength, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vlengthsq", JSB_cpvlengthsq, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vlerp", JSB_cpvlerp, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vlerpconst", JSB_cpvlerpconst, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vmult", JSB_cpvmult, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vnear", JSB_cpvnear, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vneg", JSB_cpvneg, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vnormalize", JSB_cpvnormalize, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vnormalize_safe", JSB_cpvnormalize_safe, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vperp", JSB_cpvperp, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vproject", JSB_cpvproject, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vrotate", JSB_cpvrotate, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vrperp", JSB_cpvrperp, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vslerp", JSB_cpvslerp, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vslerpconst", JSB_cpvslerpconst, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vsub", JSB_cpvsub, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vtoangle", JSB_cpvtoangle, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(_cx, chipmunk, "vunrotate", JSB_cpvunrotate, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
	
	// manual
	JS_DefineFunction(_cx, chipmunk, "spaceAddCollisionHandler", JSB_cpSpaceAddCollisionHandler, 8, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
	JS_DefineFunction(_cx, chipmunk, "spaceRemoveCollisionHandler", JSB_cpSpaceRemoveCollisionHandler, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
	JS_DefineFunction(_cx, chipmunk, "arbiterGetBodies", JSB_cpArbiterGetBodies, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
	JS_DefineFunction(_cx, chipmunk, "arbiterGetShapes", JSB_cpArbiterGetShapes, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
	JS_DefineFunction(_cx, chipmunk, "bodyGetUserData", JSB_cpBodyGetUserData, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
	JS_DefineFunction(_cx, chipmunk, "bodySetUserData", JSB_cpBodySetUserData, 2, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );

	JS_DefineFunction(_cx, chipmunk, "areaForPoly", JSB_cpAreaForPoly, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
	JS_DefineFunction(_cx, chipmunk, "momentForPoly", JSB_cpMomentForPoly, 3, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
	JS_DefineFunction(_cx, chipmunk, "centroidForPoly", JSB_cpCentroidForPoly, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
	JS_DefineFunction(_cx, chipmunk, "recenterPoly", JSB_cpRecenterPoly, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    register_CCPhysicsSprite(_cx, object);
}

