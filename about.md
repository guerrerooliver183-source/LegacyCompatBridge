# About GDTube

**GDTube** is a compatibility mod designed to act as a bridge between different versions of Geode and Geometry Dash. Its main purpose is to allow mods created for **Geode v4 / Geometry Dash 2.2074** to run properly on **Geode v5 / Geometry Dash 2.2081**, without the need to modify or update them individually.

---

## What problem does it solve?
Every time Geometry Dash or Geode is updated, memory addresses, function names, internal structures, and loading rules change. This causes all existing mods to stop working until developers adapt them to the new version. GDTube fixes this by handling the loading process and translating everything automatically.

---

## How does it work?
1. **Bypasses version validation**: Tells Geode to allow loading mods marked as v4 / 2.2074, skipping the automatic block.
2. **Aliases and mappings**: Translates old class, function, and variable names to their new equivalents in version 5.
3. **Function redirection**: When an old mod tries to access an address or function, the bridge automatically redirects it to the correct location in the new version.
4. **API compatibility**: Adapts internal SDK changes so old code is interpreted correctly.

---

## Features
- Fully transparent to the user.
- Works on Windows and Android.
- Does not modify original game files or existing mods.
- Lightweight, with no noticeable performance impact.
- Structured to add more mappings and fixes progressively.

---

## Technologies used
- Geode SDK v5
- C++23
- Class modification & hooking
- Address & structure mapping
