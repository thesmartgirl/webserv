#include "HttpTypes.hpp"

std::string toString(HttpMethod method) {
    switch (method) {
        case GET: return "GET";
        case POST: return "POST";
        case DELETE_: return "DELETE";
        default: return "UNKNOWN";
    }
}
