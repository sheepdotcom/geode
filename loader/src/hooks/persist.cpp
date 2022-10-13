#include <Geode/ui/SceneManager.hpp>

USE_GEODE_NAMESPACE();

#include <codegenned/modify/AchievementNotifier.hpp>
class $modify(AchievementNotifier) {
    void willSwitchToScene(CCScene* scene) {
        AchievementNotifier::willSwitchToScene(scene);
        SceneManager::get()->willSwitchToScene(scene);
    }
};
