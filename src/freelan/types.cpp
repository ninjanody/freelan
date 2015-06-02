/*
 * freelan - An open, multi-platform software to establish peer-to-peer virtual
 * private networks.
 *
 * Copyright (C) 2010-2011 Julien KAUFFMANN <julien.kauffmann@freelan.org>
 *
 * This file is part of freelan.
 *
 * freelan is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 3 of
 * the License, or (at your option) any later version.
 *
 * freelan is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link the code of portions of this program with the
 * OpenSSL library under certain conditions as described in each
 * individual source file, and distribute linked combinations
 * including the two.
 * You must obey the GNU General Public License in all respects
 * for all of the code used other than OpenSSL.  If you modify
 * file(s) with this exception, you may extend this exception to your
 * version of the file(s), but you are not obligated to do so.  If you
 * do not wish to do so, delete this exception statement from your
 * version.  If you delete this exception statement from all source
 * files in the program, then also delete it here.
 *
 * If you intend to use freelan in a commercial software, please
 * contact me : we may arrange this for a small fee or no fee at all,
 * depending on the nature of your project.
 */

#include <freelan/types.h>

#include <cassert>

#include <freelan/memory.h>

#include "../internal/memory.hpp"
#include "../internal/error.hpp"
#include "../internal/ipv4_address.hpp"
#include "../internal/ipv6_address.hpp"
#include "../internal/hostname.hpp"
#include "../internal/port_number.hpp"
#include "../internal/ipv4_prefix_length.hpp"
#include "../internal/ipv6_prefix_length.hpp"

struct IPv4Address* freelan_IPv4Address_from_string(struct ErrorContext* ectx, const char* str) {
	assert(str);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return reinterpret_cast<IPv4Address*>(
		FREELAN_NEW freelan::IPv4Address(freelan::IPv4Address::from_string(str))
	);

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

char* freelan_IPv4Address_to_string(struct ErrorContext* ectx, const struct IPv4Address* inst) {
	assert(inst);

	const auto value = reinterpret_cast<const freelan::IPv4Address*>(inst);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return ::freelan_strdup(value->to_string().c_str());

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

void freelan_IPv4Address_free(struct IPv4Address* inst) {
	FREELAN_DELETE reinterpret_cast<freelan::IPv4Address*>(inst);
}

int freelan_IPv4Address_less_than(const struct IPv4Address* lhs, const struct IPv4Address* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::IPv4Address*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::IPv4Address*>(rhs);

	return (ilhs < irhs) ? 1 : 0;
}

int freelan_IPv4Address_equal(const struct IPv4Address* lhs, const struct IPv4Address* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::IPv4Address*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::IPv4Address*>(rhs);

	return (ilhs == irhs) ? 1 : 0;
}

struct IPv6Address* freelan_IPv6Address_from_string(struct ErrorContext* ectx, const char* str) {
	assert(str);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return reinterpret_cast<IPv6Address*>(
		FREELAN_NEW freelan::IPv6Address(freelan::IPv6Address::from_string(str))
	);

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

char* freelan_IPv6Address_to_string(struct ErrorContext* ectx, const struct IPv6Address* inst) {
	assert(inst);

	const auto value = reinterpret_cast<const freelan::IPv6Address*>(inst);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return ::freelan_strdup(value->to_string().c_str());

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

void freelan_IPv6Address_free(struct IPv6Address* inst) {
	FREELAN_DELETE reinterpret_cast<freelan::IPv6Address*>(inst);
}

int freelan_IPv6Address_less_than(const struct IPv6Address* lhs, const struct IPv6Address* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::IPv6Address*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::IPv6Address*>(rhs);

	return (ilhs < irhs) ? 1 : 0;
}

int freelan_IPv6Address_equal(const struct IPv6Address* lhs, const struct IPv6Address* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::IPv6Address*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::IPv6Address*>(rhs);

	return (ilhs == irhs) ? 1 : 0;
}

struct Hostname* freelan_Hostname_from_string(struct ErrorContext* ectx, const char* str) {
	assert(str);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return reinterpret_cast<Hostname*>(
		FREELAN_NEW freelan::Hostname(freelan::Hostname::from_string(str))
	);

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

char* freelan_Hostname_to_string(struct ErrorContext* ectx, const struct Hostname* inst) {
	assert(inst);

	const auto value = reinterpret_cast<const freelan::Hostname*>(inst);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return ::freelan_strdup(value->to_string().c_str());

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

void freelan_Hostname_free(struct Hostname* inst) {
	FREELAN_DELETE reinterpret_cast<freelan::Hostname*>(inst);
}

int freelan_Hostname_less_than(const struct Hostname* lhs, const struct Hostname* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::Hostname*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::Hostname*>(rhs);

	return (ilhs < irhs) ? 1 : 0;
}

int freelan_Hostname_equal(const struct Hostname* lhs, const struct Hostname* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::Hostname*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::Hostname*>(rhs);

	return (ilhs == irhs) ? 1 : 0;
}

struct PortNumber* freelan_PortNumber_from_string(struct ErrorContext* ectx, const char* str) {
	assert(str);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return reinterpret_cast<PortNumber*>(
		FREELAN_NEW freelan::PortNumber(freelan::PortNumber::from_string(str))
	);

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

char* freelan_PortNumber_to_string(struct ErrorContext* ectx, const struct PortNumber* inst) {
	assert(inst);

	const auto value = reinterpret_cast<const freelan::PortNumber*>(inst);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return ::freelan_strdup(value->to_string().c_str());

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

void freelan_PortNumber_free(struct PortNumber* inst) {
	FREELAN_DELETE reinterpret_cast<freelan::PortNumber*>(inst);
}

int freelan_PortNumber_less_than(const struct PortNumber* lhs, const struct PortNumber* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::PortNumber*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::PortNumber*>(rhs);

	return (ilhs < irhs) ? 1 : 0;
}

int freelan_PortNumber_equal(const struct PortNumber* lhs, const struct PortNumber* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::PortNumber*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::PortNumber*>(rhs);

	return (ilhs == irhs) ? 1 : 0;
}

struct IPv4PrefixLength* freelan_IPv4PrefixLength_from_string(struct ErrorContext* ectx, const char* str) {
	assert(str);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return reinterpret_cast<IPv4PrefixLength*>(
		FREELAN_NEW freelan::IPv4PrefixLength(freelan::IPv4PrefixLength::from_string(str))
	);

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

char* freelan_IPv4PrefixLength_to_string(struct ErrorContext* ectx, const struct IPv4PrefixLength* inst) {
	assert(inst);

	const auto value = reinterpret_cast<const freelan::IPv4PrefixLength*>(inst);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return ::freelan_strdup(value->to_string().c_str());

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

void freelan_IPv4PrefixLength_free(struct IPv4PrefixLength* inst) {
	FREELAN_DELETE reinterpret_cast<freelan::IPv4PrefixLength*>(inst);
}

int freelan_IPv4PrefixLength_less_than(const struct IPv4PrefixLength* lhs, const struct IPv4PrefixLength* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::IPv4PrefixLength*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::IPv4PrefixLength*>(rhs);

	return (ilhs < irhs) ? 1 : 0;
}

int freelan_IPv4PrefixLength_equal(const struct IPv4PrefixLength* lhs, const struct IPv4PrefixLength* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::IPv4PrefixLength*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::IPv4PrefixLength*>(rhs);

	return (ilhs == irhs) ? 1 : 0;
}

struct IPv6PrefixLength* freelan_IPv6PrefixLength_from_string(struct ErrorContext* ectx, const char* str) {
	assert(str);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return reinterpret_cast<IPv6PrefixLength*>(
		FREELAN_NEW freelan::IPv6PrefixLength(freelan::IPv6PrefixLength::from_string(str))
	);

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

char* freelan_IPv6PrefixLength_to_string(struct ErrorContext* ectx, const struct IPv6PrefixLength* inst) {
	assert(inst);

	const auto value = reinterpret_cast<const freelan::IPv6PrefixLength*>(inst);

	FREELAN_BEGIN_USE_ERROR_CONTEXT(ectx);

	return ::freelan_strdup(value->to_string().c_str());

	FREELAN_END_USE_ERROR_CONTEXT(ectx);

	return nullptr;
}

void freelan_IPv6PrefixLength_free(struct IPv6PrefixLength* inst) {
	FREELAN_DELETE reinterpret_cast<freelan::IPv6PrefixLength*>(inst);
}

int freelan_IPv6PrefixLength_less_than(const struct IPv6PrefixLength* lhs, const struct IPv6PrefixLength* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::IPv6PrefixLength*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::IPv6PrefixLength*>(rhs);

	return (ilhs < irhs) ? 1 : 0;
}

int freelan_IPv6PrefixLength_equal(const struct IPv6PrefixLength* lhs, const struct IPv6PrefixLength* rhs) {
	assert(lhs);
	assert(rhs);

	const auto ilhs = *reinterpret_cast<const freelan::IPv6PrefixLength*>(lhs);
	const auto irhs = *reinterpret_cast<const freelan::IPv6PrefixLength*>(rhs);

	return (ilhs == irhs) ? 1 : 0;
}