#pragma once
#include <Geode/Geode.hpp>
#include <Geode/modify/AllClasses.hpp>

using namespace geode::prelude;

template<class... Args>
using DispatchEvent = geode::Dispatch<Args...>;

template<class T, class Sig, class... Filters>
using EventV4 = Event<T, Sig, Filters...>;

template<class T, class Sig>
using LegacyEvent = Event<T, Sig, std::string>;

#define getGameVersion getGDVersion
#define createAnchored createWithAnchors
#define m_layer m_parentLayer
#define m_size m_contentSize
#define m_position m_positionInWorld
#define m_scale m_scaleAbsolute
#define getChildByID getChildByIDRecursive

using CustomButton = CCustomButton;
using CustomSprite = CCustomSprite;
using CustomLabel = CCustomLabel;
using CustomLayer = CCustomLayer;

GEODE_FORWARD_FUNC(MenuLayer::init, MenuLayer::init, bool());
GEODE_FORWARD_FUNC(MenuLayer::onMoreGames, MenuLayer::onMoreGames, void(CCObject*));
GEODE_FORWARD_FUNC(MenuLayer::create, MenuLayer::create, MenuLayer*());
GEODE_FORWARD_FUNC(PlayLayer::init, PlayLayer::init, bool());
GEODE_FORWARD_FUNC(PlayLayer::getPlayer, PlayLayer::getPlayer, PlayerObject*());
GEODE_FORWARD_FUNC(PlayerObject::getHealth, PlayerObject::getHealth, int());
GEODE_FORWARD_FUNC(PlayerObject::setHealth, PlayerObject::setHealth, void(int));
GEODE_FORWARD_FUNC(LevelEditorLayer::init, LevelEditorLayer::init, bool());
GEODE_FORWARD_FUNC(GameManager::sharedState, GameManager::sharedState, GameManager*());
GEODE_FORWARD_FUNC(CCDirector::sharedDirector, CCDirector::sharedDirector, CCDirector*());

using ModMetadataV4 = ModMetadata;
