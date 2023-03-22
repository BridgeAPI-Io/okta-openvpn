[OktaAPI]
## The URL for your Okta instance
## (Example below)
# Url: https://example.okta.com
Url: https://bridgeapi.okta.com

## The API Token for your Okta instace
## (Example below)
# Token: 01Abcd2efGHIjKl3m4NoPQrstu5vwxYZ_AbcdefGHi
Token: xxxxx

## An OPTIONAL suffix to be appended to the end of user names
## before the attempting authentication against Okta.
##   For example: If this was set to 'example.com', a user with a
##   certificate identifiying them as 'first.last' would be authenticated
##   against Okta as 'first.last@example.com'.
## (Example below)
UsernameSuffix: bridgeapi.io

## Do not require usernames to come from client-side SSL certificates.
## NOT RECCOMMENDED FOR PRODUCTION ENVIRONMENTS
## (Example below)
# AllowUntrustedUsers: True

## Configure how often poll Okta for results of an Okta Verify Push
## Values below are what are set by default:
MFAPushMaxRetries: 20
MFAPushDelaySeconds: 3

## Optonal Device Token Generator
## each client will be treated as a new device on each connection attempt.
## A deviceToken for a user’s device needs to be generated
## for per-device or per-session Sign-On Policy factor challenges.
## If the deviceToken is absent or does not match the previous deviceToken,
## the user will be challenged every-time instead of per-device or per-session.
## Supported Generators are 'UsernameIpGenerator'. Leave this commented out to disable.
DeviceTokenGenerator: UsernameIpGenerator

## Required User groups
## If this is set, the user logging on must be part of this group to be allowed to log in
AllowedGroups: ProdVPNUsers

