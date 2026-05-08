#include <Geode/Geode.hpp>
#include <Geode/loader/Loader.hpp>
#include <Geode/loader/ModMetadata.hpp>
#include <Geode/loader/Mod.hpp>
#include "../include/bridge.hpp"

using namespace geode::prelude;

class $modify(Loader) {
    Result<> validateMod(ModMetadata const& meta) {
        if (meta.getGameVersion() == "2.2074" && meta.getGeodeVersion().major == 4) {
            return Ok();
        }
        return Loader::validateMod(meta);
    }
};

class $modify(Mod) {
    static Result<std::unique_ptr<Mod>> create(ModMetadata const& meta, std::filesystem::path const& path) {
        if (meta.getGameVersion() == "2.2074" && meta.getGeodeVersion().major == 4) {
            return Mod::create(meta, path);
        }
        return Mod::create(meta, path);
    }
};
