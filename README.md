
# Hammer MeshCore Firmware

Custom firmware support and build guidance for the **Hammer** board running **MeshCore**.

## Overview

This project is intended for users who want to run MeshCore on the Hammer platform, with the flexibility to build firmware that matches their exact hardware configuration, feature set, and preferred workflow.

MeshCore provides official releases and prebuilt firmware for many supported devices, and also maintains a web flasher for easy installs. The upstream project explicitly supports flashing prebuilt binaries without compiling manually, and publishes current releases through GitHub Actions and GitHub Releases. :contentReference[oaicite:0]{index=0}

## Recommendation

**Recommended:** compile your own firmware whenever possible.

Why?

- You can target the **most recent upstream MeshCore firmware** instead of depending on an older bundled binary.
- You can verify exactly what source and configuration your node is running.
- You can enable board-specific options, custom pin mappings, peripherals, network preferences, and experimental features as needed.
- You avoid stale binaries when upstream MeshCore adds fixes, power improvements, routing changes, or new commands.

MeshCore upstream is actively updated. For example, the current public release stream shows **v1.14.0** releases published in early March 2026, including fixes and changes across supported device families. :contentReference[oaicite:1]{index=1}

## Who this is for

This firmware path is for:

- Hammer board owners
- Builders who want maximum control over firmware features
- Users testing new upstream MeshCore changes
- Developers maintaining custom hardware variants
- Anyone who prefers reproducible local builds over unknown precompiled images

## Important note about prebuilt firmware

If you just want to get a node running quickly, official prebuilt MeshCore binaries and the web flasher may be the fastest route. MeshCore’s web flasher is designed for supported devices and the upstream project states that many devices can be flashed without local compilation.

However, for the Hammer board, custom hardware revisions, or long-term maintenance, **self-compiling is strongly recommended**.

## Why compile your own

Building locally gives you:

- the latest upstream code
- better transparency
- easier customization
- simpler debugging
- better repeatability for future updates
- confidence that the firmware matches your exact board revision

This is especially useful when upstream MeshCore introduces new routing behavior, power fixes, bootloader-related commands, or board support changes. Recent releases include routing and radio changes as well as power fixes for several boards. :contentReference[oaicite:3]{index=3}

## Suggested workflow

1. Clone or download the latest upstream MeshCore source.
2. Apply any Hammer-specific board definitions, pin mappings, or local patches.
3. Build the firmware locally using the supported build environment.
4. Flash the resulting binary to your Hammer board.
5. Test serial console access, radio operation, and any attached peripherals.
6. Rebuild whenever upstream MeshCore publishes a new release or when Hammer hardware support changes.

## Update policy

Users are encouraged to:

- build from the latest stable upstream release when possible
- review upstream release notes before updating
- keep a known-good binary for rollback
- recompile after major MeshCore changes
- avoid relying on old firmware images bundled in random forks or archives

## Versioning guidance

This project should not promise that any included binary is “the latest.” Upstream MeshCore releases move regularly, and the safest practice is to pull the newest tagged release or current source and build it yourself. Upstream release automation is documented in the MeshCore repository, and current release artifacts are published through GitHub Releases. :contentReference[oaicite:4]{index=4}

## Support expectations

This project may provide board definitions, example configs, or Hammer-specific notes, but users should assume:

- upstream MeshCore is the source of truth for current firmware behavior
- official release notes should be checked before flashing
- local builds are preferred for production or field deployment
- custom boards may require manual adjustment after upstream changes

## Disclaimer

This project is an independent Hammer-oriented firmware setup and is not a substitute for reviewing upstream MeshCore documentation, release notes, and flashing guidance. Always confirm compatibility with your exact board revision and keep recovery access available before flashing new firmware.

## Upstream references

- MeshCore GitHub repository
- MeshCore releases
- MeshCore web flasher

Use the upstream project for the newest release artifacts, release notes, and supported flashing methods. Official MeshCore sources currently show active releases and web-based flashing support.
