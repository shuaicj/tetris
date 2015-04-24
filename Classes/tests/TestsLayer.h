#ifndef _G1_TESTS_LAYER_H_
#define _G1_TESTS_LAYER_H_

#include "Common.h"
#include "cocos2d.h"

NAMESPACE_G1_BEGIN

// This is the entry to all tests.
class TestsLayer : public cc::Layer {
public:
    TestsLayer();
    virtual ~TestsLayer();
    static TestsLayer* create();
    virtual bool init();

    void onBack(cc::Ref* sender);
};

NAMESPACE_G1_END

#endif // _G1_TESTS_LAYER_H_