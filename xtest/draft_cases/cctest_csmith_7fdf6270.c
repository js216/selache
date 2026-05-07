// SPDX-License-Identifier: MIT
// cctest_csmith_7fdf6270.c --- cctest case csmith_7fdf6270 (csmith seed 2145346160)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd8f9547 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 2145346160 -o /tmp/csmith_gen_0f_hiaa4/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 6;
};
#pragma pack(pop)

struct S1 {
   signed f0 : 27;
};

union U2 {
   uint16_t  f0;
   int64_t  f1;
   uint8_t  f2;
};


static int32_t g_3 = 1L;
static int32_t g_4 = 0x6A205B29L;
static uint16_t g_10 = 0x4CB8L;
static struct S1 g_70[7] = {{10195},{7235},{10195},{10195},{7235},{10195},{10195}};
static union U2 g_71[4][6][6] = {{{{0x7005L},{2UL},{5UL},{0xAB95L},{0xF1DBL},{0x5AB8L}},{{65531UL},{65535UL},{65535UL},{0x7399L},{0xF1DBL},{0UL}},{{0x4865L},{2UL},{0UL},{65530UL},{0x2252L},{0xBCF2L}},{{0x3746L},{65532UL},{65535UL},{0xC9AAL},{0x7005L},{0x012CL}},{{0xAB95L},{0x7399L},{1UL},{0xC9AAL},{0xC9AAL},{1UL}},{{0x3746L},{0x3746L},{0xDD68L},{65530UL},{0x0429L},{0UL}}},{{{0x4865L},{0xF1DBL},{0UL},{65526UL},{0x04E0L},{0x7399L}},{{0x6F6EL},{65529UL},{65531UL},{0x55A9L},{0UL},{0x2252L}},{{0x05F6L},{0x55A9L},{0x7399L},{0xBD5FL},{0UL},{1UL}},{{0xBD5FL},{0UL},{1UL},{0UL},{0x3998L},{2UL}},{{0x463AL},{0UL},{0x4865L},{0x47D0L},{0UL},{0xF1DBL}},{{0UL},{0x55A9L},{0x2252L},{0xE88BL},{0UL},{65535UL}}},{{{0x47D0L},{65529UL},{0xC9AAL},{0x6F6EL},{0x04E0L},{0x0429L}},{{0x47D0L},{0xE88BL},{0xAB95L},{0xE88BL},{0x47D0L},{65531UL}},{{0UL},{0UL},{65535UL},{0x47D0L},{0UL},{65530UL}},{{0x463AL},{65526UL},{0x0429L},{0UL},{0x05F6L},{65530UL}},{{0xBD5FL},{0x04E0L},{65535UL},{0xBD5FL},{0xC287L},{65531UL}},{{0x05F6L},{65534UL},{0xAB95L},{0x55A9L},{0xE88BL},{0x0429L}}},{{{0x6F6EL},{0x463AL},{0xC9AAL},{65526UL},{0xE88BL},{65535UL}},{{65529UL},{65534UL},{0x2252L},{0xDD03L},{0xC287L},{0xF1DBL}},{{0UL},{0x04E0L},{0x4865L},{0UL},{0x05F6L},{2UL}},{{0x55A9L},{65526UL},{1UL},{0UL},{0UL},{1UL}},{{0UL},{0UL},{0x7399L},{0xDD03L},{0x47D0L},{0x2252L}},{{65529UL},{0xE88BL},{65531UL},{65526UL},{0x04E0L},{0x7399L}}}};
static int32_t g_85 = 0L;
static int32_t g_88[3][4][6] = {{{9L,0x85E685ACL,0x68985BB2L,0x68985BB2L,0x85E685ACL,9L},{1L,(-1L),0x85E685ACL,1L,0L,0x5D92507BL},{(-1L),2L,3L,0L,0xA889E4E2L,0x0EC92890L},{(-1L),0xECA68EB2L,0L,1L,0x0F83D54BL,0x14D58F1AL}},{{1L,0L,(-1L),0x68985BB2L,0x5D92507BL,0xEB5978FFL},{9L,0L,(-1L),0x0F83D54BL,(-1L),0L},{0L,(-1L),0x773A67FEL,2L,9L,0xDFED4114L},{0L,0x1CF63D7CL,0x5D92507BL,9L,0x14D58F1AL,0x7596CDD1L}},{{0xA889E4E2L,0x1CF63D7CL,0L,(-9L),9L,1L},{0x7596CDD1L,(-1L),0x482A8E6FL,0xA889E4E2L,(-1L),0x773A67FEL},{(-1L),0L,0x0F83D54BL,0x5D92507BL,0x5D92507BL,0x0F83D54BL},{0L,0L,(-9L),(-1L),0x0F83D54BL,0xECA68EB2L}}};
static uint32_t g_108 = 0UL;
static int8_t g_123 = 1L;
static int32_t g_155 = 0x8FBDC138L;
static int64_t g_165 = 0L;
static int64_t *g_164 = &g_165;
static uint64_t g_185 = 0xADD518CAC006015CLL;
static uint32_t g_205 = 2UL;
static struct S1 *g_209 = (void*)0;
static struct S1 **g_208 = &g_209;
static int32_t *g_274 = &g_88[0][1][4];
static int32_t **g_273 = &g_274;
static struct S1 *g_302 = &g_70[5];
static int32_t g_303[6] = {0L,0L,0L,0L,0L,0L};
static int16_t g_315 = 0x14E3L;
static int16_t *g_314 = &g_315;
static int8_t g_326 = 0xBDL;
static uint32_t g_356[6][3][1] = {{{4294967295UL},{0xC35AECD1L},{4294967295UL}},{{8UL},{8UL},{4294967295UL}},{{0xC35AECD1L},{4294967295UL},{4294967290UL}},{{4294967290UL},{0xC35AECD1L},{8UL}},{{0xC35AECD1L},{4294967290UL},{4294967290UL}},{{0xC35AECD1L},{8UL},{0xC35AECD1L}}};
static int64_t g_370 = (-6L);
static const uint16_t *g_375[2][5] = {{(void*)0,&g_10,&g_10,(void*)0,&g_10},{(void*)0,&g_10,&g_10,(void*)0,&g_10}};
static const uint16_t **g_374[7] = {&g_375[0][2],&g_375[0][2],&g_375[0][2],&g_375[0][2],&g_375[0][2],&g_375[0][2],&g_375[0][2]};
static const uint16_t *** const g_373 = &g_374[6];
static const uint16_t ***g_376 = &g_374[5];
static const int32_t g_409 = 0x3601EACDL;
static const int32_t g_411 = (-2L);
static int16_t g_420[5] = {1L,1L,1L,1L,1L};
static struct S0 g_475 = {3};
static uint64_t g_502[1] = {1UL};
static int8_t g_554[7][5] = {{0x47L,0L,0L,0xB3L,(-5L)},{0L,0L,0x36L,0L,0L},{0x2CL,0L,(-3L),0L,0xCCL},{0x2CL,0xCCL,(-5L),0x84L,0x84L},{0L,0x6EL,0L,0L,0xCCL},{0x47L,0x84L,0xCCL,0L,0L},{0xCCL,(-5L),0x84L,0x84L,(-5L)}};
static int16_t *g_559 = &g_420[2];
static union U2 *g_597[1][7][4] = {{{&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5]},{&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5]},{&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5]},{&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5]},{&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5]},{&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5]},{&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5],&g_71[2][4][5]}}};
static uint32_t *g_599 = &g_205;
static uint32_t **g_598 = &g_599;
static uint16_t g_676 = 8UL;
static uint8_t *g_824 = &g_71[0][0][3].f2;
static uint8_t g_880 = 3UL;
static int64_t ***g_893 = (void*)0;
static uint32_t g_905[3][3] = {{0UL,0UL,0UL},{18446744073709551612UL,18446744073709551612UL,18446744073709551612UL},{0UL,0UL,0UL}};
static uint32_t g_911 = 0x636BEA7BL;
static int8_t g_998[4][5] = {{0xA3L,0xEEL,0xEEL,0xA3L,5L},{0xAAL,(-3L),(-3L),0xAAL,1L},{0xA3L,0xEEL,0xEEL,0xA3L,5L},{0xAAL,(-3L),(-3L),0xAAL,1L}};
static int64_t *g_1015 = &g_165;
static int32_t g_1092 = (-9L);
static int32_t g_1108 = (-10L);
static uint32_t g_1195 = 0x287F2E33L;
static int32_t ** const *g_1238[2] = {(void*)0,(void*)0};
static uint16_t *g_1271 = &g_10;
static uint16_t **g_1270 = &g_1271;
static uint16_t ***g_1269 = &g_1270;
static const union U2 g_1285 = {65527UL};
static const union U2 g_1287 = {0x1D19L};
static uint16_t g_1489 = 0x90E3L;
static uint16_t *g_1488 = &g_1489;
static int16_t g_1519 = 0x022AL;
static struct S0 g_1614 = {2};
static const int8_t g_1725 = 0x9DL;
static int64_t g_1739[1] = {(-10L)};
static int64_t **g_1757 = &g_164;
static int64_t ***g_1756 = &g_1757;
static int16_t g_1782 = (-8L);
static int16_t g_1783 = 0xD88FL;
static uint32_t g_1821[2] = {4294967295UL,4294967295UL};
static struct S0 *g_1893 = &g_475;
static struct S0 **g_1892[4][7] = {{&g_1893,&g_1893,&g_1893,&g_1893,&g_1893,&g_1893,&g_1893},{&g_1893,&g_1893,&g_1893,&g_1893,&g_1893,&g_1893,&g_1893},{&g_1893,&g_1893,&g_1893,&g_1893,&g_1893,&g_1893,&g_1893},{&g_1893,&g_1893,&g_1893,&g_1893,&g_1893,&g_1893,&g_1893}};
static int64_t *****g_1918 = (void*)0;
static struct S0 g_1921 = {7};
static int32_t g_1943 = (-1L);
static uint64_t g_1952 = 18446744073709551606UL;
static uint64_t *g_2022 = (void*)0;
static uint64_t *g_2023 = &g_185;
static int64_t g_2113 = 0x82BA0A3CC76B0731LL;
static int8_t * const g_2223[1] = {&g_554[0][4]};
static int8_t * const *g_2222 = &g_2223[0];
static int8_t * const **g_2221 = &g_2222;
static const uint32_t ****g_2231 = (void*)0;



static int32_t  func_1(void);
static int32_t  func_11(uint16_t * p_12, uint16_t  p_13, uint16_t * p_14);
static uint16_t * func_15(int16_t  p_16);
static int16_t  func_17(uint16_t * p_18, int16_t  p_19, uint32_t  p_20, uint64_t  p_21);
static struct S1  func_23(uint16_t * const  p_24);
static uint16_t * const  func_25(union U2  p_26, uint16_t * p_27, uint16_t * p_28, const int32_t  p_29);
static uint16_t * func_31(uint32_t  p_32, uint16_t  p_33, uint16_t * p_34, int8_t  p_35);
static uint16_t  func_38(uint16_t * const  p_39, uint16_t * p_40, uint16_t * const  p_41, uint64_t  p_42);




static int32_t  func_1(void)
{ 
    union U2 l_2[7][4] = {{{0UL},{0x26FFL},{65535UL},{65535UL}},{{65535UL},{1UL},{65535UL},{65535UL}},{{65535UL},{0x26FFL},{0UL},{5UL}},{{0x0722L},{65535UL},{0x26FFL},{0x26FFL}},{{0xAC45L},{0xAC45L},{0x26FFL},{65535UL}},{{0x0722L},{0x08CCL},{0UL},{65535UL}},{{65535UL},{0UL},{65535UL},{0UL}}};
    int64_t l_43 = 0x8D0336D065835A7ALL;
    uint16_t *l_1487[3][1][6] = {{{&g_10,&g_10,&g_10,(void*)0,&g_676,&g_10}},{{(void*)0,&g_676,&g_10,&g_676,(void*)0,&g_10}},{{&g_676,(void*)0,&g_10,&g_676,&g_676,&g_10}}};
    int32_t l_2014 = 0xF1598BD6L;
    uint16_t l_2038 = 65532UL;
    struct S1 *l_2044 = (void*)0;
    int32_t l_2073 = 0x03E72A4BL;
    int32_t l_2077 = 0x5E1DD526L;
    int64_t l_2078 = 0x3EF59360D591C76FLL;
    int32_t l_2080 = 6L;
    int32_t l_2083 = 6L;
    int32_t *l_2090 = &g_303[2];
    uint32_t l_2103 = 1UL;
    int32_t l_2114 = 0xBFD869CAL;
    uint8_t l_2115[5][5][3] = {{{0x6AL,0x30L,0UL},{0xBAL,9UL,0xBAL},{253UL,1UL,255UL},{1UL,9UL,0xE2L},{0x30L,0x30L,0x86L}},{{0x44L,246UL,0xBAL},{0x30L,0UL,1UL},{1UL,0xB0L,0x1DL},{253UL,0x30L,1UL},{0xBAL,0UL,0xBAL}},{{0x6AL,1UL,0x86L},{1UL,0UL,0xE2L},{251UL,0x30L,255UL},{0x44L,0xB0L,0xBAL},{251UL,0UL,0UL}},{{1UL,246UL,0x1DL},{0x6AL,0x30L,0UL},{0xBAL,9UL,0xBAL},{253UL,1UL,255UL},{1UL,9UL,0xE2L}},{{0x30L,0x30L,0x86L},{0x44L,246UL,0xBAL},{0x30L,0UL,1UL},{1UL,0xB0L,0x1DL},{253UL,0x30L,1UL}}};
    uint64_t l_2161 = 0xFA9DFEEE83ADEB94LL;
    uint32_t l_2207[4] = {0x229496F1L,0x229496F1L,0x229496F1L,0x229496F1L};
    int32_t l_2212 = 0xF65DDD0FL;
    const uint64_t l_2239 = 3UL;
    int i, j, k;
    for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
    { 
        uint16_t *l_30 = &g_10;
        int32_t l_342 = 0xCE4DA1F3L;
        int64_t ****l_2030 = (void*)0;
        int64_t *****l_2029 = &l_2030;
        int32_t *l_2033 = &g_85;
        const int32_t l_2049 = 0x9A3455C7L;
        int32_t l_2075 = 0x80028B9BL;
        int32_t l_2076 = 0L;
        int32_t l_2081[4] = {0x0B34D3ACL,0x0B34D3ACL,0x0B34D3ACL,0x0B34D3ACL};
        uint32_t l_2086 = 0x7EB1B23CL;
        int16_t * const *l_2096 = (void*)0;
        int16_t * const **l_2095 = &l_2096;
        struct S1 l_2120[4][6] = {{{5797},{3129},{5797},{5797},{3129},{5797}},{{5797},{3129},{5797},{5797},{3129},{5797}},{{5797},{3129},{5797},{5797},{3129},{5797}},{{5797},{3129},{5797},{5797},{3129},{5797}}};
        uint32_t ***l_2133[1];
        struct S0 *l_2134 = &g_475;
        uint32_t l_2174 = 0x352B7283L;
        int8_t l_2179 = 4L;
        int16_t l_2211[3][6][3] = {{{1L,0xF143L,1L},{1L,0xF410L,1L},{1L,0xF143L,1L},{1L,0xF410L,1L},{1L,0xF143L,1L},{1L,0xF410L,1L}},{{1L,0xF143L,1L},{1L,0xF410L,1L},{1L,0xF143L,1L},{1L,0xF410L,1L},{1L,0xF143L,1L},{1L,0xF410L,1L}},{{1L,0xF143L,1L},{1L,0xF410L,1L},{1L,0xF143L,1L},{1L,0xF410L,1L},{1L,0xF143L,1L},{1L,0xF410L,1L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2133[i] = &g_598;
        for (g_4 = 0; (g_4 <= 3); g_4 += 1)
        { 
            uint16_t *l_9 = &g_10;
            const int32_t l_774 = 0x2B5ACBE0L;
            uint8_t l_2042 = 0x49L;
            int32_t l_2068 = (-1L);
            int32_t l_2070 = (-1L);
            int32_t l_2072 = 0x5EAA9826L;
            int32_t l_2074 = (-9L);
            int32_t l_2079 = 1L;
            int32_t l_2085[3][2] = {{3L,(-7L)},{(-7L),3L},{(-7L),(-7L)}};
            int32_t *l_2105 = &l_2068;
            int32_t *l_2106 = &g_85;
            int32_t *l_2107 = &l_2075;
            int32_t *l_2108 = &l_2076;
            int32_t *l_2109 = (void*)0;
            int32_t *l_2110 = &g_85;
            int32_t *l_2111 = (void*)0;
            int32_t *l_2112[2][7] = {{&l_2074,&l_2074,&l_2072,(void*)0,&l_2072,&l_2074,&l_2074},{&l_2074,&l_2072,&g_155,&l_2076,&l_2072,&l_2072,&l_2076}};
            uint8_t *l_2127[5] = {&l_2115[3][1][2],&l_2115[3][1][2],&l_2115[3][1][2],&l_2115[3][1][2],&l_2115[3][1][2]};
            int8_t *l_2130[2][2] = {{&g_326,&g_326},{&g_326,&g_326}};
            int i, j;
        }
    }
    return (*l_2090);
}



static int32_t  func_11(uint16_t * p_12, uint16_t  p_13, uint16_t * p_14)
{ 
    uint32_t l_1970 = 18446744073709551608UL;
    for (g_123 = 3; (g_123 >= 0); g_123 -= 1)
    { 
        int8_t l_1968 = 0xAAL;
        int8_t *l_1982 = &g_998[1][1];
        int8_t **l_1981 = &l_1982;
        const union U2 **l_2001 = (void*)0;
        uint64_t *l_2009 = (void*)0;
        int32_t *l_2010 = &g_303[5];
        for (g_165 = 0; (g_165 <= 3); g_165 += 1)
        { 
            union U2 **l_1946 = &g_597[0][3][1];
            union U2 *l_1948 = &g_71[0][0][3];
            union U2 **l_1947 = &l_1948;
            (*l_1947) = ((*l_1946) = &g_71[0][0][3]);
            for (g_205 = 0; (g_205 <= 3); g_205 += 1)
            { 
                int32_t *l_1949 = &g_85;
                int32_t *l_1950 = &g_88[2][3][5];
                int32_t *l_1951 = &g_303[2];
                g_1952++;
                return p_13;
            }
        }
        if (p_13)
            continue;
        for (p_13 = 0; (p_13 <= 3); p_13 += 1)
        { 
            int8_t *l_1996[1][4] = {{&g_998[3][1],&g_998[3][1],&g_998[3][1],&g_998[3][1]}};
            int32_t l_2003 = (-1L);
            int32_t *l_2012 = &g_88[1][2][4];
            int i, j;
            for (g_1195 = 0; (g_1195 <= 1); g_1195 += 1)
            { 
                union U2 *l_1958 = (void*)0;
                int32_t *l_1960 = &g_155;
                int32_t *l_1971 = &g_1092;
                int8_t * const *l_1980 = (void*)0;
                int8_t * const **l_1979 = &l_1980;
                for (g_185 = 0; (g_185 <= 1); g_185 += 1)
                { 
                    int32_t *l_1957 = &g_303[2];
                    union U2 **l_1959 = &g_597[0][3][1];
                    int32_t **l_1961 = &g_274;
                    int i;
                    (*l_1957) = (safe_mul_func_uint16_t_u_u((*p_14), p_13));
                    (*l_1959) = l_1958;
                    (*l_1961) = l_1960;
                    (*l_1959) = (*l_1959);
                }
                (*l_1971) ^= (safe_mul_func_uint8_t_u_u(((*g_824) = (((void*)0 != g_1918) && (safe_add_func_uint16_t_u_u(65535UL, (((safe_add_func_uint8_t_u_u(((-1L) >= l_1968), (~((((*l_1960) && l_1970) || p_13) < 255UL)))) <= 0x07L) | l_1970))))), l_1970));
                (*l_1960) &= (safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(0x23L, 4)), ((~((safe_mod_func_uint8_t_u_u(p_13, ((((*l_1971) = (((*l_1979) = (void*)0) == l_1981)) == ((safe_mul_func_int16_t_s_s(((*g_559) = (*g_314)), (7L != (safe_sub_func_uint32_t_u_u(((0x4ADB79A9BCB55A96LL != (**g_1757)) ^ p_13), 0xC0581AC4L))))) == l_1970)) , l_1968))) , (-5L))) <= l_1968)));
            }
            for (g_1782 = 3; (g_1782 >= 0); g_1782 -= 1)
            { 
                int32_t *l_2002 = &g_85;
                int32_t **l_2011[7][3] = {{&g_274,&g_274,&g_274},{&l_2010,&l_2010,&l_2010},{&g_274,&g_274,&g_274},{&l_2010,&l_2010,&l_2010},{&g_274,&g_274,&g_274},{&l_2010,&l_2010,&l_2010},{&g_274,&g_274,&g_274}};
                int i, j;
                l_2003 = (safe_add_func_uint16_t_u_u(((((!((((((**g_598) &= (safe_sub_func_uint16_t_u_u(0x0800L, (safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((((*l_1981) = l_1996[0][0]) == &g_554[5][2]), (safe_rshift_func_int16_t_s_u(1L, (safe_mod_func_uint64_t_u_u((((void*)0 == l_2001) >= ((*l_2002) = l_1970)), 0xA146E56F05B116FCLL)))))), 3))))) < l_2003) >= (-1L)) & 0xDE33CB09DB239586LL) > 0xFE3CL)) , l_1970) <= g_88[1][2][4]) < 1UL), l_1968));
                (*l_2002) ^= (safe_mod_func_int32_t_s_s(((((+((***g_1269) = (p_13 || (*g_599)))) || (l_2003 ^ (safe_mod_func_int8_t_s_s(g_1783, g_370)))) > (l_2009 == (void*)0)) , l_1968), p_13));
                l_2012 = l_2010;
                (*l_2010) ^= 0x4C7B955FL;
            }
        }
    }
    return l_1970;
}



static uint16_t * func_15(int16_t  p_16)
{ 
    int32_t *l_1944 = (void*)0;
    int32_t **l_1945 = &g_274;
    (*l_1945) = l_1944;
    return (**g_1269);
}



static int16_t  func_17(uint16_t * p_18, int16_t  p_19, uint32_t  p_20, uint64_t  p_21)
{ 
    int32_t *l_1494 = (void*)0;
    int32_t l_1495 = (-5L);
    int32_t *l_1515 = &g_1092;
    int64_t l_1520 = 0xC0E8E8405A58A990LL;
    int32_t l_1545 = 0x51BCFABDL;
    int16_t **l_1569 = &g_314;
    uint32_t ***l_1589 = &g_598;
    uint16_t ***l_1628 = &g_1270;
    struct S1 *l_1642 = (void*)0;
    uint64_t l_1652 = 7UL;
    union U2 l_1663[7] = {{1UL},{0UL},{1UL},{1UL},{0UL},{1UL},{1UL}};
    int32_t l_1788 = 0x4EBCD611L;
    int32_t l_1792 = (-1L);
    int32_t l_1793 = 0xEB3D548DL;
    uint16_t l_1808 = 0xB4AAL;
    int32_t l_1827 = 0x28E43FB8L;
    int32_t l_1830 = 0L;
    const int64_t *l_1839 = &g_1739[0];
    const int64_t **l_1838 = &l_1839;
    const int64_t ***l_1837 = &l_1838;
    int32_t l_1928 = 0x2691ABF4L;
    int32_t **l_1942 = &g_274;
    int i;
    if (((**g_598) <= (l_1495 = ((*g_314) == (safe_rshift_func_uint16_t_u_s((*p_18), 15))))))
    { 
        uint8_t l_1512 = 0UL;
        int8_t *l_1516 = &g_554[5][2];
        int8_t l_1517 = 1L;
        int16_t *l_1518 = &g_1519;
        struct S0 *l_1521 = &g_475;
        struct S0 * const l_1522 = &g_475;
        int32_t l_1540[6][6][1] = {{{0L},{0x8FC0D220L},{0L},{0x8FC0D220L},{0L},{0x8FC0D220L}},{{0L},{0x8FC0D220L},{0L},{0x8FC0D220L},{0L},{0x8FC0D220L}},{{0L},{0x8FC0D220L},{0L},{0x8FC0D220L},{0L},{0x8FC0D220L}},{{0L},{0x8FC0D220L},{0L},{0x8FC0D220L},{0L},{0x8FC0D220L}},{{0L},{0x8FC0D220L},{0L},{0x8FC0D220L},{0L},{0x8FC0D220L}},{{0L},{0x8FC0D220L},{0L},{0x8FC0D220L},{0L},{0x8FC0D220L}}};
        struct S0 *l_1568 = &g_475;
        int32_t **l_1643 = &g_274;
        int64_t * const *l_1668 = &g_164;
        int64_t * const **l_1667 = &l_1668;
        int64_t * const ***l_1666 = &l_1667;
        int16_t ***l_1687 = (void*)0;
        uint16_t ***l_1738 = &g_1270;
        int i, j, k;
        if (((l_1521 = ((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((p_19 , (((*g_559) = (*g_314)) < (safe_lshift_func_int16_t_s_s((p_19 = (((safe_sub_func_int32_t_s_s((g_185 | (((*l_1518) = (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((((*l_1516) ^= (0xC395L != (((*g_273) = (((((safe_sub_func_uint8_t_u_u(l_1512, (safe_div_func_int64_t_s_s((l_1512 , 0x3180DF065842E159LL), g_303[2])))) && g_3) , (void*)0) != (*g_376)) , l_1515)) != &l_1495))) ^ l_1517), 1L)) <= l_1517), l_1512)) , p_19), g_326))) ^ 0x40DAL)), l_1520)) || p_20) > 65527UL)), (*g_314))))) ^ (*l_1515)), (*l_1515))), 0x15L)) , l_1521)) == l_1522))
        { 
            uint16_t l_1534 = 0xC284L;
            int32_t *l_1541 = &g_303[2];
            int32_t *l_1542 = &g_88[2][3][5];
            int32_t l_1543 = 0x418C06E3L;
            int32_t *l_1544[7] = {&g_88[0][3][1],&g_88[0][3][1],&g_88[0][3][1],&g_88[0][3][1],&g_88[0][3][1],&g_88[0][3][1],&g_88[0][3][1]};
            uint8_t l_1546 = 0x8FL;
            int i;
            for (g_85 = (-17); (g_85 <= 17); g_85++)
            { 
                uint32_t l_1536 = 18446744073709551609UL;
                for (g_370 = 2; (g_370 >= 0); g_370 -= 1)
                { 
                    uint64_t l_1527 = 9UL;
                    int32_t *l_1535[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1535[i] = (void*)0;
                }
            }
            l_1540[3][5][0] &= (safe_unary_minus_func_uint16_t_u(0x08F1L));
            --l_1546;
        }
        else
        { 
            uint32_t * const **l_1557 = (void*)0;
            int64_t *l_1560[6][5][5] = {{{&l_1520,&l_1520,&l_1520,&g_370,&l_1520},{&g_370,&l_1520,&g_370,&g_370,&g_370},{&g_370,&g_370,&l_1520,&g_370,&l_1520},{&g_370,(void*)0,&l_1520,&g_370,&l_1520},{&g_370,&g_370,&l_1520,&g_370,&g_370}},{{&l_1520,&l_1520,&l_1520,&l_1520,&g_370},{(void*)0,&l_1520,(void*)0,&g_370,&l_1520},{&g_370,&g_370,&g_370,&l_1520,&g_370},{&g_370,&g_370,&g_370,&g_370,&g_370},{&g_370,&l_1520,&g_370,&g_370,&l_1520}},{{&l_1520,&g_370,&g_370,&g_370,&l_1520},{&l_1520,&g_370,&g_370,&g_370,&g_370},{&l_1520,&l_1520,&g_370,&g_370,&l_1520},{&g_370,&g_370,&g_370,&g_370,&g_370},{&g_370,&g_370,(void*)0,&g_370,&l_1520}},{{&g_370,(void*)0,&l_1520,&l_1520,&l_1520},{&l_1520,&g_370,&l_1520,&g_370,&l_1520},{&l_1520,&l_1520,&l_1520,&l_1520,&g_370},{&l_1520,&l_1520,&l_1520,&g_370,&l_1520},{&g_370,&g_370,&g_370,&l_1520,&g_370}},{{&g_370,&g_370,(void*)0,(void*)0,&l_1520},{&l_1520,&g_370,&g_370,&l_1520,&g_370},{(void*)0,&g_370,&l_1520,&g_370,(void*)0},{&g_370,&l_1520,&g_370,&l_1520,&l_1520},{&l_1520,&g_370,&l_1520,&l_1520,(void*)0}},{{&l_1520,&l_1520,&l_1520,&l_1520,&l_1520},{(void*)0,&l_1520,(void*)0,(void*)0,(void*)0},{&l_1520,&g_370,&l_1520,&l_1520,&g_370},{&g_370,&l_1520,&l_1520,&l_1520,&l_1520},{&g_370,&g_370,&l_1520,&g_370,&l_1520}}};
            int32_t l_1561 = 0L;
            int32_t l_1611[4][2];
            struct S1 l_1627 = {9048};
            union U2 l_1678 = {0xACD5L};
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1611[i][j] = 0xACE55F54L;
            }
            if ((p_20 < ((*g_314) , ((safe_rshift_func_uint8_t_u_s(((((**g_598) = ((safe_mul_func_int16_t_s_s((0xDCE0L | (safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((0xE262C07E4096B34DLL ^ (g_71[0][0][3].f1 = ((l_1557 == (void*)0) , ((*g_1015) = (((((*g_1488) = (safe_rshift_func_uint8_t_u_s(250UL, g_905[1][0]))) && (*g_314)) || p_21) || (*g_559)))))), 0xD18E5351L)), l_1540[3][5][0]))), 0x52FCL)) <= g_998[0][4])) <= l_1561) && 0x3778926DL), p_20)) < l_1540[0][4][0]))))
            { 
                uint32_t l_1573 = 0x39434480L;
                int32_t **l_1582 = &g_274;
                uint32_t l_1586 = 0x19288151L;
                if (((safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((l_1568 != ((l_1569 != &g_559) , l_1568)), ((**g_598) | (*l_1515)))), (safe_mod_func_int8_t_s_s(g_370, 9L)))), 0x2019L)) || g_998[1][2]))
                { 
                    int32_t *l_1572[5] = {&l_1561,&l_1561,&l_1561,&l_1561,&l_1561};
                    int i;
                    (*g_273) = (void*)0;
                    ++l_1573;
                    l_1586 ^= ((safe_rshift_func_int16_t_s_s((l_1573 ^ (safe_mod_func_int16_t_s_s(((*g_559) &= (*g_314)), (safe_mod_func_int64_t_s_s(((((0x62L ^ (p_21 ^ ((((l_1582 == (void*)0) >= (+((*g_1271) = (((*g_1015) = (safe_rshift_func_uint16_t_u_u((*p_18), (*p_18)))) , (*p_18))))) || 3UL) >= p_20))) == 4294967295UL) , 0x36L) == p_19), p_20))))), l_1561)) , p_21);
                }
                else
                { 
                    uint32_t ***l_1588 = (void*)0;
                    uint32_t ****l_1587 = &l_1588;
                    l_1589 = ((*l_1587) = &g_598);
                    return (*g_559);
                }
                for (g_326 = 0; (g_326 <= 4); g_326 += 1)
                { 
                    uint16_t * const l_1590 = &g_676;
                    int32_t l_1609 = 0xF367E5B1L;
                    uint8_t *l_1610[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int32_t *l_1612 = &g_88[1][2][4];
                    struct S0 *l_1613 = &g_1614;
                    int64_t l_1620 = 0x7462D5FA30C38520LL;
                    int i, j;
                    (*g_273) = (func_23(l_1590) , &l_1540[3][2][0]);
                    if ((**g_273))
                        continue;
                    (*l_1612) ^= (safe_lshift_func_uint16_t_u_s(((*g_1271) = (safe_rshift_func_uint8_t_u_u((l_1611[1][0] ^= (safe_sub_func_uint64_t_u_u((0x05L >= ((safe_div_func_uint64_t_u_u(0x942410B8E94C6439LL, ((*g_164) = (**l_1582)))) != (((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((((((safe_lshift_func_uint16_t_u_u((*l_1515), 15)) > p_21) | 3UL) == ((safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u((l_1609 && p_21), p_21)), g_905[1][1])) <= l_1561)) ^ l_1561), p_20)) & p_19), p_20)) != p_21) == l_1561))), p_20))), 0))), p_20));
                    (*l_1613) = ((*l_1521) = (*l_1568));
                    l_1561 = (safe_add_func_int64_t_s_s(p_21, ((safe_sub_func_int8_t_s_s((**l_1582), (((!(((**l_1582) == (l_1620 & p_21)) <= (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(((((&g_374[3] != (l_1627 , l_1628)) > g_1287.f0) && 0xD5D60006L) == (*g_164)), (**l_1582))), 13)), (**l_1582))))) < p_21) , p_20))) < (**l_1582))));
                }
            }
            else
            { 
                int32_t *l_1629[7][2] = {{&l_1611[1][0],&l_1611[1][0]},{&g_88[1][2][4],&l_1611[1][0]},{&l_1611[1][0],&g_88[1][2][4]},{&l_1611[1][0],&l_1611[1][0]},{&g_88[1][2][4],&l_1611[1][0]},{&l_1611[1][0],&g_88[1][2][4]},{&l_1611[1][0],&l_1611[1][0]}};
                int i, j;
                (*g_273) = l_1629[3][0];
                for (g_123 = (-6); (g_123 > 1); ++g_123)
                { 
                    return p_21;
                }
                for (l_1495 = 7; (l_1495 < (-20)); l_1495 = safe_sub_func_int8_t_s_s(l_1495, 1))
                { 
                    int32_t ***l_1644 = &g_273;
                    int32_t l_1651 = 0L;
                    uint64_t *l_1653 = &l_1652;
                    int32_t l_1654[1];
                    int64_t *** const *l_1661[7];
                    union U2 l_1662 = {0x29F1L};
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1654[i] = 0L;
                    for (i = 0; i < 7; i++)
                        l_1661[i] = &g_893;
                    l_1654[0] ^= (safe_add_func_uint32_t_u_u((((*l_1516) = (((*l_1653) = (safe_mul_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((*g_1488), (safe_sub_func_int32_t_s_s(((((void*)0 == l_1642) == ((((*g_164) ^= (l_1643 != ((*l_1644) = (void*)0))) < (((-1L) <= ((++(**g_598)) == (safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((p_20 == 0xC4L) , 0xD8DFL), 8)), 5)))) == (*l_1515))) | 0xBF55L)) & l_1627.f0), p_19)))) || l_1651), l_1652))) > p_21)) ^ 250UL), (*g_274)));
                    (*l_1515) = (((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_880, g_10)), (((((((void*)0 == l_1661[5]) > p_20) & ((l_1662 , (0x43L != p_20)) , 0UL)) <= p_20) | 0x0DL) | (*g_314)))), (**l_1643))) | (*l_1515)) , 0xEE80FAEDL);
                    if (p_19)
                        break;
                }
            }
            (*l_1643) = (*l_1643);
            (*l_1515) &= 0xDFE10FD1L;
            if (((l_1663[4] , (safe_sub_func_uint64_t_u_u(((((void*)0 != l_1666) <= 0x0F829385B7E64355LL) < ((safe_add_func_uint16_t_u_u(((((0x0568C318F6CC09D9LL < g_1519) , (safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((l_1663[4] , 1L), 1UL)), (*g_314)))) ^ 0x09931CB9DB1E37F3LL) && 9UL), (*g_314))) & (*g_1015))), 0L))) && p_20))
            { 
                union U2 l_1677 = {0UL};
                (*l_1515) = ((safe_add_func_int64_t_s_s((((***l_1666) != (((l_1678 = l_1677) , l_1677) , (void*)0)) , (p_20 | p_20)), (((*g_824) = 1UL) >= (-1L)))) == l_1677.f0);
                (*l_1515) = l_1677.f0;
            }
            else
            { 
                return p_21;
            }
            (*l_1643) = &l_1545;
        }
        if (((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((*p_18), (1UL || ((void*)0 != l_1642)))), (safe_rshift_func_int16_t_s_s(((*l_1518) = (**l_1643)), (safe_rshift_func_int8_t_s_s(g_370, ((l_1687 = l_1687) != &l_1569))))))) && (*g_314)))
        { 
            uint16_t l_1688[7][1][3] = {{{0xAEFFL,0xAEFFL,0xAEFFL}},{{0x23CBL,0x23CBL,0x23CBL}},{{0xAEFFL,0xAEFFL,0xAEFFL}},{{0x23CBL,0x23CBL,0x23CBL}},{{0xAEFFL,0xAEFFL,0xAEFFL}},{{0x23CBL,0x23CBL,0x23CBL}},{{0xAEFFL,0xAEFFL,0xAEFFL}}};
            int i, j, k;
            (*g_274) |= l_1688[2][0][1];
            for (g_880 = 0; (g_880 <= 5); g_880 += 1)
            { 
                int i;
                (*l_1643) = &l_1545;
                g_303[g_880] &= (safe_div_func_uint64_t_u_u(1UL, p_19));
                return (*g_314);
            }
        }
        else
        { 
            int64_t *** const *l_1698[3][7][5] = {{{&g_893,&g_893,&g_893,&g_893,&g_893},{&g_893,&g_893,&g_893,&g_893,&g_893},{&g_893,&g_893,&g_893,&g_893,(void*)0},{&g_893,(void*)0,&g_893,&g_893,(void*)0},{(void*)0,&g_893,&g_893,(void*)0,&g_893},{&g_893,(void*)0,&g_893,(void*)0,&g_893},{&g_893,&g_893,&g_893,&g_893,&g_893}},{{&g_893,&g_893,&g_893,&g_893,&g_893},{(void*)0,&g_893,&g_893,&g_893,&g_893},{&g_893,&g_893,&g_893,&g_893,&g_893},{&g_893,&g_893,&g_893,&g_893,&g_893},{&g_893,&g_893,&g_893,&g_893,(void*)0},{&g_893,(void*)0,&g_893,&g_893,(void*)0},{(void*)0,&g_893,&g_893,(void*)0,&g_893}},{{&g_893,(void*)0,&g_893,(void*)0,&g_893},{&g_893,&g_893,&g_893,&g_893,&g_893},{&g_893,&g_893,&g_893,&g_893,&g_893},{(void*)0,&g_893,&g_893,&g_893,&g_893},{&g_893,&g_893,&g_893,(void*)0,&g_893},{&g_893,&g_893,(void*)0,&g_893,(void*)0},{&g_893,&g_893,&g_893,&g_893,&g_893}}};
            int8_t *l_1722[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1722[i] = &g_326;
            for (g_205 = 0; (g_205 <= 47); g_205 = safe_add_func_uint64_t_u_u(g_205, 9))
            { 
                struct S1 *l_1695 = &g_70[6];
                int16_t ***l_1740 = &l_1569;
                for (g_1489 = 0; (g_1489 > 17); ++g_1489)
                { 
                    (*g_208) = l_1695;
                }
                for (l_1545 = 0; (l_1545 > 11); l_1545 = safe_add_func_uint8_t_u_u(l_1545, 1))
                { 
                    int8_t l_1699[7][1][4] = {{{0L,(-8L),0x4BL,(-8L)}},{{0L,(-1L),0xB1L,0x4BL}},{{(-8L),(-1L),(-1L),(-8L)}},{{(-1L),(-8L),0L,0L}},{{(-1L),0L,(-1L),0xB1L}},{{(-8L),0L,0xB1L,0xB1L}},{{0L,0L,0x4BL,0L}}};
                    uint32_t ***l_1700 = (void*)0;
                    uint32_t ****l_1701 = &l_1589;
                    const struct S1 *l_1718 = (void*)0;
                    struct S1 **l_1719 = &g_302;
                    const int8_t *l_1724 = &g_1725;
                    const int8_t **l_1723 = &l_1724;
                    int32_t l_1736 = 0xD850949EL;
                    uint16_t ****l_1737 = &l_1628;
                    int i, j, k;
                    l_1699[4][0][1] = ((*l_1515) = ((((void*)0 != l_1698[2][6][3]) , 0xFB047ACF0A431C90LL) | g_411));
                    (*l_1515) = ((((*l_1701) = (l_1700 = &g_598)) == &g_598) == (safe_mul_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(p_19, (**l_1643))) ^ g_1285.f2), 0x0DL)));
                    (*l_1515) = (safe_mul_func_int8_t_s_s((l_1736 = (((safe_rshift_func_uint8_t_u_s((((safe_add_func_int8_t_s_s(((*l_1516) = (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((l_1718 != ((*l_1719) = &g_70[1])) >= (safe_div_func_uint64_t_u_u((l_1722[1] == ((*l_1723) = &g_326)), (safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(255UL, (safe_mul_func_uint8_t_u_u(p_20, (safe_rshift_func_int16_t_s_u(p_21, (*p_18))))))), (*p_18))), l_1699[4][0][1]))))), (*l_1515))), (*g_599))) , (-1L)), p_20))), 0xC9L)) | g_370) > g_356[1][0][0]), 0)) <= 0xE47EL) < (*g_1271))), 0x57L));
                    l_1738 = ((*l_1737) = &g_1270);
                }
                if (g_1739[0])
                    break;
                (*l_1740) = &g_559;
            }
        }
        (*l_1643) = &l_1495;
        (**l_1643) |= ((*l_1515) = (*l_1515));
    }
    else
    { 
        uint16_t l_1741[4][5][6] = {{{1UL,1UL,1UL,1UL,1UL,0x7393L},{65535UL,0x58EAL,0x4255L,1UL,1UL,0xC8AAL},{0xC8AAL,65535UL,0x58EAL,0x58EAL,65535UL,0xC8AAL},{1UL,0x1A36L,0x4255L,1UL,0xC8AAL,0x7393L},{65535UL,65535UL,1UL,0xC8AAL,1UL,65535UL}},{{65535UL,0x7393L,0xC8AAL,1UL,0x4255L,0x1A36L},{1UL,0xC8AAL,65535UL,0x58EAL,0x58EAL,65535UL},{0xC8AAL,0xC8AAL,1UL,1UL,0x4255L,0x58EAL},{65535UL,0x7393L,1UL,1UL,1UL,1UL},{1UL,65535UL,1UL,0x1A36L,0xC8AAL,0x58EAL}},{{0x57DAL,0x1A36L,1UL,0UL,65535UL,65535UL},{0UL,65535UL,65535UL,0UL,1UL,0x1A36L},{0x57DAL,0x58EAL,0xC8AAL,0x1A36L,1UL,65535UL},{1UL,1UL,1UL,1UL,1UL,0x7393L},{65535UL,0x58EAL,0x4255L,1UL,1UL,0xC8AAL}},{{0xC8AAL,65535UL,0x58EAL,0x58EAL,65535UL,0xC8AAL},{1UL,0x1A36L,0x4255L,1UL,0xC8AAL,0x7393L},{65535UL,65535UL,1UL,0xC8AAL,1UL,65535UL},{65535UL,0x7393L,0xC8AAL,1UL,0x4255L,0x1A36L},{1UL,0xC8AAL,65535UL,0x58EAL,0x58EAL,65535UL}}};
        union U2 l_1744 = {0x64D5L};
        int64_t **l_1747 = (void*)0;
        int64_t *** const l_1746[2][7][4] = {{{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747}},{{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747},{&l_1747,&l_1747,&l_1747,&l_1747}}};
        int32_t l_1760 = 0x13CC7C4EL;
        int32_t l_1761 = 0xAE4DA020L;
        uint32_t *l_1780 = (void*)0;
        int32_t l_1807 = 0x518357C5L;
        int32_t l_1826 = 0x147294DAL;
        int32_t l_1829[1];
        uint32_t l_1832 = 4294967290UL;
        const int64_t ***l_1841 = &l_1838;
        struct S0 *l_1890 = &g_1614;
        struct S0 **l_1889 = &l_1890;
        int64_t ****l_1920 = &g_1756;
        int64_t *****l_1919[7] = {&l_1920,&l_1920,&l_1920,&l_1920,&l_1920,&l_1920,&l_1920};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1829[i] = (-9L);
lbl_1934:
        if (l_1741[2][4][1])
        { 
            uint32_t l_1742 = 0x99710128L;
            struct S0 l_1748 = {1};
            int32_t l_1785 = 0xA2B53C49L;
            int32_t l_1786 = 0xB32F9704L;
            int32_t l_1787 = (-10L);
            int32_t l_1789[7][1];
            uint32_t l_1804[3][7] = {{0x0CEB5B1CL,0x0CEB5B1CL,4294967287UL,0x0CEB5B1CL,0x0CEB5B1CL,4294967287UL,0x0CEB5B1CL},{0x0CEB5B1CL,0x7EE17E6CL,0x7EE17E6CL,0x0CEB5B1CL,0x7EE17E6CL,0x7EE17E6CL,0x0CEB5B1CL},{0x7EE17E6CL,0x0CEB5B1CL,0x7EE17E6CL,0x7EE17E6CL,0x0CEB5B1CL,0x7EE17E6CL,0x7EE17E6CL}};
            uint64_t *l_1809 = &g_185;
            int32_t *l_1817 = &l_1545;
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1789[i][j] = (-1L);
            }
            if (l_1742)
            { 
                union U2 l_1743 = {0x3489L};
                uint64_t *l_1751[4][5] = {{&g_185,&g_185,&g_502[0],&g_185,&g_185},{&l_1652,&g_502[0],&l_1652,&l_1652,&g_502[0]},{&g_185,&l_1652,&l_1652,&g_185,&l_1652},{&g_502[0],&g_502[0],&l_1652,&g_502[0],&g_502[0]}};
                int64_t ****l_1752 = &g_893;
                int64_t ****l_1753 = &g_893;
                int64_t ****l_1754 = &g_893;
                int64_t ****l_1755[7][2][2] = {{{&g_893,&g_893},{&g_893,&g_893}},{{&g_893,&g_893},{&g_893,&g_893}},{{&g_893,&g_893},{&g_893,&g_893}},{{&g_893,&g_893},{&g_893,&g_893}},{{&g_893,&g_893},{&g_893,&g_893}},{{&g_893,&g_893},{&g_893,&g_893}},{{&g_893,&g_893},{&g_893,&g_893}}};
                uint64_t l_1762 = 0xECDF187D3C7145CELL;
                int32_t l_1781 = 1L;
                int32_t l_1784 = 0xEDDFBD9CL;
                int32_t l_1790 = 0x3F075D1DL;
                int32_t l_1791 = 0xC706B39FL;
                int32_t l_1794[7];
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_1794[i] = (-1L);
                (*l_1515) = ((l_1744 = l_1743) , ((safe_unary_minus_func_int64_t_s(l_1743.f0)) > (l_1746[1][6][1] != (g_1756 = ((((g_502[0] = ((-3L) >= (((l_1748 , (safe_rshift_func_uint16_t_u_u((0x76L > l_1743.f2), (**g_1270)))) | 5L) , l_1744.f2))) > 3UL) & p_20) , (void*)0)))));
                if (p_19)
                { 
                    int32_t *l_1758 = &g_303[3];
                    int32_t *l_1759[3];
                    uint8_t *l_1770 = &g_880;
                    uint8_t l_1795 = 0xF6L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1759[i] = &g_155;
                    l_1762++;
                    if (p_19)
                        goto lbl_1772;
                    (*l_1758) &= ((**g_1757) <= (((-10L) & ((~(safe_mul_func_uint8_t_u_u(((*l_1770) &= p_20), g_998[3][2]))) >= l_1748.f0)) != (g_502[0] = ((0xB2L == ((~0xE329A010L) | 0x81BCL)) , 0UL))));
lbl_1772:
                    l_1760 |= 2L;
                    (*l_1515) ^= ((l_1781 &= (safe_mod_func_int64_t_s_s(((l_1743 , &p_19) == (void*)0), (safe_mul_func_int16_t_s_s((!((*g_824) = p_19)), ((p_19 != ((safe_add_func_int16_t_s_s((((((*g_314) = (((*g_598) = (**l_1589)) != l_1780)) > (*g_559)) ^ 9UL) != g_554[6][2]), (*p_18))) != 0x80L)) && 4294967291UL)))))) >= l_1760);
                    ++l_1795;
                }
                else
                { 
                    uint8_t *l_1805 = &g_71[0][0][3].f2;
                    uint8_t *l_1806[1];
                    int32_t l_1810 = 5L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1806[i] = &g_880;
                    l_1787 |= (-7L);
                    (*l_1515) = (!(((safe_mul_func_uint8_t_u_u((l_1807 &= (((safe_unary_minus_func_int8_t_s((((safe_add_func_int16_t_s_s((*g_559), l_1804[1][2])) , g_409) , g_1783))) != (*p_18)) == l_1785)), (((**l_1569) |= 0xDFC5L) && l_1808))) != l_1760) == 0x63DF079B73AE45F4LL));
                    l_1810 = (l_1809 == &g_185);
                }
                (*g_273) = &l_1545;
                return p_20;
            }
            else
            { 
                uint8_t l_1816 = 0x7CL;
                int16_t l_1820 = 0x3FD3L;
                int32_t l_1824 = 0x87687070L;
                int32_t l_1825 = (-1L);
                int32_t l_1828 = 0L;
                int32_t l_1831 = (-7L);
                if ((g_1614 , ((safe_mul_func_int16_t_s_s(((void*)0 == &g_273), (*p_18))) , ((!((safe_sub_func_uint8_t_u_u(248UL, l_1816)) & (p_19 == l_1816))) > (-1L)))))
                { 
                    int16_t l_1818 = 0x478CL;
                    int32_t *l_1819[2][6] = {{&l_1788,&l_1788,&l_1788,&l_1788,&l_1788,&l_1788},{&l_1788,&l_1788,&l_1788,&l_1788,&l_1788,&l_1788}};
                    int i, j;
                    (*g_273) = l_1817;
                    g_1821[1]++;
                    --l_1832;
                }
                else
                { 
                    (*g_273) = &l_1831;
                    return (*g_314);
                }
                return l_1828;
            }
        }
        else
        { 
            const int64_t ****l_1840[2];
            const int64_t ***l_1842 = &l_1838;
            int32_t l_1857 = 7L;
            int i;
            for (i = 0; i < 2; i++)
                l_1840[i] = &l_1837;
            (*l_1515) |= (((((safe_add_func_uint16_t_u_u(((&l_1747 == (g_1285.f0 , (l_1842 = (l_1841 = l_1837)))) < (((safe_sub_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((((p_19 == (safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_uint16_t_u(0x48A3L)) , (safe_unary_minus_func_uint32_t_u((safe_mul_func_uint8_t_u_u(((l_1744 , (safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((***g_1756) <= p_19), (*g_599))), 7))) <= g_303[1]), g_165))))), l_1826))) && 0L) | p_19), g_502[0])) | (*p_18)), 4L)) ^ (*g_559)) & p_21)), l_1857)) || (*p_18)) > 4294967295UL) != (**g_1757)) || (-9L));
        }
        for (g_155 = 27; (g_155 > (-22)); g_155 = safe_sub_func_int16_t_s_s(g_155, 6))
        { 
            uint32_t l_1875 = 0xD35CEDA9L;
            int32_t l_1925 = 0xAC400954L;
            int32_t l_1926 = 0L;
            int32_t l_1927 = (-8L);
            int32_t l_1929 = 0x9A03E4ECL;
            int32_t l_1930 = 0xFA31C47EL;
            uint64_t l_1931 = 18446744073709551609UL;
            uint8_t l_1936[2][6][7] = {{{0xD6L,1UL,0xA8L,1UL,0UL,9UL,3UL},{8UL,0UL,0xE2L,1UL,0x44L,5UL,0x64L},{3UL,0UL,0xA8L,9UL,0x95L,1UL,0x64L},{8UL,1UL,0x44L,255UL,0x95L,5UL,3UL},{0xD6L,9UL,0x44L,9UL,0x44L,9UL,0xD6L},{0xD6L,1UL,0xA8L,1UL,0UL,9UL,3UL}},{{8UL,0UL,0xE2L,1UL,0x44L,5UL,0x64L},{3UL,0UL,0xA8L,9UL,0x95L,1UL,0x64L},{8UL,1UL,0x44L,255UL,0x95L,5UL,3UL},{0xD6L,9UL,0x44L,9UL,0x44L,9UL,0xD6L},{0xD6L,1UL,0xA8L,1UL,0UL,3UL,255UL},{9UL,0xD6L,251UL,255UL,9UL,0x16L,0xB2L}}};
            uint32_t l_1939 = 1UL;
            int i, j, k;
            for (g_1108 = 0; (g_1108 <= 0); g_1108 += 1)
            { 
                uint16_t l_1863[6][5][1] = {{{65534UL},{0xE882L},{2UL},{0xE882L},{65534UL}},{{0x7952L},{0x7952L},{65534UL},{0xE882L},{2UL}},{{0xE882L},{65534UL},{0x7952L},{0x7952L},{65534UL}},{{0xE882L},{2UL},{0xE882L},{65534UL},{0x7952L}},{{0x7952L},{65534UL},{0xE882L},{2UL},{0xE882L}},{{65534UL},{0x7952L},{0x7952L},{65534UL},{0xE882L}}};
                int32_t l_1874[4] = {(-1L),(-1L),(-1L),(-1L)};
                int i, j, k;
                for (l_1807 = 0; (l_1807 <= 0); l_1807 += 1)
                { 
                    int32_t *l_1860 = &l_1545;
                    int32_t *l_1866 = &g_1092;
                    int32_t *l_1867 = &l_1792;
                    int32_t l_1868 = (-6L);
                    int32_t *l_1869 = &g_88[1][2][4];
                    int32_t *l_1870 = &l_1761;
                    int32_t *l_1871 = &l_1793;
                    int32_t *l_1872 = &l_1760;
                    int32_t *l_1873[2][6][1] = {{{&l_1868},{&g_3},{&l_1868},{(void*)0},{(void*)0},{&l_1868}},{{&g_3},{&l_1868},{(void*)0},{(void*)0},{&l_1868},{&g_3}}};
                    int i, j, k;
                    l_1860 = (void*)0;
                    (*g_273) = (((*g_1488) &= ((((**g_598) = (g_502[g_1108] , (*g_599))) & p_20) || ((p_20 = ((safe_mul_func_int16_t_s_s(((l_1863[1][0][0] && (safe_rshift_func_uint8_t_u_s((p_19 > (((((***l_1589) = (l_1863[0][1][0] , (*g_599))) || (**g_598)) | l_1863[1][2][0]) <= 0x5DF7B984L)), 2))) || p_19), (*p_18))) & 18446744073709551615UL)) >= 4294967287UL))) , &l_1793);
                    if (p_19)
                        continue;
                    l_1875--;
                }
                for (g_326 = 6; (g_326 >= 1); g_326 -= 1)
                { 
                    uint8_t *l_1878 = &l_1663[4].f2;
                    int32_t l_1881 = 0xE9D31B41L;
                    struct S0 ***l_1891[1][5][5] = {{{(void*)0,&l_1889,(void*)0,&l_1889,&l_1889},{&l_1889,(void*)0,&l_1889,(void*)0,&l_1889},{(void*)0,(void*)0,&l_1889,&l_1889,&l_1889},{&l_1889,&l_1889,&l_1889,&l_1889,&l_1889},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1889}}};
                    int32_t l_1900 = 1L;
                    uint8_t *l_1901 = &l_1744.f2;
                    int32_t *l_1922 = &l_1793;
                    int32_t *l_1923 = &l_1495;
                    int32_t *l_1924[7][3][6] = {{{&g_155,&l_1829[0],&l_1826,&g_4,&l_1900,(void*)0},{&l_1826,&l_1792,&l_1830,&l_1829[0],&l_1545,(void*)0},{&l_1761,&g_155,&l_1826,&l_1826,&g_155,&l_1761}},{{&l_1545,&l_1900,&l_1900,(void*)0,&g_155,&g_155},{&l_1900,&l_1830,&g_155,(void*)0,&g_85,&l_1829[0]},{&l_1900,&g_4,(void*)0,(void*)0,(void*)0,&g_4}},{{&l_1545,&g_155,&l_1829[0],&l_1826,&g_4,&l_1900},{&l_1761,&l_1792,(void*)0,&l_1829[0],(void*)0,(void*)0},{&l_1826,&l_1792,&l_1792,&g_4,&g_4,&l_1792}},{{&g_155,&g_155,&l_1792,(void*)0,(void*)0,&l_1900},{&l_1830,&g_4,&l_1829[0],&l_1761,&g_85,&l_1792},{(void*)0,&l_1830,&l_1829[0],&l_1900,&g_155,&l_1900}},{{&l_1792,&l_1900,&l_1792,&l_1900,&g_155,&l_1792},{&l_1900,&g_155,&l_1792,&g_85,&l_1545,(void*)0},{(void*)0,&l_1792,(void*)0,&g_85,&l_1900,&l_1900}},{{&l_1900,&l_1829[0],&l_1829[0],&l_1900,&l_1830,&g_4},{&l_1792,(void*)0,(void*)0,&l_1900,(void*)0,&l_1829[0]},{(void*)0,&g_85,&g_155,&l_1761,(void*)0,&g_155}},{{&l_1830,(void*)0,&l_1900,&l_1829[0],(void*)0,(void*)0},{(void*)0,&g_155,&l_1900,(void*)0,&l_1792,&l_1495},{&l_1900,&l_1761,(void*)0,&g_155,&g_4,&l_1495}}};
                    int i, j, k;
                    (*g_273) = (((*l_1901) &= (((*l_1878)--) && (l_1881 , ((*l_1878) ^= ((0x34E1C470L | (((safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((!((safe_lshift_func_uint16_t_u_s(((*g_1488) &= (*p_18)), ((*g_314) = (((((g_1892[0][0] = (p_21 , l_1889)) == ((safe_rshift_func_int16_t_s_u(l_1875, (safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((*g_599) || 3UL), (*p_18))), (*g_599))))) , (void*)0)) & l_1881) || l_1741[2][4][1]) | g_356[2][2][0])))) , p_19)) && p_20), 65533UL)), p_21)) & l_1900) , (*l_1515))) >= l_1900))))) , (*g_273));
                    (*l_1515) &= ((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((*g_824) = 7UL), 5)), (+l_1874[3]))) , 0xCD9F0DD24B1D8C43LL) >= ((safe_mul_func_uint8_t_u_u(((0UL < (((g_1918 = (((safe_mod_func_uint8_t_u_u(l_1832, ((safe_unary_minus_func_uint32_t_u(((safe_div_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0x3EL, (((((*g_559) |= (-5L)) || 0xE0E7L) < (*g_599)) == (*g_314)))), 0x5516L)) >= g_108) , g_411), (-4L))) , 0x72A59FC6L))) , 7L))) > 0xED8C7A7CL) , g_1918)) != l_1919[3]) < p_21)) , l_1874[2]), l_1741[2][4][1])) && p_21)) > p_19);
                    (*l_1890) = g_1921;
                    (*l_1890) = (**l_1889);
                    ++l_1931;
                }
                (*l_1515) &= p_20;
                if (g_1519)
                    goto lbl_1934;
                for (p_21 = 0; (p_21 <= 6); p_21 += 1)
                { 
                    int32_t *l_1935[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1935[i] = &l_1793;
                    ++l_1936[0][3][1];
                    (*g_273) = &l_1829[g_1108];
                    l_1939++;
                }
            }
        }
        (*g_273) = &l_1760;
        return p_21;
    }
    (*l_1942) = (void*)0;
    return g_1943;
}



static struct S1  func_23(uint16_t * const  p_24)
{ 
    int32_t *l_1441 = &g_88[0][0][4];
    struct S1 l_1443 = {-3795};
    int32_t *l_1446 = &g_1108;
    struct S1 l_1451 = {-9803};
    uint8_t *l_1458 = &g_71[0][0][3].f2;
    uint8_t *l_1459 = &g_71[0][0][3].f2;
    uint8_t *l_1460 = &g_71[0][0][3].f2;
    uint8_t *l_1461 = &g_880;
    struct S1 l_1486 = {3168};
lbl_1462:
    (*g_273) = l_1441;
    (**g_273) = (~(((*g_824) = ((((*g_302) = l_1443) , &l_1443) != ((*l_1441) , (void*)0))) ^ (((*l_1446) = (safe_sub_func_uint16_t_u_u((*l_1441), 1UL))) , (((1UL > (*l_1441)) <= 0xA3FF3B1DL) | g_10))));
    l_1443.f0 ^= (*g_274);
    if (((*l_1441) >= (safe_mul_func_uint16_t_u_u(((*p_24) = (safe_mul_func_uint16_t_u_u((l_1451 , 0xA8EAL), (safe_rshift_func_uint16_t_u_s(((0x380BL <= 0L) , (((*l_1461) ^= (((safe_mul_func_uint16_t_u_u(((*g_598) == (void*)0), 0xB104L)) && (**g_598)) <= 1UL)) | (*l_1441))), (*l_1441)))))), (*l_1441)))))
    { 
        int16_t l_1473 = 1L;
        struct S1 **l_1480 = &g_302;
        int32_t *l_1481 = &g_85;
        uint64_t l_1482 = 0x162EC7C564447694LL;
        uint64_t *l_1483 = &g_185;
        if (l_1443.f0)
            goto lbl_1462;
        (*g_273) = (((*l_1483) = (g_502[0] |= (safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((((((*l_1441) < ((((*l_1481) = ((((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((1UL > l_1473), 0x361AL)), ((safe_rshift_func_int8_t_s_s(((((((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*g_1271) , (l_1480 != ((*l_1441) , l_1480))), 5)), (*l_1441))) < 0xD1F9L) ^ l_1473) , 0xA0C8498AD4D32BD4LL) | l_1473) , 0x47L), 7)) ^ (**g_598)))), (*l_1441))) & (*l_1441)) || l_1473) >= (**g_598))) != (*g_599)) != g_676)) < (*g_1015)) & 0xFE3D35FDL) <= (*p_24)) || (*l_1441)), l_1482)) != (*g_314)), (*l_1441))))) , (void*)0);
    }
    else
    { 
        const struct S1 l_1484 = {3505};
        struct S1 l_1485 = {-6518};
        l_1485 = (((*l_1441) |= 0xA1F1BB80L) , l_1484);
    }
    return l_1486;
}



static uint16_t * const  func_25(union U2  p_26, uint16_t * p_27, uint16_t * p_28, const int32_t  p_29)
{ 
    uint16_t *l_775 = &g_71[0][0][3].f0;
    uint16_t **l_776 = &l_775;
    int32_t l_792[4][4][4] = {{{0xAFE5D700L,0x46AC218FL,0L,0x6ECA35D9L},{(-1L),0x19739E47L,0L,0x19739E47L},{0x19739E47L,0L,0xAFE5D700L,0x19739E47L},{0xAFE5D700L,0x19739E47L,0x6ECA35D9L,0x6ECA35D9L}},{{0x46AC218FL,0x46AC218FL,0L,(-1L)},{0x46AC218FL,0L,0x6ECA35D9L,0x46AC218FL},{0xAFE5D700L,(-1L),0xAFE5D700L,0x6ECA35D9L},{0x19739E47L,(-1L),0L,0x46AC218FL}},{{(-1L),0L,0L,(-1L)},{0xAFE5D700L,0x46AC218FL,0L,0x6ECA35D9L},{(-1L),0x19739E47L,0L,0x19739E47L},{0x19739E47L,0L,0xAFE5D700L,0x19739E47L}},{{0xAFE5D700L,0x19739E47L,0x6ECA35D9L,0x6ECA35D9L},{0x46AC218FL,0x46AC218FL,0L,(-1L)},{0x46AC218FL,0L,0x6ECA35D9L,0x46AC218FL},{0xAFE5D700L,(-1L),0xAFE5D700L,0x6ECA35D9L}}};
    int32_t l_852[6] = {0xD24BB243L,0xD24BB243L,0L,0xD24BB243L,0xD24BB243L,0L};
    int32_t ***l_885 = &g_273;
    int64_t **l_895 = &g_164;
    int64_t ***l_894 = &l_895;
    int16_t l_924 = 0x821AL;
    uint64_t l_986 = 0x4798E844197048E8LL;
    struct S1 l_1014 = {-844};
    int64_t l_1063[2][2] = {{0x8032FE8FC5242333LL,0x8032FE8FC5242333LL},{0x8032FE8FC5242333LL,0x8032FE8FC5242333LL}};
    struct S0 l_1080[7] = {{2},{2},{2},{2},{2},{2},{2}};
    const uint32_t l_1138 = 2UL;
    int64_t ****l_1185 = &l_894;
    int64_t **** const *l_1184 = &l_1185;
    int8_t *l_1219[1];
    uint64_t *l_1222 = &g_502[0];
    int32_t *l_1227 = &l_792[0][2][2];
    int32_t *l_1228 = &g_1092;
    uint16_t ***l_1273[2][5][2] = {{{&l_776,&l_776},{&g_1270,&l_776},{&l_776,&g_1270},{&l_776,&l_776},{&l_776,&g_1270}},{{&l_776,&l_776},{&g_1270,&l_776},{&l_776,&g_1270},{&l_776,&l_776},{&l_776,&g_1270}}};
    const union U2 *l_1281 = (void*)0;
    const union U2 *l_1286 = &g_1287;
    int8_t *l_1331 = &g_123;
    uint64_t l_1437 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1219[i] = &g_326;
    if ((((*l_776) = l_775) == (void*)0))
    { 
        uint16_t l_785 = 0UL;
        int32_t l_795 = 0x2DEA83FDL;
        int32_t l_796[2][5][5] = {{{0xCDA9C2A7L,0L,0xCDA9C2A7L,1L,0xFA439CBEL},{(-7L),1L,0x7CB0BD29L,1L,(-7L)},{0xCDA9C2A7L,0x35B5578CL,0L,0xB9614B8EL,0L},{(-3L),(-3L),0x7CB0BD29L,(-7L),0L},{0x35B5578CL,0xCDA9C2A7L,0xCDA9C2A7L,0x35B5578CL,0L}},{{1L,(-7L),0L,0L,(-7L)},{0L,0xCDA9C2A7L,1L,0xFA439CBEL,0xFA439CBEL},{0x38629384L,(-3L),0x38629384L,0L,0x7CB0BD29L},{0xB9614B8EL,0x35B5578CL,0xFA439CBEL,0x35B5578CL,0xB9614B8EL},{0x38629384L,1L,(-3L),(-7L),(-3L)}}};
        int16_t l_851[7][4][7] = {{{0xD1D1L,0x78EDL,0x5A9CL,1L,0x80EAL,6L,(-9L)},{0xF1F3L,(-4L),0xC561L,0xB5DFL,0xC93FL,0L,0xE64BL},{0xD1D1L,1L,(-3L),6L,0x83BEL,6L,(-3L)},{0xC6D2L,0xC6D2L,7L,0x3A58L,0x6C2EL,0L,0xF1F3L}},{{0x80EAL,0x4EE1L,0x78EDL,(-1L),(-5L),1L,0xD1D1L},{(-3L),0xE44FL,0x6FF8L,0L,0x6C2EL,0xDF96L,0xC6D2L},{0x4EE1L,0xB87CL,0x78EDL,0xC742L,0L,(-1L),0x0259L},{(-3L),0x02BDL,0xDD8EL,0xDF96L,0xAE82L,0xDF96L,0xDD8EL}},{{0x80EAL,0x80EAL,0xD1D1L,0xC742L,1L,1L,1L},{0xDDBEL,0x02BDL,(-4L),0L,6L,0L,0xDD8EL},{8L,0xB87CL,0L,(-1L),1L,1L,0x0259L},{0x02BDL,0xE44FL,(-4L),0x3A58L,0xAE82L,0L,0xC6D2L}},{{8L,0x4EE1L,0xD1D1L,1L,0L,1L,0xD1D1L},{0xDDBEL,0xDDBEL,0xDD8EL,0x3A58L,0x6C2EL,0L,0xF1F3L},{0x80EAL,0x4EE1L,0x78EDL,(-1L),(-5L),1L,0xD1D1L},{(-3L),0xE44FL,0x6FF8L,0L,0x6C2EL,0xDF96L,0xC6D2L}},{{0x4EE1L,0xB87CL,0x78EDL,0xC742L,0L,(-1L),0x0259L},{(-3L),0x02BDL,0xDD8EL,0xDF96L,0xAE82L,0xDF96L,0xDD8EL},{0x80EAL,0x80EAL,0xD1D1L,0xC742L,1L,1L,1L},{0xDDBEL,0x02BDL,(-4L),0L,6L,0L,0xDD8EL}},{{8L,0xB87CL,0L,(-1L),1L,1L,0x0259L},{0x02BDL,0xE44FL,(-4L),0x3A58L,0xAE82L,0L,0xC6D2L},{8L,0x4EE1L,0xD1D1L,1L,0L,1L,0xD1D1L},{0xDDBEL,0xDDBEL,0xDD8EL,0x3A58L,0x6C2EL,0L,0xF1F3L}},{{0x80EAL,0x4EE1L,0x78EDL,(-1L),(-5L),1L,0xD1D1L},{(-3L),0xE44FL,0x6FF8L,0L,0x6C2EL,0xDF96L,0xC6D2L},{0x4EE1L,0xB87CL,0x78EDL,0xC742L,0L,(-1L),0x0259L},{(-3L),0x02BDL,0xDD8EL,0xDF96L,0xAE82L,0xDF96L,0xDD8EL}}};
        int64_t **l_892 = &g_164;
        int64_t ***l_891 = &l_892;
        uint16_t l_927 = 65528UL;
        uint32_t l_954 = 0xEDA65F3BL;
        uint32_t l_956[2];
        int32_t *l_958[4];
        union U2 *l_960 = &g_71[2][5][3];
        int8_t l_961 = 1L;
        int32_t l_1038 = 0L;
        uint16_t **l_1079 = (void*)0;
        struct S1 l_1144 = {993};
        struct S0 *l_1159[4] = {&l_1080[1],&l_1080[1],&l_1080[1],&l_1080[1]};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_956[i] = 0xB6C2A828L;
        for (i = 0; i < 4; i++)
            l_958[i] = &g_155;
lbl_959:
        for (g_326 = (-5); (g_326 > 12); g_326 = safe_add_func_int8_t_s_s(g_326, 9))
        { 
            int32_t *l_784 = &g_3;
            int32_t *l_786 = (void*)0;
            int32_t *l_787 = &g_85;
            int32_t l_798 = 0x0B7665C7L;
            int32_t l_799 = 0xAEC64D49L;
            int32_t l_803 = 1L;
            int32_t l_804 = (-5L);
            int32_t l_806 = 0x717743CFL;
            int32_t l_807 = 0x3E90A78FL;
            uint32_t ** const l_827 = &g_599;
            int64_t **l_890 = &g_164;
            int64_t ***l_889[1];
            uint8_t l_910[1][4] = {{255UL,255UL,255UL,255UL}};
            int8_t l_923 = 0xE7L;
            int32_t l_926[2];
            struct S0 l_938 = {0};
            uint64_t l_955[4];
            int i, j;
            for (i = 0; i < 1; i++)
                l_889[i] = &l_890;
            for (i = 0; i < 2; i++)
                l_926[i] = 0x432F9C40L;
            for (i = 0; i < 4; i++)
                l_955[i] = 0xD70275B445CBB36DLL;
            (*l_787) |= (safe_unary_minus_func_uint8_t_u((((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((((((*p_27) = (*p_28)) <= ((void*)0 != l_784)) == l_785) & ((void*)0 != p_27)), 6L)) == (*l_784)), l_785)) == 0xAC6CL) || 0x75A06DF4DAD3BC3ELL)));
            for (l_785 = 0; (l_785 >= 22); l_785 = safe_add_func_int16_t_s_s(l_785, 8))
            { 
                int8_t l_797[2][3][5] = {{{0L,0L,1L,0x81L,(-1L)},{5L,0x66L,1L,(-2L),0L},{0xEBL,1L,5L,1L,(-1L)}},{{0x66L,0x2AL,0x2AL,(-1L),1L},{0x66L,1L,(-2L),0L,0L},{(-1L),0x81L,(-1L),0x2AL,1L}}};
                int32_t l_800 = 0x8CC20E99L;
                int32_t l_801 = 0x9A0DE76BL;
                int32_t l_802 = 0xE25B59E6L;
                int32_t l_805 = 1L;
                uint16_t l_808 = 0xCFE6L;
                const int64_t *l_823 = &g_165;
                const int64_t **l_822[5][4] = {{(void*)0,(void*)0,&l_823,(void*)0},{(void*)0,&l_823,&l_823,(void*)0},{&l_823,(void*)0,&l_823,&l_823},{(void*)0,(void*)0,&l_823,(void*)0},{(void*)0,&l_823,&l_823,(void*)0}};
                const int64_t ***l_821 = &l_822[1][0];
                uint8_t *l_825 = &g_71[0][0][3].f2;
                int i, j, k;
                for (g_205 = 0; (g_205 > 14); ++g_205)
                { 
                    int32_t *l_793 = &g_303[2];
                    int32_t *l_794[1][6] = {{&l_792[3][0][2],&l_792[3][0][2],&l_792[3][0][2],&l_792[3][0][2],&l_792[3][0][2],&l_792[3][0][2]}};
                    int8_t *l_826 = &g_123;
                    uint32_t ***l_828 = &g_598;
                    struct S0 *l_829 = &g_475;
                    int i, j;
                    l_808--;
                    l_796[1][1][4] = (g_4 == (g_108 ^ g_88[1][0][0]));
                    (*l_793) ^= (safe_lshift_func_uint8_t_u_s((((safe_sub_func_int64_t_s_s((*l_787), (((safe_lshift_func_uint16_t_u_u(((((*l_826) = ((safe_mul_func_int16_t_s_s((l_792[1][3][0] = (*g_314)), ((*g_559) = (safe_div_func_int16_t_s_s(((((void*)0 == l_821) , (g_824 != (g_409 , l_825))) <= p_26.f0), 0x5BD1L))))) > g_409)) | 1UL) >= (*l_787)), l_785)) <= 0xF2017C1AL) <= (*g_164)))) ^ l_796[1][1][4]) && 0x05D6L), l_796[1][1][4]));
                    (*l_828) = l_827;
                    (*l_829) = g_475;
                }
            }
            g_303[2] |= (~(((((!l_792[2][0][0]) & (safe_mul_func_uint16_t_u_u((((*g_824) &= (((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((*p_27), 10)), 2)), (((*g_314) = p_29) | ((safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_uint8_t_u_u(0xF6L, l_792[2][3][2])) ^ ((0xC508L <= (((*g_559) > 0x24AFL) < l_851[3][0][0])) , l_852[5])) < (*p_28)) > p_29), l_852[4])), (*l_787))))), (*l_784))) > l_852[5])))) , p_26.f2) | 0xD846639501AE3090LL)) >= g_554[3][1]), (*l_784)))) , 0xDF20E735L) == 1UL) , (*g_824)));
            for (g_370 = 6; (g_370 >= 0); g_370 -= 1)
            { 
                uint8_t *l_879 = &g_880;
                uint8_t l_886 = 0x18L;
                int64_t ***l_887 = (void*)0;
                int64_t ****l_888[3][6][6] = {{{&l_887,(void*)0,&l_887,&l_887,&l_887,&l_887},{&l_887,(void*)0,&l_887,&l_887,&l_887,&l_887},{&l_887,&l_887,&l_887,&l_887,(void*)0,(void*)0},{&l_887,&l_887,&l_887,&l_887,&l_887,&l_887},{&l_887,&l_887,&l_887,(void*)0,&l_887,(void*)0},{&l_887,(void*)0,&l_887,&l_887,&l_887,&l_887}},{{&l_887,&l_887,&l_887,&l_887,&l_887,&l_887},{&l_887,&l_887,&l_887,&l_887,(void*)0,&l_887},{(void*)0,&l_887,&l_887,(void*)0,&l_887,&l_887},{&l_887,&l_887,&l_887,&l_887,(void*)0,(void*)0},{&l_887,&l_887,&l_887,(void*)0,&l_887,&l_887},{&l_887,&l_887,&l_887,&l_887,&l_887,&l_887}},{{(void*)0,(void*)0,&l_887,(void*)0,&l_887,&l_887},{&l_887,&l_887,(void*)0,&l_887,&l_887,&l_887},{&l_887,&l_887,&l_887,(void*)0,(void*)0,&l_887},{(void*)0,&l_887,&l_887,&l_887,&l_887,&l_887},{&l_887,(void*)0,&l_887,(void*)0,&l_887,&l_887},{&l_887,(void*)0,&l_887,&l_887,&l_887,(void*)0}}};
                int32_t *l_914 = (void*)0;
                int32_t l_922 = 0x9CA2A6D4L;
                int32_t l_925[2][7][2] = {{{1L,0L},{(-6L),0x23EF9BD5L},{(-6L),0L},{1L,0L},{0L,(-1L)},{0L,0x33A3A491L},{0xC3EF8C26L,0xFA695E4FL}},{{0xFA695E4FL,1L},{0L,1L},{0xFA695E4FL,0xFA695E4FL},{0xC3EF8C26L,0x33A3A491L},{0L,(-1L)},{0L,0L},{1L,0L}}};
                int i, j, k;
                g_70[g_370] = g_70[g_370];
                (*l_787) &= ((l_796[0][3][0] , (((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(8UL, p_26.f0)), (*g_559))) ^ ((~((g_676 |= (safe_lshift_func_int8_t_s_s(p_29, 6))) ^ 65531UL)) && (safe_mod_func_uint32_t_u_u((*g_599), 0xB8AABBF1L)))) || p_29) != (*p_27)) ^ 0xBAD9L)) == 0xB60C2767L);
                (*l_787) |= ((~((p_26.f0 & ((safe_div_func_uint16_t_u_u((((**g_598) &= ((*g_164) >= (((*g_824)++) > (((g_70[g_370].f0 , (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((--(*l_879)), g_303[5])), p_26.f0)), (safe_sub_func_uint8_t_u_u((l_885 == (void*)0), l_886)))), (-10L))) <= p_26.f2), 10)), p_26.f0))) >= g_4) & g_356[2][2][0])))) || p_29), p_26.f0)) & g_326)) > (*g_164))) && (*g_824));
                (*l_787) &= ((l_889[0] = l_887) != (l_894 = (g_893 = l_891)));
                for (g_85 = 0; (g_85 <= 0); g_85 += 1)
                { 
                    uint32_t *l_903 = (void*)0;
                    uint32_t *l_904[5][1][1];
                    int8_t *l_912[5] = {&g_123,&g_123,&g_123,&g_123,&g_123};
                    int32_t *l_913 = &l_798;
                    int32_t *l_915 = &l_795;
                    int32_t *l_916 = &l_806;
                    int32_t *l_917 = &l_792[0][0][0];
                    int32_t *l_918 = &g_88[1][2][4];
                    int32_t *l_919 = (void*)0;
                    int32_t *l_920 = &l_807;
                    int32_t *l_921[7][7][5] = {{{&g_303[4],&g_303[4],(void*)0,&l_792[3][0][2],&g_303[0]},{&l_852[1],(void*)0,&g_85,&l_792[3][0][2],&g_303[3]},{&g_3,(void*)0,&l_852[5],&l_796[1][1][4],&l_807},{&g_303[0],(void*)0,&l_807,&l_806,&g_85},{&l_796[0][4][2],(void*)0,&l_852[2],&l_804,&l_852[2]},{(void*)0,(void*)0,&g_303[3],&l_792[2][2][1],&l_852[5]},{&l_852[1],(void*)0,&g_85,&l_792[3][0][2],&g_303[3]}},{{&g_3,(void*)0,&l_852[5],&l_796[1][1][4],&l_807},{&g_303[0],(void*)0,&l_807,&l_806,&g_85},{&l_796[0][4][2],(void*)0,&l_852[2],&l_804,&l_852[2]},{(void*)0,(void*)0,&g_303[3],&l_792[2][2][1],&l_852[5]},{&l_852[1],(void*)0,&g_85,&l_792[3][0][2],&g_303[3]},{&g_3,(void*)0,&l_852[5],&l_796[1][1][4],&l_807},{&g_303[0],(void*)0,&l_807,&l_806,&g_85}},{{&l_796[0][4][2],(void*)0,&l_852[2],&l_804,&l_852[2]},{(void*)0,(void*)0,&g_303[3],&l_792[2][2][1],&l_852[5]},{&l_852[1],(void*)0,&g_85,&l_792[3][0][2],&g_303[3]},{&g_3,(void*)0,&l_852[5],&l_796[1][1][4],&l_807},{&g_303[0],(void*)0,&l_807,&l_806,&g_85},{&l_796[0][4][2],(void*)0,&l_852[2],&l_804,&l_852[2]},{(void*)0,(void*)0,&g_303[3],&l_792[2][2][1],&l_852[5]}},{{&l_852[1],(void*)0,&g_85,&l_792[3][0][2],&g_303[3]},{&g_3,(void*)0,&l_852[5],&l_796[1][1][4],&l_807},{&g_303[0],(void*)0,&l_807,&l_806,&g_85},{&l_796[0][4][2],(void*)0,&l_852[2],&l_804,&l_852[2]},{(void*)0,(void*)0,&g_303[3],&l_792[2][2][1],&l_852[5]},{&l_852[1],(void*)0,&g_85,&l_792[3][0][2],&g_303[3]},{&g_3,(void*)0,&l_852[5],&l_796[1][1][4],&l_807}},{{&g_303[0],(void*)0,&l_807,&l_806,&g_85},{&l_796[0][4][2],(void*)0,&l_852[2],&l_804,&l_852[2]},{(void*)0,(void*)0,&g_303[3],&l_792[2][2][1],&l_852[5]},{&l_852[1],(void*)0,&g_85,&l_792[3][0][2],&g_303[3]},{&g_3,(void*)0,&l_852[5],&l_796[1][1][4],&l_807},{&g_303[0],(void*)0,&l_807,&l_806,&g_85},{&l_796[0][4][2],(void*)0,&l_852[2],&l_804,&l_852[2]}},{{(void*)0,(void*)0,&g_303[3],&l_792[2][2][1],&l_852[5]},{&l_852[1],(void*)0,&g_85,&l_792[3][0][2],&g_303[3]},{&g_3,(void*)0,&l_852[5],&l_796[1][1][4],&l_807},{&g_303[0],(void*)0,&l_807,&l_806,&g_85},{&g_85,&g_303[3],&g_4,&g_303[4],&g_4},{&g_303[3],&g_303[3],&l_792[3][0][2],(void*)0,&g_303[2]},{&l_852[2],&g_303[3],&g_303[0],&l_852[5],&l_792[3][0][2]}},{{&l_807,&g_303[3],&g_303[2],&g_85,&g_3},{&l_852[5],&g_303[3],&g_3,&g_155,&g_303[0]},{&g_85,&g_303[3],&g_4,&g_303[4],&g_4},{&g_303[3],&g_303[3],&l_792[3][0][2],(void*)0,&g_303[2]},{&l_852[2],&g_303[3],&g_303[0],&l_852[5],&l_792[3][0][2]},{&l_807,&g_303[3],&g_303[2],&g_85,&g_3},{&l_852[5],&g_303[3],&g_3,&g_155,&g_303[0]}}};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_904[i][j][k] = &g_905[1][0];
                        }
                    }
                    (*l_913) = (g_356[(g_85 + 2)][g_85][g_85] >= ((safe_mod_func_int32_t_s_s(((g_554[0][1] = ((l_796[0][1][2] > (g_108 ^= (safe_sub_func_int16_t_s_s((((**l_776) = (((~((l_795 = (safe_rshift_func_int16_t_s_s(((l_891 = g_893) != (void*)0), 14))) , ((0UL ^ (safe_rshift_func_int8_t_s_s(l_796[1][1][4], ((safe_rshift_func_uint8_t_u_u((p_26.f0 >= l_886), p_29)) <= g_165)))) || l_910[0][1]))) , (**g_598)) > (**g_598))) ^ g_356[(g_85 + 2)][g_85][g_85]), g_911)))) == p_26.f2)) != p_26.f0), 0x24C1AB0EL)) < p_29));
                    l_786 = l_914;
                    if (p_26.f2)
                        break;
                    --l_927;
                }
            }
            l_795 = (safe_rshift_func_uint8_t_u_s(((l_795 == (safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((l_938 , 0x8D89L), (~(safe_div_func_int64_t_s_s(p_26.f2, (((p_29 >= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_div_func_int64_t_s_s(((p_26.f0 , (safe_mul_func_int8_t_s_s((((((safe_mul_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((-3L), l_954)) == 0x90L), 0UL)) == 255UL) , 7UL) & 0xB3AC23B6DD2FE122LL) != p_26.f0), l_785))) , p_26.f0), l_955[3])) != p_26.f2) | 0L), 2)), l_795))) >= 0x1B857523F01AF86BLL) , l_956[0])))))) == (-4L)), p_29)) && (*g_824)), 0x9FL))) | l_785), 1));
        }
        if (p_29)
        { 
            int32_t * const l_957 = &g_85;
            l_958[3] = l_957;
        }
        else
        { 
            if (g_205)
                goto lbl_959;
        }
        if ((((*l_960) = p_26) , p_26.f0))
        { 
            uint16_t l_972 = 2UL;
            uint32_t *l_973 = &g_911;
            int32_t l_974[5];
            int32_t ***l_1007 = &g_273;
            struct S0 l_1020 = {6};
            struct S1 *l_1030 = &g_70[1];
            uint16_t ***l_1078 = &l_776;
            int16_t l_1091 = 0x900FL;
            int64_t **l_1105[2][6];
            uint8_t *l_1119 = &g_880;
            int i, j;
            for (i = 0; i < 5; i++)
                l_974[i] = 7L;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 6; j++)
                    l_1105[i][j] = &g_1015;
            }
            if ((g_88[1][2][4] = ((((((*l_973) ^= ((((*g_599) &= ((*g_559) >= l_961)) ^ (l_972 ^= (safe_sub_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(1L, ((safe_div_func_uint32_t_u_u(p_29, (safe_mul_func_uint8_t_u_u(((*p_28) && (p_29 && ((*g_824) >= p_26.f0))), 0xFDL)))) | 0x7A166D58E54962F5LL))), p_26.f2)) ^ p_26.f2) < (*p_28)) , 65529UL), 0x4A8DL)))) , 0x4373CC68L)) && p_26.f0) < l_974[2]) <= 0UL) < g_356[2][2][0])))
            { 
                int8_t l_984[3];
                int32_t l_989[4] = {0L,0L,0L,0L};
                uint16_t * const l_993 = &l_785;
                int16_t l_1011[1];
                int64_t *l_1017 = (void*)0;
                int64_t **l_1016 = &l_1017;
                struct S0 *l_1021 = &l_1020;
                int32_t l_1024 = 0x152CE088L;
                int i;
                for (i = 0; i < 3; i++)
                    l_984[i] = 0L;
                for (i = 0; i < 1; i++)
                    l_1011[i] = 0L;
                for (g_911 = 0; (g_911 > 15); ++g_911)
                { 
                    int64_t l_977 = 0x163A6013C9872824LL;
                    int32_t l_978 = 1L;
                    int32_t l_979 = (-9L);
                    int32_t l_980 = 0x37B2E8B0L;
                    int32_t l_981 = 0xD70FF1DBL;
                    int32_t l_982 = 0L;
                    int32_t l_983 = (-1L);
                    int32_t l_985 = 3L;
                    ++l_986;
                }
                l_958[1] = &l_795;
                if (p_26.f0)
                { 
                    uint64_t l_990 = 0x25F3BAEEDCCEFDF7LL;
                    l_990++;
                    return &g_10;
                }
                else
                { 
                    uint32_t l_1006 = 6UL;
                    g_475.f0 ^= (safe_rshift_func_int16_t_s_s((0x2E1CL >= ((safe_sub_func_int8_t_s_s(((((g_998[0][4] != ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((((safe_div_func_uint64_t_u_u(((!((l_1006 &= p_26.f0) <= 1UL)) , ((((*g_314) = (&g_273 == l_1007)) && (((safe_sub_func_int64_t_s_s(((+(*p_27)) <= 0xFAE6AF6A074E1141LL), (*g_164))) != 18446744073709551607UL) & p_26.f2)) || p_29)), (*g_164))) | p_29) != 0x64D2EC0A7BFEA936LL) >= l_989[0]), 15)), 0x8DL)) , g_88[2][1][0])) | l_1011[0]) ^ 0x0961L) & 0x20566367L), p_26.f0)) & 1L)), l_984[1]));
                }
                l_1024 |= (safe_mul_func_int8_t_s_s(((l_1014 , g_1015) == ((*l_1016) = ((*l_895) = (**l_894)))), (((safe_add_func_int8_t_s_s(l_989[0], ((((*l_1021) = l_1020) , (2L < ((p_29 == l_984[1]) > l_989[2]))) ^ p_26.f0))) <= (-4L)) | (*g_599))));
                (*g_273) = &l_795;
            }
            else
            { 
                uint16_t l_1029 = 65527UL;
                uint16_t l_1037 = 0x6288L;
                int32_t l_1051 = 0L;
                int32_t l_1052 = 0xC54021F2L;
                int32_t l_1054 = (-7L);
                int32_t l_1055 = 0x7C67FF74L;
                int32_t l_1057 = 1L;
                int32_t l_1059 = 0x00238138L;
                int32_t l_1060[7] = {(-1L),0L,(-1L),(-1L),0L,(-1L),(-1L)};
                struct S1 *l_1069 = (void*)0;
                int i;
                for (g_315 = 0; (g_315 >= (-19)); --g_315)
                { 
                    int32_t l_1043 = 1L;
                    int8_t *l_1044 = (void*)0;
                    int8_t *l_1045[3];
                    int32_t l_1050 = 1L;
                    int32_t l_1053 = 1L;
                    int32_t l_1056 = 0xD6EA9A30L;
                    int32_t l_1058 = 1L;
                    int32_t l_1061 = 0x5A22D9D1L;
                    int32_t l_1062[7][6] = {{0x66E727EAL,1L,0L,0x2CF202E1L,0xB87898B0L,(-1L)},{(-9L),0x66E727EAL,0L,(-9L),1L,0xBE3EBDC6L},{1L,(-9L),(-1L),(-9L),1L,(-3L)},{(-9L),1L,(-3L),0x2CF202E1L,1L,1L},{0x66E727EAL,(-9L),0x555288EEL,1L,1L,1L},{1L,0x66E727EAL,(-3L),0xB87898B0L,0xB87898B0L,(-3L)},{1L,1L,(-1L),1L,(-1L),0xBE3EBDC6L}};
                    uint32_t l_1064 = 0x934FC582L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1045[i] = &g_554[4][4];
                    l_974[2] = (l_792[2][3][2] = (safe_sub_func_uint64_t_u_u(((*p_28) > (((l_1029 && p_26.f0) , p_26.f0) , (l_1030 != (*g_208)))), ((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u(p_26.f2, g_70[1].f0)), l_1037)), p_26.f0)) , (*g_1015)))));
                    if (l_1038)
                        continue;
                    (**l_885) = &g_155;
                    g_303[2] = ((((***l_1007) = (((*g_559) = (((safe_rshift_func_int8_t_s_s(0x04L, 7)) > (l_1043 != (*g_274))) <= ((*p_27) = 0x02E9L))) ^ 4L)) == ((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_u((-1L), l_1037)) , p_26.f2) ^ l_1037) && g_409), l_1043)) <= 3L)) & 7L);
                    ++l_1064;
                }
                for (g_123 = 11; (g_123 < 2); --g_123)
                { 
                    return &g_10;
                }
                (*g_208) = l_1069;
            }
lbl_1125:
            if ((l_852[5] | (&l_891 != ((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(g_165, 0xBC9DBE391BC7E910LL)), (safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((((*l_1078) = &p_28) != l_1079), p_26.f2)), p_29)))) , &g_893))))
            { 
                struct S0 *l_1081 = (void*)0;
                struct S0 *l_1082 = &l_1080[1];
                uint32_t l_1083 = 4294967286UL;
                int64_t ***l_1088 = &l_895;
                int32_t l_1110 = 1L;
                uint32_t l_1120 = 0xB4568984L;
                (*l_1082) = l_1080[1];
                g_303[2] ^= (l_1083 < (*p_28));
                (**l_885) = (void*)0;
                g_475 = l_1020;
                for (l_1038 = 0; (l_1038 <= (-20)); l_1038 = safe_sub_func_int16_t_s_s(l_1038, 7))
                { 
                    uint64_t *l_1089 = &g_502[0];
                    uint32_t *l_1090 = &g_356[0][2][0];
                    int32_t l_1093 = 3L;
                    int8_t *l_1106[7] = {(void*)0,(void*)0,&g_554[2][4],(void*)0,(void*)0,&g_554[2][4],(void*)0};
                    int32_t *l_1107[3][5] = {{&g_1108,&g_1108,&g_1108,&g_1108,&g_1108},{(void*)0,(void*)0,&g_1108,(void*)0,(void*)0},{&g_1108,&g_1108,&g_1108,&g_1108,&g_1108}};
                    uint16_t l_1109 = 6UL;
                    uint16_t ***l_1121[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1121[i] = &l_1079;
                    l_1093 |= (((safe_lshift_func_uint16_t_u_u((l_1088 == (void*)0), 12)) && ((*l_1089) = g_554[2][1])) , (g_1092 &= ((l_1090 != (*g_598)) || l_1091)));
                    l_1109 = (safe_sub_func_int16_t_s_s(((*g_824) || (!((((*g_314) = (safe_div_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(((l_1093 != (safe_mul_func_uint16_t_u_u(((g_1108 = (((safe_mul_func_int8_t_s_s((g_326 &= (l_1105[1][1] != (*l_1088))), (((void*)0 != &g_302) , (((l_1014 , 0xBF67F316L) || l_1093) , (*g_824))))) <= (-5L)) , 0xEC9C8D83L)) , (*p_28)), (*p_28)))) != p_29), 0x0176B4A0BE47E019LL)) <= l_1083), 1L))) ^ (*p_28)) || 0UL))), (*p_27)));
                    l_1110 &= 0x0FF1CEF3L;
                    g_155 |= (((*l_775) = (*p_28)) & ((safe_mul_func_uint8_t_u_u(((*p_28) != ((((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u(p_26.f2, 3)) > (g_326 = ((p_26.f2 || (g_998[0][4] = (g_554[5][2] = (safe_sub_func_int32_t_s_s(((g_475 , (g_824 = l_1119)) == &g_880), 0x3DBBDF9AL))))) | l_1120))) | g_370), p_26.f2)) , &g_374[6]) != l_1121[0]) >= (*g_1015))), l_1093)) || (*g_599)));
                }
            }
            else
            { 
                int64_t l_1123 = (-1L);
                int32_t l_1124 = 1L;
                for (g_10 = 0; (g_10 <= 2); g_10 += 1)
                { 
                    if (p_29)
                        break;
                    if (g_108)
                        goto lbl_1125;
                    return &g_10;
                }
                l_974[2] &= (g_155 = (~(g_71[0][0][3].f1 = ((p_26.f2 == (l_1123 || (((((*p_28) = l_1123) > (g_998[0][4] , 0xEE5CL)) & l_1124) , ((*g_164) = (p_26.f0 | (*g_164)))))) , p_29))));
            }
            if ((((--(*g_599)) <= p_26.f0) & (((*g_1015) = (((safe_sub_func_uint64_t_u_u(((void*)0 != (*l_1078)), (safe_rshift_func_int8_t_s_u(p_26.f0, (((((**g_376) == (void*)0) | ((safe_add_func_int8_t_s_s(((((safe_add_func_uint64_t_u_u(((0L <= (*p_27)) & (-9L)), 7UL)) , p_26.f0) == p_26.f0) <= p_29), g_356[5][2][0])) && 6UL)) || p_26.f2) , (*g_824)))))) & 0x3C587EB87D8A5165LL) <= l_1138)) <= 18446744073709551615UL)))
            { 
                int32_t *l_1139 = &l_795;
                uint32_t *l_1140 = &g_905[1][0];
                uint16_t l_1143 = 0xD352L;
                (**l_885) = l_1139;
                l_1143 ^= ((--(*l_1140)) , 0x88A41927L);
            }
            else
            { 
                int64_t l_1149 = 0xC09EB5E933072DD5LL;
                int32_t *l_1150 = &g_85;
                struct S0 *l_1158 = &l_1020;
                struct S0 **l_1157[5][1][4] = {{{&l_1158,&l_1158,&l_1158,&l_1158}},{{&l_1158,&l_1158,&l_1158,&l_1158}},{{&l_1158,&l_1158,&l_1158,&l_1158}},{{&l_1158,&l_1158,&l_1158,&l_1158}},{{&l_1158,&l_1158,&l_1158,&l_1158}}};
                const int16_t l_1162 = 0L;
                int i, j, k;
                l_1149 = (l_1144 , (safe_sub_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_u(p_26.f2, (((l_1014 , g_88[0][3][4]) <= p_29) <= ((*l_891) == (g_475 , (*l_894)))))) ^ p_26.f0) | p_26.f2), p_26.f2)));
                l_1150 = l_1150;
                (*l_1150) |= (((*g_164) = (*g_1015)) , p_26.f0);
                (*g_273) = l_1150;
                l_1014.f0 &= (p_29 && (((*l_1119) = (safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u((0L < ((**l_895) ^= 0xC4EF3D7FDD20D905LL)), ((*l_1150) , (((((safe_add_func_int16_t_s_s(((l_1159[3] = &l_1080[1]) == &l_1020), (((***l_885) |= ((safe_mod_func_int64_t_s_s(p_26.f2, 0x759C8FF73F368D97LL)) != (*g_824))) >= 0x77B62DB5294CCC35LL))) , (***l_1007)) || p_29) & p_29) | 2L)))), l_1162))) != 0x89L));
            }
            (**g_273) = (*g_274);
        }
        else
        { 
            return p_27;
        }
        return p_27;
    }
    else
    { 
        uint8_t l_1172 = 1UL;
        uint64_t *l_1175 = &g_502[0];
        int32_t l_1176 = (-8L);
        int8_t l_1178[2][4][4] = {{{0xECL,0xECL,1L,0x1CL},{0L,1L,0L,1L},{0L,1L,1L,0L},{0xECL,1L,0x1CL,1L}},{{1L,1L,0x1CL,0x1CL},{0xECL,0xECL,1L,0x1CL},{0L,1L,0L,1L},{0L,1L,1L,0L}}};
        uint64_t l_1179 = 18446744073709551615UL;
        uint16_t * const l_1196 = &g_10;
        int64_t l_1217 = (-1L);
        int i, j, k;
        if ((l_1176 |= (p_26.f2 & ((*l_1175) |= ((255UL != l_1080[1].f0) || (safe_sub_func_int64_t_s_s(((((safe_rshift_func_int8_t_s_s((((*g_824) = ((safe_mul_func_int16_t_s_s((~(l_1014.f0 = (safe_lshift_func_uint8_t_u_s(((void*)0 == &g_502[0]), l_1172)))), (safe_lshift_func_uint8_t_u_u(l_1172, 3)))) < 0x280DL)) & 9UL), g_70[1].f0)) & 4294967286UL) > p_26.f2) < 0x1307B44EL), 0x32E2C94D0003BFFELL)))))))
        { 
            int32_t *l_1177[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1177[i] = &g_88[1][1][1];
            l_1179--;
        }
        else
        { 
            int64_t **** const *l_1186 = &l_1185;
            int32_t l_1215 = 0x153CEA78L;
            int32_t l_1216[3][2][7] = {{{0x0653B5ABL,0L,(-1L),0L,0x0653B5ABL,6L,(-1L)},{9L,0x820571A8L,4L,0L,0x0653B5ABL,(-1L),0x0653B5ABL}},{{4L,0x2ED3F50CL,0x2ED3F50CL,4L,(-1L),6L,0x0653B5ABL},{0x0653B5ABL,6L,(-1L),4L,0x2ED3F50CL,0x2ED3F50CL,4L}},{{0x820571A8L,(-8L),0x820571A8L,6L,0L,1L,0x0653B5ABL},{(-8L),1L,0x820571A8L,(-1L),9L,(-1L),0x820571A8L}}};
            uint16_t * const l_1218 = &g_676;
            int i, j, k;
            for (g_370 = 0; (g_370 != (-22)); --g_370)
            { 
                int32_t *l_1197 = (void*)0;
                l_1186 = l_1184;
                l_1176 = (g_88[2][1][4] = (safe_mul_func_uint8_t_u_u(((*g_824) = 0xA3L), ((((~((*g_314) <= (((*g_559) = p_26.f2) & ((*g_314) , 0x727BL)))) || ((safe_sub_func_uint64_t_u_u(((*l_1175) = (253UL ^ ((safe_unary_minus_func_int8_t_s(((safe_lshift_func_int16_t_s_s(((((((((l_1172 >= g_409) == 0x1FDE40E9EA2328BALL) != g_1195) < 0L) , (**g_376)) != l_1196) , p_26.f2) || p_29), 12)) , 3L))) <= g_409))), 0L)) >= 0xF6942CECA1C813D4LL)) & 0UL) <= p_29))));
                (*g_273) = ((((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_1179, (g_3 || ((*g_314) > ((0x8BD96B0AL && ((safe_unary_minus_func_uint16_t_u(((safe_sub_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((((g_88[1][2][4] = ((0x5663L == (l_1216[0][0][0] ^= ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((void*)0 == &l_1197) != 0x6657835654373982LL), p_26.f2)), (*p_28))), l_1215)) <= g_1108))) | l_1179)) && 0x78AE984CL) >= p_29) != l_1178[1][3][0]), l_1217)), l_1179)) || 0xFD24L), p_26.f2)) , (*p_27)))) & p_26.f0)) ^ p_26.f2))))), (*g_559))) | p_26.f2) , l_1179) , &g_155);
            }
            return l_1218;
        }
    }
    if ((((l_1080[1].f0 , (l_1080[1].f0 = ((*l_885) != (void*)0))) <= (safe_div_func_uint8_t_u_u((*g_824), ((--(*l_1222)) && ((*l_1222) = g_185))))) > (safe_add_func_int32_t_s_s(((*l_1228) = ((*l_1227) |= ((l_924 >= (g_1092 ^ l_1014.f0)) > p_26.f2))), 4294967295UL))))
    { 
        uint32_t l_1229[4];
        int64_t *****l_1232 = &l_1185;
        int32_t l_1233 = (-5L);
        int32_t * const *l_1247 = &l_1228;
        int32_t * const **l_1246 = &l_1247;
        const struct S1 l_1323[5] = {{67},{67},{67},{67},{67}};
        int32_t l_1362 = 0L;
        int32_t l_1364 = (-1L);
        int32_t l_1366 = 0x49D077D6L;
        struct S0 *l_1409 = &l_1080[0];
        int i;
        for (i = 0; i < 4; i++)
            l_1229[i] = 1UL;
        --l_1229[0];
        if ((l_1233 = (l_1232 == (void*)0)))
        { 
            uint32_t l_1234 = 0x1EDD1D60L;
            int32_t *l_1237 = (void*)0;
            int32_t ** const l_1236 = &l_1237;
            int32_t ** const *l_1235 = &l_1236;
            (*l_1228) ^= l_1234;
            (*l_1228) &= p_26.f0;
            g_1238[0] = (l_1235 = &g_273);
        }
        else
        { 
            int32_t l_1241 = 1L;
            int64_t **l_1268 = (void*)0;
            uint32_t l_1310[2];
            int8_t *l_1332 = &g_998[0][3];
            struct S1 *l_1333 = &l_1014;
            int32_t *l_1334 = &l_792[3][0][2];
            struct S0 l_1347 = {4};
            uint32_t l_1367[7][6] = {{0x6E1AC1EEL,18446744073709551615UL,0x19DF9EADL,0x0AC6548AL,0x0AC6548AL,0x19DF9EADL},{0x6E1AC1EEL,0x6E1AC1EEL,0x0AC6548AL,18446744073709551608UL,0x069A689EL,18446744073709551608UL},{18446744073709551615UL,0x6E1AC1EEL,18446744073709551615UL,0x19DF9EADL,0x0AC6548AL,0x0AC6548AL},{18446744073709551612UL,18446744073709551615UL,18446744073709551615UL,18446744073709551612UL,0x6E1AC1EEL,18446744073709551608UL},{18446744073709551608UL,18446744073709551612UL,0x0AC6548AL,18446744073709551612UL,18446744073709551608UL,0x19DF9EADL},{18446744073709551612UL,18446744073709551608UL,0x19DF9EADL,0x19DF9EADL,18446744073709551608UL,18446744073709551612UL},{18446744073709551615UL,18446744073709551612UL,0x6E1AC1EEL,18446744073709551608UL,0x6E1AC1EEL,18446744073709551612UL}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_1310[i] = 18446744073709551615UL;
lbl_1358:
            (*l_1227) ^= ((safe_sub_func_uint64_t_u_u((l_1241 == (*g_824)), ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(0x2BL, 5)), 5)) < ((((1UL | ((void*)0 != l_1246)) && (((0xC0B66479A70D61D5LL > p_26.f0) <= 0L) != (**l_1247))) | 0xD2L) == g_1195)))) <= (*p_27));
            for (g_108 = (-19); (g_108 == 41); g_108++)
            { 
                uint32_t l_1265 = 0xE7D891CEL;
                if ((safe_add_func_uint64_t_u_u(0x594F77977122B164LL, (p_26.f1 = ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((((*g_1015) &= (safe_lshift_func_uint16_t_u_u(0xD820L, (safe_add_func_int16_t_s_s(2L, (((***l_1246) |= g_420[1]) , (safe_div_func_int8_t_s_s(l_1241, p_26.f0)))))))) != ((*p_28) != 0x6D2BL)), g_911)), p_26.f2)) > 4L)))))
                { 
                    return p_28;
                }
                else
                { 
                    int32_t *l_1262 = &l_792[3][0][2];
                    int32_t *l_1263 = &g_88[1][2][4];
                    int32_t *l_1264 = &g_88[0][0][3];
                    uint16_t ****l_1272 = (void*)0;
                    uint16_t ****l_1274 = (void*)0;
                    uint16_t ****l_1275 = &g_1269;
                    l_1265++;
                    (*l_894) = l_1268;
                    if (p_26.f1)
                        break;
                    (*l_1275) = (l_1273[0][0][1] = g_1269);
                }
                if (p_26.f0)
                    break;
            }
            for (l_1233 = 0; (l_1233 >= 3); l_1233 = safe_add_func_uint16_t_u_u(l_1233, 8))
            { 
                const union U2 **l_1282 = (void*)0;
                const union U2 *l_1284 = &g_1285;
                const union U2 **l_1283[5];
                int32_t l_1297 = (-1L);
                int64_t **l_1309 = &g_164;
                int32_t *l_1340 = &l_792[3][0][2];
                int i;
                for (i = 0; i < 5; i++)
                    l_1283[i] = &l_1284;
                if ((safe_mul_func_uint8_t_u_u((!(l_1281 == (l_1286 = &g_71[1][2][1]))), (p_26.f2 >= ((++(*l_1222)) < (safe_rshift_func_int16_t_s_s((((g_420[1] < ((safe_lshift_func_int16_t_s_u(((+(safe_add_func_uint8_t_u_u((((*g_164) |= l_1297) | (safe_div_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((+(safe_lshift_func_uint16_t_u_u(((((void*)0 == l_1309) , (*g_824)) , l_1310[1]), 6))), l_1297)), 4L)), 0x411D87AFB172F8EDLL)), p_29))), 0xCAL))) == 1L), (*p_28))) || (*l_1227))) || p_29) ^ 0x7FD6C9811A1DE422LL), (*g_314))))))))
                { 
                    return p_27;
                }
                else
                { 
                    int8_t l_1320[6] = {4L,0L,0L,4L,0L,0L};
                    int32_t l_1324 = 3L;
                    int32_t *l_1335[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1335[i] = &g_88[0][2][5];
                    (*l_1227) |= ((safe_lshift_func_int16_t_s_u(((*g_314) |= (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_div_func_int64_t_s_s((l_1014 , (l_1320[2] = (safe_rshift_func_uint16_t_u_s((l_1310[1] != 0x4FD6L), 15)))), (safe_sub_func_int8_t_s_s((l_1323[1] , (-1L)), l_1324)))))), (0x24163C1D4A58C646LL <= p_26.f2)))), (***l_1246))) != (***l_1246));
                    (*g_208) = (((((safe_add_func_uint8_t_u_u(((((*l_1222) |= (l_1320[4] & ((9L < (***l_1246)) < (safe_div_func_int8_t_s_s((p_26 , (l_1324 = g_1287.f2)), (((**g_598) = ((18446744073709551615UL || (safe_div_func_uint64_t_u_u((l_1331 != l_1332), (**l_1247)))) < p_29)) ^ l_1241)))))) , 7L) == (***l_1246)), (-4L))) , (***l_1246)) != (*g_164)) <= 0xEAL) , l_1333);
                    l_1335[0] = l_1334;
                    (*l_1334) &= p_26.f0;
                }
                if (l_1297)
                    continue;
                if ((safe_sub_func_uint32_t_u_u(((void*)0 == l_1268), ((*g_599)++))))
                { 
                    (***l_1246) |= (-1L);
                    l_1340 = l_1334;
                    if ((*l_1228))
                        break;
                }
                else
                { 
                    (**l_885) = &l_1297;
                }
                return p_28;
            }
            for (g_205 = (-27); (g_205 <= 20); ++g_205)
            { 
                int16_t l_1348 = 7L;
                int32_t l_1357 = 0x2BB8A645L;
                int32_t l_1363 = (-9L);
                int32_t l_1365[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1365[i] = 0L;
                if (((*l_1227) = (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u((&g_273 != &g_273), 0)) , (((((l_1348 ^= (l_1080[4] , (l_1347 , (**g_598)))) != ((safe_lshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s(0x9FL, p_26.f0)), l_1357)), p_26.f2)) != 0x2188B31DE1345692LL), 3)) >= l_1357)) & p_26.f0) , (*p_28)) , (**l_1247))), 9))))
                { 
                    int16_t **l_1360 = &g_314;
                    int16_t ***l_1359 = &l_1360;
                    if (p_26.f0)
                        goto lbl_1358;
                    (*l_1359) = (void*)0;
                    return (*g_1270);
                }
                else
                { 
                    int32_t *l_1361[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1361[i] = &g_88[0][1][0];
                    l_1367[2][3]++;
                    return (**g_1269);
                }
            }
            if ((safe_add_func_int16_t_s_s((***l_1246), ((((*l_1334) >= (safe_lshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(0UL, p_26.f2)), (safe_div_func_uint8_t_u_u((((0x54A4L ^ 0x891BL) || (&g_370 == (void*)0)) && g_3), 0xE6L))))) && p_26.f2) != (*g_1271)))))
            { 
                uint32_t l_1378 = 4294967295UL;
                int32_t l_1379 = 1L;
                l_1379 = l_1378;
                for (p_26.f1 = 0; (p_26.f1 < 25); p_26.f1 = safe_add_func_uint64_t_u_u(p_26.f1, 1))
                { 
                    (*g_273) = l_1334;
                    if (l_1378)
                        break;
                }
                (*l_1334) &= (~((*l_1331) = (safe_rshift_func_int16_t_s_s(((*g_314) = l_1379), 8))));
                for (g_315 = 0; (g_315 == (-16)); g_315 = safe_sub_func_int16_t_s_s(g_315, 5))
                { 
                    (*l_1334) = ((*l_1232) != ((*g_302) , &g_893));
                    if (p_26.f0)
                        break;
                }
                for (g_326 = 8; (g_326 > 19); g_326++)
                { 
                    (*l_1334) &= p_29;
                }
            }
            else
            { 
                int64_t l_1391 = 0x4CB95257529102B7LL;
                struct S1 *l_1398 = &l_1014;
                int32_t l_1405 = (-2L);
                l_1405 ^= ((**l_1247) &= (safe_mod_func_int64_t_s_s(l_1391, (safe_lshift_func_int16_t_s_u(((l_1391 == (safe_lshift_func_int16_t_s_u((((*g_164) ^= (safe_mul_func_int8_t_s_s((&l_1185 == (void*)0), (l_1398 == (void*)0)))) | (+(safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int8_t_s_u((-1L), 4)) , p_26.f0))), 11)))), (*p_27)))) < p_29), (*g_1271))))));
            }
        }
        for (g_676 = 0; (g_676 != 7); g_676 = safe_add_func_int16_t_s_s(g_676, 7))
        { 
            union U2 l_1408 = {0UL};
            (*l_1228) &= ((l_1408 = p_26) , (l_1014 , p_26.f0));
            return (*g_1270);
        }
        (*l_1409) = l_1080[1];
    }
    else
    { 
        int32_t l_1411 = 0L;
        int32_t l_1412 = 0xD41A0192L;
        int32_t l_1413[3][7][6] = {{{0L,0x178F6CE7L,0x7DBD0250L,(-10L),(-6L),0xFFC515A5L},{0xC1D3230AL,(-7L),1L,0x97704708L,0x3FFCC2A3L,5L},{0x1031E8B2L,(-7L),0xDED3AA7AL,(-6L),5L,0L},{0xCCABE59DL,0x2B74D427L,2L,0xDED3AA7AL,(-7L),0xAEB6A25DL},{0x178F6CE7L,0x97704708L,(-1L),0xE992125BL,(-7L),0xE992125BL},{0x73840CEAL,(-1L),0x73840CEAL,3L,0x7DBD0250L,0L},{(-1L),0xCCABE59DL,0x3FFCC2A3L,(-1L),(-1L),0x2B74D427L}},{{(-10L),(-1L),(-7L),(-1L),0x178F6CE7L,3L},{(-1L),0x73780711L,(-4L),3L,1L,1L},{0x73840CEAL,0x1687C015L,0xA421884BL,0xE992125BL,1L,0L},{0x178F6CE7L,0x7191105BL,0x2B74D427L,0xDED3AA7AL,(-5L),0xB91B36FDL},{0xCCABE59DL,0xFFC515A5L,0x1687C015L,(-6L),0xAB35F121L,0x5F3ABFDCL},{0x1031E8B2L,0xA421884BL,0L,0x97704708L,0xDED3AA7AL,(-1L)},{0xC1D3230AL,0x5F3ABFDCL,0xE0916E29L,(-10L),(-10L),0xE0916E29L}},{{0L,0L,(-7L),(-7L),0xCD4AA7D2L,(-4L)},{(-1L),1L,(-10L),0x2B74D427L,3L,(-7L)},{0x7DBD0250L,(-1L),(-10L),0xAB35F121L,0L,(-4L)},{0L,0xAB35F121L,(-7L),0xFFC515A5L,0L,0xE0916E29L},{0xFFC515A5L,0L,0L,0xB91B36FDL,(-1L),(-1L)},{0x7DBD0250L,0L,(-7L),1L,(-10L),3L},{(-10L),(-7L),6L,0L,(-1L),0xE992125BL}}};
        uint16_t l_1414[3];
        uint64_t l_1422 = 0xA0E121931B9B0B4ALL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1414[i] = 0x7F0BL;
        for (p_26.f2 = 0; (p_26.f2 <= 1); p_26.f2 += 1)
        { 
            int32_t *l_1410[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1410[i][j] = &g_85;
            }
            --l_1414[0];
        }
    }
    return (*g_1270);
}



static uint16_t * func_31(uint32_t  p_32, uint16_t  p_33, uint16_t * p_34, int8_t  p_35)
{ 
    int8_t *l_347 = &g_326;
    uint64_t *l_348 = (void*)0;
    int32_t l_357 = 5L;
    int32_t l_386[3][6] = {{0L,0L,0xFDBF6101L,0x8EC2CF7AL,(-1L),0x8EC2CF7AL},{0xF03639E5L,0L,0xF03639E5L,6L,0xFDBF6101L,0xFDBF6101L},{0xFB844435L,0xF03639E5L,0xF03639E5L,0xFB844435L,0L,0x8EC2CF7AL}};
    const int32_t *l_410 = &g_411;
    uint16_t *l_517 = &g_71[0][0][3].f0;
    struct S1 l_539 = {-4097};
    struct S0 l_540 = {5};
    union U2 l_573 = {6UL};
    int32_t ** const *l_625 = (void*)0;
    uint32_t ***l_636 = &g_598;
    struct S1 **l_675[2][1];
    int32_t *l_695 = &l_357;
    int32_t *l_696 = (void*)0;
    int32_t *l_697 = &g_303[4];
    int32_t *l_698 = (void*)0;
    int32_t *l_699 = (void*)0;
    int32_t *l_700[2][5] = {{&g_303[5],&g_303[5],&g_303[5],&g_303[5],&g_303[5]},{&g_155,&g_155,&g_155,&g_155,&g_155}};
    int32_t l_701 = (-1L);
    uint64_t l_702 = 0x87ADB7416F93825FLL;
    int16_t **l_727 = &g_314;
    int8_t l_748 = 7L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_675[i][j] = &g_209;
    }
    if ((safe_lshift_func_uint16_t_u_s(0x506CL, ((((*l_347) = (safe_rshift_func_int8_t_s_s(0xA7L, 2))) != (l_348 != &g_185)) | 0x5E3F1211L))))
    { 
        const struct S1 *l_377 = &g_70[3];
        int32_t l_379 = (-1L);
        int32_t l_382 = 0x3FC89E2BL;
        int32_t l_383 = 0xAD60E80AL;
        int32_t l_384 = 6L;
        int32_t l_385[4][6] = {{(-1L),3L,0xD02096C1L,0xD02096C1L,3L,(-1L)},{(-1L),(-1L),0xD02096C1L,(-1L),(-1L),(-1L)},{0L,(-1L),(-1L),0L,3L,0L},{0L,3L,0L,(-1L),(-1L),0L}};
        uint8_t l_432 = 252UL;
        uint16_t l_448[3][2] = {{3UL,3UL},{3UL,3UL},{3UL,3UL}};
        int64_t *l_528[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        struct S0 l_566[7][4][5] = {{{{2},{-1},{-5},{-5},{-1}},{{4},{7},{3},{6},{0}},{{7},{-7},{3},{-5},{-6}},{{0},{0},{-5},{6},{-1}}},{{{7},{-1},{6},{6},{2}},{{4},{1},{6},{-5},{-6}},{{2},{-1},{4},{6},{-6}},{{2},{0},{6},{-5},{2}}},{{{2},{-7},{4},{3},{-1}},{{2},{7},{6},{4},{-6}},{{2},{-1},{6},{3},{0}},{{2},{-1},{-5},{-5},{-1}}},{{{4},{7},{3},{6},{0}},{{7},{-7},{3},{-5},{-6}},{{0},{0},{-5},{6},{-1}},{{7},{-1},{6},{6},{2}}},{{{4},{1},{6},{-5},{-6}},{{2},{-1},{4},{6},{-6}},{{2},{0},{6},{-5},{2}},{{2},{-7},{4},{3},{-1}}},{{{2},{7},{6},{4},{-6}},{{2},{-1},{6},{3},{0}},{{2},{-1},{0},{0},{-6}},{{-1},{-7},{6},{-7},{2}}},{{{-6},{-7},{6},{7},{-6}},{{2},{2},{0},{-1},{1}},{{-6},{1},{2},{-1},{5}},{{-1},{0},{-1},{7},{-0}}}};
        union U2 *l_594 = &g_71[2][2][4];
        int32_t ***l_635[3];
        int32_t l_640 = 0x0998DA7BL;
        uint32_t * const *l_659 = &g_599;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_635[i] = &g_273;
        for (g_10 = 0; (g_10 < 46); g_10++)
        { 
            int16_t l_353[7];
            uint64_t *l_358 = &g_185;
            int8_t *l_359 = &g_123;
            struct S1 l_362 = {-6649};
            uint32_t l_365 = 0UL;
            int32_t l_387 = 0xCC252D4BL;
            int32_t l_388[2];
            uint16_t l_390[3];
            union U2 *l_401 = (void*)0;
            union U2 **l_400[6] = {&l_401,&l_401,&l_401,&l_401,&l_401,&l_401};
            uint64_t l_418 = 18446744073709551615UL;
            uint32_t l_500 = 0x49D1E715L;
            struct S0 l_503 = {-3};
            int64_t *l_511 = &g_370;
            int16_t *l_516 = &l_353[3];
            uint64_t l_553 = 0x5B4717B7D1619971LL;
            int i;
            for (i = 0; i < 7; i++)
                l_353[i] = 0xFDB4L;
            for (i = 0; i < 2; i++)
                l_388[i] = 0xE77CB048L;
            for (i = 0; i < 3; i++)
                l_390[i] = 0x1264L;
        }
        for (p_35 = 3; (p_35 >= 0); p_35 -= 1)
        { 
            uint8_t *l_567 = (void*)0;
            uint8_t *l_568 = &l_432;
            int32_t l_574[1];
            struct S1 l_577 = {-4428};
            uint32_t l_587 = 0x5CF84AF1L;
            int64_t *l_634 = &g_370;
            union U2 l_655 = {0x0B41L};
            int i;
            for (i = 0; i < 1; i++)
                l_574[i] = (-1L);
            if (((((!(safe_div_func_int32_t_s_s((65527UL > (l_384 & l_382)), (((p_33 >= (safe_rshift_func_uint8_t_u_u(1UL, (l_566[6][0][1] , (--(*l_568)))))) > ((*l_347) = (safe_sub_func_uint32_t_u_u(((l_573 , g_502[0]) , p_32), l_574[0])))) || (-8L))))) | (*g_559)) & 0xD899D835L) & (*l_410)))
            { 
                uint32_t *l_578 = &g_205;
                int32_t l_582 = (-1L);
                int32_t l_586 = (-1L);
                for (g_165 = 0; (g_165 <= 0); g_165 += 1)
                { 
                    struct S0 l_575 = {-6};
                    struct S0 *l_576 = &l_575;
                    (*g_274) |= 0L;
                    (*l_576) = l_575;
                    (*l_576) = (*l_576);
                }
                if ((*g_274))
                    break;
                (*g_302) = l_577;
                (**g_273) = (((*l_578) = g_315) , (safe_mod_func_int8_t_s_s(((*l_347) |= ((~(((*g_164) = (&l_578 == (void*)0)) < p_35)) || (((0xE8F94FF3L | l_582) & ((((p_32 , g_554[5][2]) > (*g_274)) || 0x88A7L) <= g_502[0])) < l_582))), 0x76L)));
                for (p_32 = 0; (p_32 <= 4); p_32 += 1)
                { 
                    int8_t l_583 = 1L;
                    int32_t *l_584 = &g_303[1];
                    int32_t *l_585[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_585[i] = &l_382;
                    l_587++;
                    return &g_10;
                }
            }
            else
            { 
                union U2 **l_595 = (void*)0;
                union U2 **l_596 = (void*)0;
                const int32_t l_604 = 0x7DEB141FL;
                int32_t *l_605 = &g_88[1][2][1];
                (*g_273) = &l_386[1][0];
                (*l_605) &= (g_4 || (((*l_568) = (((safe_lshift_func_uint8_t_u_s((((*l_517) = ((g_597[0][3][1] = l_594) == &g_71[0][0][3])) >= (g_598 == &g_599)), (safe_div_func_uint8_t_u_u(255UL, (safe_div_func_uint16_t_u_u(((((l_604 & l_604) == 0xF89BL) == l_604) == 4294967295UL), 65533UL)))))) && (**g_273)) < g_123)) ^ g_356[1][0][0]));
                for (l_573.f0 = 1; (l_573.f0 <= 4); l_573.f0 += 1)
                { 
                    return &g_10;
                }
            }
            for (l_587 = 1; (l_587 <= 4); l_587 += 1)
            { 
                uint32_t l_611[4];
                uint64_t *l_612 = (void*)0;
                uint64_t *l_613 = &g_502[0];
                uint64_t *l_614[6][6][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                struct S1 ***l_615 = &g_208;
                struct S0 l_616 = {4};
                struct S0 *l_617 = &l_566[6][2][4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_611[i] = 0x7030BF29L;
                (*g_274) &= (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((p_33 <= (*g_559)), ((*l_613) ^= ((!p_33) ^ l_611[0])))) > (((((g_185 = p_33) , ((*g_164) | (((*l_615) = &g_209) == &g_209))) || 0x1EL) , (void*)0) != &p_35)), (*l_410)));
                (*l_617) = l_616;
                return &g_10;
            }
            for (g_315 = 3; (g_315 >= 0); g_315 -= 1)
            { 
                struct S1 *l_624[3][3][1] = {{{&l_539},{&g_70[1]},{&l_539}},{{&g_70[1]},{&l_539},{&g_70[1]}},{{&l_539},{&g_70[1]},{&l_539}}};
                int i, j, k;
                (**g_273) = (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((*l_517)--), 15)) | p_33), 4));
                l_624[2][0][0] = (void*)0;
                (**g_273) &= (l_625 != ((safe_mod_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(g_356[2][2][0], 0)), 4)), (l_574[0] < ((void*)0 != &p_33)))) , l_528[(p_35 + 1)]) != l_634), 0xA2702C7BL)) , l_635[2]));
            }
            for (l_384 = 4; (l_384 >= 0); l_384 -= 1)
            { 
                uint32_t ****l_637 = &l_636;
                union U2 *l_643[6][2][5] = {{{&g_71[0][0][3],&l_573,&g_71[3][0][2],&l_573,&g_71[0][0][3]},{&l_573,&g_71[3][3][1],&l_573,&g_71[1][4][2],&g_71[3][3][1]}},{{&g_71[0][0][3],&g_71[0][0][3],&g_71[0][0][3],&g_71[0][0][3],&l_573},{&l_573,(void*)0,&g_71[0][0][3],&g_71[3][3][1],&g_71[3][3][1]}},{{&g_71[1][0][1],&g_71[0][0][3],&g_71[1][0][1],&l_573,&g_71[0][0][3]},{&g_71[3][3][1],&l_573,&g_71[1][4][2],&g_71[3][3][1],&g_71[1][4][2]}},{{(void*)0,(void*)0,&g_71[3][0][2],&g_71[0][0][3],&l_573},{&l_573,&l_573,&g_71[1][4][2],&g_71[1][4][2],&l_573}},{{&l_573,&g_71[0][0][3],&g_71[1][0][1],&l_573,&l_573},{(void*)0,&l_573,&g_71[0][0][3],&l_573,(void*)0}},{{&g_71[1][0][1],(void*)0,&g_71[0][0][3],&l_573,(void*)0},{(void*)0,&l_573,&l_573,(void*)0,&g_71[1][4][2]}}};
                int16_t *l_644 = &g_420[1];
                int32_t l_645 = 0xB9E8552FL;
                int32_t l_646[3][6] = {{6L,(-3L),5L,0xB4261E21L,0xB4261E21L,5L},{0xB4261E21L,0xB4261E21L,5L,(-3L),6L,5L},{(-3L),6L,5L,6L,(-3L),5L}};
                int16_t l_656[6][2] = {{0xBBA4L,0xBBA4L},{(-1L),0xBBA4L},{0xBBA4L,(-1L)},{0xBBA4L,0xBBA4L},{(-1L),0xBBA4L},{0xBBA4L,(-1L)}};
                int i, j, k;
                (**g_273) ^= p_33;
                (*l_637) = l_636;
                l_646[1][5] &= (((*l_410) || (p_33 == ((safe_sub_func_int16_t_s_s(l_640, (((safe_div_func_int32_t_s_s(((p_35 , (&g_315 == ((((*l_594) , ((((void*)0 != l_643[4][1][0]) != 3UL) & 0x610E7061L)) && p_35) , l_644))) , (*g_274)), p_33)) , l_645) || 1UL))) != (-8L)))) != 0x94L);
                l_386[1][1] ^= ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(l_646[2][2], (-1L))), 8)) || ((g_554[(p_35 + 2)][(p_35 + 1)] ^= (safe_mul_func_int16_t_s_s((l_646[1][1] > (safe_add_func_uint16_t_u_u(65531UL, (1L & (((l_655 , &g_420[2]) == p_34) , l_646[1][5]))))), l_656[5][1]))) | l_656[5][0]));
            }
        }
        if ((((p_35 & (safe_add_func_uint8_t_u_u((l_659 != (void*)0), 0x4EL))) | ((*p_34) |= (&l_594 == ((safe_add_func_uint8_t_u_u((1L > ((*g_599) |= 0UL)), g_411)) , (void*)0)))) < 0x98L))
        { 
            uint16_t l_662 = 65532UL;
            uint64_t *l_677 = &g_185;
            l_662--;
            (*g_274) = (safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((p_32 || ((255UL ^ (safe_div_func_uint8_t_u_u(g_3, p_33))) , (((safe_mul_func_uint16_t_u_u((((*l_594) , p_35) > (g_676 &= (((l_675[1][0] != &l_377) <= (*p_34)) <= 0xEABA3C97L))), 0L)) , &g_185) != l_677))), p_35)), p_35));
            (*g_274) ^= (-4L);
        }
        else
        { 
            uint8_t l_678[1];
            int32_t l_679 = (-1L);
            int i;
            for (i = 0; i < 1; i++)
                l_678[i] = 0xF4L;
            l_679 = ((*g_274) = ((l_678[0] ^= (*g_164)) ^ 0xC7AB3608CC7915C3LL));
        }
    }
    else
    { 
        int32_t l_694[6][5] = {{0L,0L,(-2L),0L,0L},{(-5L),0xE0410B72L,(-5L),(-5L),0xE0410B72L},{0L,1L,1L,0L,1L},{0xE0410B72L,0xE0410B72L,0xC210ED84L,0xE0410B72L,0xE0410B72L},{1L,0L,1L,1L,0L},{0xE0410B72L,(-5L),(-5L),0xE0410B72L,(-5L)}};
        int i, j;
        (*g_302) = (*g_302);
        (*g_274) = ((safe_lshift_func_int16_t_s_s(p_35, ((*g_164) >= ((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u(((p_33 == (((*l_636) != &g_599) || (safe_rshift_func_int8_t_s_u(0x89L, p_33)))) == l_694[3][0]), (*g_164))), (*g_314))) != (*g_559)) != p_35), 8)), 6L)), 13)) | g_554[5][2])))) && p_33);
    }
    ++l_702;
    if ((safe_rshift_func_uint16_t_u_u((*p_34), 5)))
    { 
        uint16_t *l_707 = &g_10;
        return l_707;
    }
    else
    { 
        int16_t * const *l_725[6] = {(void*)0,(void*)0,(void*)0,&g_314,&g_314,(void*)0};
        int16_t * const **l_726 = &l_725[5];
        int32_t l_728[1][5][1];
        struct S1 l_749 = {93};
        int16_t l_756 = 0x0BDDL;
        uint32_t l_759[2];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 1; k++)
                    l_728[i][j][k] = (-1L);
            }
        }
        for (i = 0; i < 2; i++)
            l_759[i] = 0x2BB73B94L;
        if ((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((p_35 || (safe_rshift_func_int8_t_s_s((((*g_559) = (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(0xF04FD5930A4ABC97LL)), 0))) <= (*l_410)), 7))) ^ p_32) != (*g_599)) , (safe_add_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((((*l_726) = l_725[3]) != l_727) >= l_728[0][2][0]), (*g_314))), 5)), l_728[0][0][0])) <= l_728[0][2][0]), 1UL))), p_32)), (*p_34))))
        { 
            return &g_676;
        }
        else
        { 
            uint64_t l_739 = 7UL;
            int32_t l_752 = 0xF32A5FB1L;
            int32_t l_753 = 1L;
            int32_t l_754 = 0xC7520AD0L;
            int32_t l_755 = 0x8CBCE38FL;
            int32_t l_757[2];
            const int32_t **l_765 = (void*)0;
            const int32_t **l_766 = (void*)0;
            const int32_t **l_767 = &l_410;
            const int32_t **l_768 = (void*)0;
            const int32_t **l_769 = (void*)0;
            const int32_t *l_771 = (void*)0;
            const int32_t **l_770 = &l_771;
            int i;
            for (i = 0; i < 2; i++)
                l_757[i] = 0xBE32ACB7L;
            for (g_10 = (-12); (g_10 != 9); g_10++)
            { 
                uint64_t l_750 = 0xE7AFE5B4ADCB3300LL;
                uint8_t *l_751 = &l_573.f2;
                int32_t l_758 = 7L;
                uint16_t *l_764 = &g_676;
                (*l_695) ^= ((safe_div_func_uint8_t_u_u(250UL, ((*l_751) = (safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(l_739, (safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((0xE2303E02B66C125ALL | (((*g_274) == ((((safe_mod_func_int32_t_s_s((*g_274), (safe_mul_func_uint16_t_u_u(((l_748 ^ (l_749 , 18446744073709551615UL)) != l_750), (*g_559))))) < p_33) == p_33) < (*g_164))) >= (*l_697))), 1L)), l_728[0][2][0])))) == l_728[0][2][0]) , (-7L)), 7))))) | 0UL);
                l_759[0]++;
                for (g_205 = 5; (g_205 <= 31); g_205 = safe_add_func_uint64_t_u_u(g_205, 7))
                { 
                    return l_764;
                }
                (*l_697) = p_35;
            }
            (*l_770) = ((*l_767) = (void*)0);
        }
        (*g_302) = l_749;
        (*g_274) = (safe_mod_func_uint8_t_u_u((p_35 || (*p_34)), (g_155 , g_554[3][3])));
    }
    return &g_676;
}



static uint16_t  func_38(uint16_t * const  p_39, uint16_t * p_40, uint16_t * const  p_41, uint64_t  p_42)
{ 
    uint16_t l_68 = 65535UL;
    struct S1 *l_69 = &g_70[1];
    int16_t l_72 = 1L;
    int16_t *l_73[3];
    int32_t l_74 = 1L;
    struct S1 **l_75 = &l_69;
    struct S1 *l_76 = &g_70[4];
    int32_t *l_81 = &l_74;
    int32_t *l_84 = &g_85;
    int8_t l_86 = 0xCAL;
    int32_t *l_87 = &g_88[1][2][4];
    int32_t l_134 = 1L;
    int32_t l_141 = 0L;
    int32_t l_142 = (-1L);
    int32_t l_143 = 0xB4AE7F92L;
    int32_t l_145[4];
    union U2 l_248 = {1UL};
    uint32_t l_339 = 4294967286UL;
    int i;
    for (i = 0; i < 3; i++)
        l_73[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_145[i] = 0xDDF18D08L;
    l_76 = ((*l_75) = (((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((l_74 ^= (safe_div_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(g_3, (l_68 , (l_69 == ((p_41 != (g_71[0][0][3] , &g_10)) , l_69))))), 2)) , 1L) >= g_71[0][0][3].f2) || l_68) <= l_72), 255UL)), g_3)), 0xAC46406CL)) == p_42), p_42))), g_71[0][0][3].f2)), (*p_41))), g_70[1].f0)), p_42)), l_68)), g_71[0][0][3].f2)) != 6UL) , l_69));
    (*l_87) &= ((safe_mul_func_uint8_t_u_u((((&g_10 != (void*)0) <= (((((((((*l_81) = (l_68 >= 0L)) | ((*l_84) = (g_3 != ((safe_mul_func_int16_t_s_s(((void*)0 != &l_72), (*p_40))) || l_68)))) && l_86) ^ 2L) | 4UL) && p_42) > 0xB8L) < p_42)) == p_42), 2L)) <= 0UL);
    for (l_86 = 0; (l_86 <= 27); l_86 = safe_add_func_int8_t_s_s(l_86, 6))
    { 
        int16_t l_138 = (-10L);
        int32_t l_144 = 0xBE9E82CBL;
        int32_t l_148 = (-10L);
        int32_t l_150 = 7L;
        int32_t l_152[5][2][4] = {{{0x3E9DE1E5L,0L,0L,0x3E9DE1E5L},{0x1326FF56L,0L,(-1L),0L}},{{0L,(-6L),(-1L),(-1L)},{0x1326FF56L,0x1326FF56L,0L,(-1L)}},{{0x3E9DE1E5L,(-6L),0x3E9DE1E5L,0L},{0x3E9DE1E5L,0L,0L,0x3E9DE1E5L}},{{0x1326FF56L,0L,(-1L),0L},{0L,(-6L),(-1L),(-1L)}},{{0x1326FF56L,0x1326FF56L,0L,(-1L)},{0x3E9DE1E5L,(-6L),0x3E9DE1E5L,0L}}};
        int32_t l_204 = 5L;
        uint32_t *l_222 = (void*)0;
        uint32_t *l_223 = &g_108;
        struct S1 l_231 = {-6038};
        int32_t **l_272[2];
        uint8_t l_278 = 2UL;
        uint16_t *l_338 = &g_71[0][0][3].f0;
        uint16_t **l_337 = &l_338;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_272[i] = &l_81;
    }
    return (*p_40);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_70[i].f0, "g_70[i].f0", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_71[i][j][k].f0, "g_71[i][j][k].f0", print_hash_value);
                transparent_crc(g_71[i][j][k].f2, "g_71[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_88[i][j][k], "g_88[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_303[i], "g_303[i]", print_hash_value);

    }
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_356[i][j][k], "g_356[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_420[i], "g_420[i]", print_hash_value);

    }
    transparent_crc(g_475.f0, "g_475.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_502[i], "g_502[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_554[i][j], "g_554[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_905[i][j], "g_905[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_911, "g_911", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_998[i][j], "g_998[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1092, "g_1092", print_hash_value);
    transparent_crc(g_1108, "g_1108", print_hash_value);
    transparent_crc(g_1195, "g_1195", print_hash_value);
    transparent_crc(g_1285.f0, "g_1285.f0", print_hash_value);
    transparent_crc(g_1285.f2, "g_1285.f2", print_hash_value);
    transparent_crc(g_1287.f0, "g_1287.f0", print_hash_value);
    transparent_crc(g_1287.f2, "g_1287.f2", print_hash_value);
    transparent_crc(g_1489, "g_1489", print_hash_value);
    transparent_crc(g_1519, "g_1519", print_hash_value);
    transparent_crc(g_1614.f0, "g_1614.f0", print_hash_value);
    transparent_crc(g_1725, "g_1725", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1739[i], "g_1739[i]", print_hash_value);

    }
    transparent_crc(g_1782, "g_1782", print_hash_value);
    transparent_crc(g_1783, "g_1783", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1821[i], "g_1821[i]", print_hash_value);

    }
    transparent_crc(g_1921.f0, "g_1921.f0", print_hash_value);
    transparent_crc(g_1943, "g_1943", print_hash_value);
    transparent_crc(g_1952, "g_1952", print_hash_value);
    transparent_crc(g_2113, "g_2113", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
