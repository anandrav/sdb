#ifndef SDB_REGISTER_INFO_HPP
#define SDB_REGISTER_INFO_HPP

#include <cstdint>
#include <cstddef>
#include <string_view>
#include <sys/user.h>

namespace sdb
{
    enum class register_id
    {
        // ?
    };

    enum class register_type
    {
        gpr, sub_gpr, fpr, dr
    };

    enum class register_format
    {
        uint, double_float, long_double, vector
    };

    struct register_info
    {
        register_id id;
        std::string_view name;
        std::int32_t dwarf_id;
        std::size_t size;
        std::size_t offset;
        register_type type;
        register_format format;
    };

    inline constexpr const register_info g_register_infos[] = {
        // ?
    };
}

#endif //SDB_REGISTER_INFO_HPP