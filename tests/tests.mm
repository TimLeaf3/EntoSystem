//
//  tests.mm
//  tests
//
//  Created by Tim Le Flem on 22/03/2025.
//

#import <XCTest/XCTest.h>

#include "includes.hpp"

@interface tests : XCTestCase

@end

@implementation tests

- (void)testVector1 {
	vector V;

	XCTAssertEqual(V.x, 0.f);
	XCTAssertEqual(V.y, 0.f);
}

- (void)testVector2 {
	vector V{1, 2};

	XCTAssertEqual(V.x, 1.f);
	XCTAssertEqual(V.y, 2.f);
}

@end
