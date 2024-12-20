# eligibility-intel

This project is an open source reimplementation of eligibility related stuff.

> [!NOTE]
> Past 15.2 Beta 3 Apple has made this effectively useless without modding system files or spoofing your SMBIOS, with this you can enable the UI but the Anvil framework will prevent the AI downloading.
> 
> This tool works best on 15.2 Beta 2 or lower, however I personally couldn't get the AI models to fully download.

## Disclaimer

> [!CAUTION]
> Some feature will only work when SIP is disabled.
>
> Use at your own risk.

> [!NOTE]
> this project is for learning and research purposes only.
> 
> If you choose to use this project, you do so at your own risk and are responsible for compliance with any applicable laws.
>
> The author of this project is not responsible for any consequences that may arise from your use of this project.

## Status

### EligibilityCore

A SwiftPM C package to provide common header definitions for this project and can be used in other projects.

See detail on [EligibilityCore/README.md](EligibilityCore/README.md)

### eligibilityd

A binary to replace `/usr/libexec/eligibilityd`

See detail on [eligibilityd/README.md](eligibilityd/README.md)

### libsystem_eligibility

A library to replace `/usr/lib/system/libsystem_eligibility.dylib`

See detail on [libsystem_eligibility/README.md](libsystem_eligibility/README.md)

### eligibility_util

A Swift CLI tool to communite with eligibilityd with libsystem_eligibility API.

See detail on [eligibility_util/README.md](eligibility_util/README.md)

## Related projects

- https://github.com/Kyle-Ye/XcodeLLMEligible

## Contributions

If you find any issues or have suggestions for improvements, feel free to submit an issue or a pull request.

## LICENSE

### EligbilityCore and eligibility_util

MIT license. See LICENSE file on each folder.

### eligibilityd and libsystem_eligibility

No license.
