# osquery third-party prebuilt libraries

This repository is intended as a submodule for `osquery/osquery`.

The `.gitignore` file only allows include headers, static libraries, and pkg-config files. In the future it can be relaxed to include additional data produced by dependency builds. An example is lenses from Augeas or root certificates from openssl.
