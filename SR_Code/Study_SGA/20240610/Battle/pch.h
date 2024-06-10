#pragma once

#include <iostream>

using namespace std;

// 미리컴파일된 헤더
// pch.h / pch.cpp 생성
// pch.cpp #include "pch.h"
// pch.cpp에 속성-> c/c++ -> 미리컴파일된 헤더 만들기/pch.h
// 프로젝트 속성-> c/c++ -> 미리컴파일된 헤더 사용/pch.h

// 폴더화 시켰을 떄
// 프로젝트 속성 -> VC++디렉토리 -> 포함디렉토리 편집 -> $(ProjectDir) 적용

#include "Contents/Creature/Creature.h"
#include "Contents/Creature/Player.h"
#include "Contents/Creature/Monster.h"

#include "Contents/Creature/Knight.h"
#include "Contents/Creature/Archer.h"
#include "Contents/Creature/Mage.h"

#include "Contents/World/World.h"