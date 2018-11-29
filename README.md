# FreeHackQuest Backend
[![Build Status](https://travis-ci.org/freehackquest/backend.svg?branch=master)](https://travis-ci.org/freehackquest/backend)

Backend for FreeHackQuest on Qt and WebSockets
Frontend for FreeHackQuest here: [frontend](https://github.com/freehackquest/frontend)

* [CONFIGURING](install/CONFIGURING.md)
* [HOW-TO-BUILD](install/HOW-TO-BUILD.md)
* [PRE-BUILDS](install/PRE-BUILDS.md)
* [DOCKER](install/DOCKER_COMPOSE.md)
* Configure autostart
	* [SYSTEMD](install/SYSTEMD.md)
	* [INITD](install/INITD.md)


## (Ubuntu) Install from ppa:

```
$ sudo add-apt-repository ppa:freehackquest/fhq-server
$ sudo apt update
$ sudo apt install fhq-server
```
More details here:

[https://launchpad.net/~freehackquest/+archive/ubuntu/fhq-server](https://launchpad.net/~freehackquest/+archive/ubuntu/fhq-server)

## 3rdParty

* Contains source code to compile: [SmtpClient-for-Qt](https://github.com/bluetiger9/SmtpClient-for-Qt)
* For Json: [Json](https://github.com/nlohmann/json)
* Used libcurl for a working with http/https/smtp: [https://curl.haxx.se/](https://curl.haxx.se/)
* Used libopenssl for a working with https requests: [https://www.openssl.org/](https://www.openssl.org/)
* Used libzip for a working with zip-archives: [https://libzip.org/](https://libzip.org/)
* Used libpng for a processing png-images: [http://libpng.org/](http://libpng.org/)
