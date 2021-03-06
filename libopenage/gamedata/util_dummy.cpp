// Copyright 2013-2021 the openage authors. See copying.md for legal info.

// Warning: this file is a dummy file and was auto-generated by the v0.4.1 converter;
// its purpose is to keep the deprecated gamestate compilable and intact;
// these files keep only the minimum functionality and should not be changed;
// For details, see buildsystem/codegen.cmake and openage/codegen.


#include <vector>
#include "error/error.h"
#include "util_dummy.h"
#include "util/strings.h"


namespace openage {
namespace gamedata {

constexpr size_t multisubtype_ref::member_count;
int multisubtype_ref::fill(const std::string &line) {
    std::vector<std::string> buf = openage::util::split_escape(
        line, ',', multisubtype_ref::member_count
    );

    if (buf.size() != multisubtype_ref::member_count) {
        throw openage::error::Error(
            ERR
            << "Tokenizing multisubtype_ref led to "
            << buf.size()
            << " columns (expected "
            << multisubtype_ref::member_count
            << ")!"
        );
    }

    this->subtype = buf[0];
    this->filename = buf[1];

    return -1;
}

bool multisubtype_ref::recurse(const openage::util::CSVCollection & /*storage*/, const std::string & /*basedir*/) {
    return true;
}

} // gamedata
} // openage
