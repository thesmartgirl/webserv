#include "HttpRequest.hpp"

HttpRequest::HttpRequest() : method(UNKNOWN), target(), version("HTTP/1.1"), headers(), body() {}

HttpRequest::~HttpRequest() {}

HttpRequest::HttpRequest(const HttpRequest& other)
	: method(other.method), target(other.target), version(other.version), headers(other.headers), body(other.body) {}

HttpRequest& HttpRequest::operator=(const HttpRequest& other) {
	if (this != &other) {
		method = other.method;
		target = other.target;
		version = other.version;
		headers = other.headers;
		body = other.body;
	}
	return *this;
}
