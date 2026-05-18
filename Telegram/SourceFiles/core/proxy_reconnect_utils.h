/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "core/core_settings_proxy.h"

namespace Core {

[[nodiscard]] inline bool ShouldRestartMtprotoProxyAfterTimeAdjust(
		const SettingsProxy &proxySettings) {
	const auto selectedProxy = proxySettings.selected();
	return proxySettings.isEnabled()
		&& selectedProxy.valid()
		&& selectedProxy.type == MTP::ProxyData::Type::Mtproto;
}

} // namespace Core
