// SPDX-License-Identifier: MIT
// cctest_csmith_50552fb2.c --- cctest case csmith_50552fb2 (csmith seed 1347760050)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa1103532 */

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

// Options:   -s 1347760050 -o /tmp/csmith_gen_hiykundb/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int64_t  f0;
   int8_t  f1;
};
#pragma pack(pop)

struct S1 {
   int8_t  f0;
   int32_t  f1;
};

struct S2 {
   const int8_t  f0;
   const struct S1  f1;
   const struct S0  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S4 {
   int16_t  f0;
   int32_t  f1;
   const int16_t  f2;
};
#pragma pack(pop)

union U5 {
   struct S2  f0;
   int8_t  f1;
   const uint32_t  f2;
   struct S0  f3;
};


static int32_t g_2 = 0x51EA66E5L;
static int32_t g_5 = 0x3D4E677BL;
static uint16_t g_21 = 0xF5EBL;
static struct S1 g_36 = {0L,0xD8607F47L};
static uint32_t g_56 = 0x4A13735CL;
static int32_t g_74 = (-1L);
static int16_t g_83 = 0L;
static uint64_t g_94 = 18446744073709551612UL;
static struct S2 g_99[1][5] = {{{0x92L,{-6L,0x38E7D484L},{-3L,0xF4L}},{0x92L,{-6L,0x38E7D484L},{-3L,0xF4L}},{0x92L,{-6L,0x38E7D484L},{-3L,0xF4L}},{0x92L,{-6L,0x38E7D484L},{-3L,0xF4L}},{0x92L,{-6L,0x38E7D484L},{-3L,0xF4L}}}};
static uint32_t g_103[5][4][4] = {{{9UL,0x62FE7C9DL,8UL,8UL},{0x828D0E34L,0x828D0E34L,0UL,4UL},{0x3F81597FL,1UL,0x6B992664L,0xEFF97477L},{0UL,0x5E0DC072L,0UL,0x6B992664L}},{{0x57A5127AL,0x5E0DC072L,6UL,0xEFF97477L},{0x5E0DC072L,1UL,0x87636F93L,4UL},{0UL,0x828D0E34L,0x3F81597FL,8UL},{6UL,0x62FE7C9DL,18446744073709551609UL,0x87636F93L}},{{1UL,1UL,1UL,0x828D0E34L},{0x87636F93L,0x81ACCAB4L,9UL,18446744073709551615UL},{0UL,0x62FE7C9DL,18446744073709551610UL,0x5E0DC072L},{0x078023CBL,0x87636F93L,18446744073709551610UL,18446744073709551606UL}},{{0x04930E3AL,0x57A5127AL,0x87636F93L,0x9DD6F46CL},{0x2726E94FL,1UL,0x81ACCAB4L,0x04930E3AL},{0x81ACCAB4L,0x04930E3AL,0x28433334L,4UL},{18446744073709551609UL,18446744073709551606UL,18446744073709551606UL,18446744073709551609UL}},{{18446744073709551615UL,0x6B992664L,0x2726E94FL,0xA404EFFBL},{0UL,0x28433334L,18446744073709551609UL,1UL},{0x62FE7C9DL,0x828D0E34L,0x04930E3AL,1UL},{9UL,0x28433334L,6UL,0xA404EFFBL}}};
static uint16_t g_104 = 0xA2FAL;
static int32_t g_107 = 1L;
static uint8_t g_108 = 5UL;
static union U5 g_115 = {{1L,{-4L,1L},{0x4E9E4B147B71623CLL,0x27L}}};
static uint32_t g_171[5][4][4] = {{{0x663907EEL,0x99FB6E15L,4294967295UL,0x02C09428L},{0xA02258E7L,1UL,0x7F8201C6L,0x7F8201C6L},{1UL,1UL,4294967291UL,0xEF68449CL},{1UL,4294967293UL,0xD46132A9L,4294967295UL}},{{0xEF68449CL,0x153984BCL,0xA685A1DFL,0xD46132A9L},{4294967291UL,0x153984BCL,4294967291UL,4294967295UL},{0x153984BCL,4294967293UL,1UL,0xEF68449CL},{2UL,1UL,4294967292UL,0x7F8201C6L}},{{0xA685A1DFL,1UL,9UL,0x02C09428L},{4294967292UL,0x99FB6E15L,0x0AF01A52L,0x99FB6E15L},{0xD46132A9L,0xEF68449CL,0x02C09428L,0x153984BCL},{0x43EC499DL,0x02C09428L,1UL,0xC60D7F46L}},{{0x99FB6E15L,4294967291UL,4294967291UL,0xA02258E7L},{0x99FB6E15L,1UL,1UL,4294967291UL},{0x43EC499DL,0xA02258E7L,0x02C09428L,4294967293UL},{0xD46132A9L,1UL,0x0AF01A52L,9UL}},{{4294967292UL,1UL,9UL,0xA36B31EAL},{0xA685A1DFL,4294967292UL,4294967292UL,0xA685A1DFL},{2UL,4294967295UL,1UL,0x26DF7C8CL},{0x153984BCL,0x76D8C331L,4294967291UL,0x6D5B373BL}}};
static struct S4 g_175 = {0x0B37L,0x58CCBDE4L,6L};



static struct S0  func_1(void);
static int64_t  func_9(int16_t  p_10);
static uint8_t  func_28(int8_t  p_29, struct S2  p_30, struct S4  p_31, uint32_t  p_32, struct S0  p_33);
static uint8_t  func_34(struct S1  p_35);




static struct S0  func_1(void)
{ 
    int8_t l_20[1][2];
    uint32_t l_195[2][1];
    int32_t l_197 = 0x830C1190L;
    struct S0 l_211[5][3] = {{{1L,0xD0L},{0x7FE0C210D05ABF9FLL,0xA7L},{1L,0xD0L}},{{1L,0xD0L},{0x7FE0C210D05ABF9FLL,0xA7L},{1L,0xD0L}},{{1L,0xD0L},{0x7FE0C210D05ABF9FLL,0xA7L},{1L,0xD0L}},{{1L,0xD0L},{0x7FE0C210D05ABF9FLL,0xA7L},{1L,0xD0L}},{{1L,0xD0L},{0x7FE0C210D05ABF9FLL,0xA7L},{1L,0xD0L}}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_20[i][j] = (-1L);
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_195[i][j] = 0xD1659E81L;
    }
    for (g_2 = 0; (g_2 == 11); ++g_2)
    { 
        int32_t l_18[4][5];
        uint32_t l_170 = 4294967289UL;
        int32_t l_180 = 0x08BB1C39L;
        struct S0 l_181 = {0x8A7D9E7F87ACA667LL,0x51L};
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_18[i][j] = 0L;
        }
        for (g_5 = 0; (g_5 < 12); g_5++)
        { 
            int32_t l_17 = 1L;
            int32_t l_19 = 1L;
            struct S4 l_130 = {8L,4L,0xAEDBL};
            struct S0 l_131 = {1L,5L};
            l_19 = ((safe_unary_minus_func_uint32_t_u((func_9((g_171[2][0][2] = (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((g_83 &= (safe_add_func_int64_t_s_s(((++g_21) , (((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((-6L), func_28((func_34(g_36) == (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((g_99[0][4].f1.f1 > g_115.f0.f2.f1), g_115.f0.f0)), 2L))), g_99[0][0], l_130, g_115.f0.f0, l_131))) != l_18[1][1]), l_20[0][0])) == l_20[0][0]) , l_19)), 8UL))), l_170)), g_99[0][4].f1.f1)))) != 0xE39278E08496B461LL))) >= g_99[0][4].f0);
            l_180 = 0x21AC8522L;
        }
        return l_181;
    }
    for (g_108 = 0; (g_108 <= 0); g_108 += 1)
    { 
        uint64_t l_187 = 0xFFE510EADCF1EF60LL;
        if ((g_99[0][4].f1.f1 ^ (g_171[2][0][2] = 0x05CBCC48L)))
        { 
            uint32_t l_196 = 0UL;
            uint16_t l_210 = 7UL;
            int32_t l_215 = 0xC25D7B92L;
            int64_t l_216[3][1];
            struct S1 l_217 = {1L,8L};
            uint16_t l_222 = 0x3C8AL;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_216[i][j] = (-1L);
            }
            g_2 &= g_5;
            l_197 |= (safe_add_func_uint8_t_u_u((!(g_94 |= (((safe_add_func_uint32_t_u_u((l_187 != (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int32_t_s((safe_mod_func_int16_t_s_s((g_171[2][0][2] && 0xFF26L), (g_175.f0 = (((safe_lshift_func_int16_t_s_s(l_20[0][0], 3)) <= 0x79L) , l_20[0][0])))))) | (-9L)), l_195[0][0]))), g_99[0][4].f2.f1)) != g_99[0][4].f1.f0) != 0xE759L))), l_196));
            if ((safe_mod_func_uint8_t_u_u((l_197 = (g_99[0][4].f1.f0 && (((safe_div_func_uint32_t_u_u((g_103[2][0][1] ^ 3UL), (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(l_196, l_187)), l_210)) == l_187) > l_195[1][0]) ^ g_99[0][4].f1.f0), l_187)), 14)))) < l_197) , 0xC42D5961L))), 255UL)))
            { 
                g_2 = (l_211[4][2] , (safe_div_func_int16_t_s_s(((((+l_196) ^ ((g_83 ^ 8L) != l_215)) <= g_36.f1) <= l_196), 0x74F7L)));
                l_197 = (l_216[0][0] , g_175.f0);
                g_36 = l_217;
            }
            else
            { 
                g_5 = (((g_99[0][4].f2.f1 < g_99[0][4].f2.f0) , ((g_36.f1 || (safe_div_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((l_187 & (-4L)), l_20[0][0])), l_222))) & 0xD4D6F5E0L)) , (-1L));
            }
        }
        else
        { 
            uint8_t l_223[3][2];
            int32_t l_228 = (-1L);
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_223[i][j] = 0UL;
            }
            g_2 = g_103[0][2][3];
            for (g_175.f1 = 3; (g_175.f1 >= 0); g_175.f1 -= 1)
            { 
                int i, j;
                l_223[2][1] |= l_20[g_108][g_108];
            }
            for (g_74 = 0; (g_74 <= 0); g_74 += 1)
            { 
                int i, j;
                g_5 ^= (((--g_104) & ((safe_add_func_uint32_t_u_u((l_228 = l_20[g_108][(g_108 + 1)]), (g_171[2][0][2] = ((g_115.f0.f0 < l_187) == ((safe_mul_func_int16_t_s_s(((safe_div_func_int8_t_s_s((l_187 == 0x7FL), 0x17L)) ^ l_197), g_175.f2)) <= 0x6981C5EEL))))) ^ g_115.f0.f0)) != l_223[1][1]);
            }
        }
        for (g_36.f0 = 0; (g_36.f0 <= 0); g_36.f0 += 1)
        { 
            for (g_94 = 0; (g_94 <= 3); g_94 += 1)
            { 
                int32_t l_233 = 0xA204FFACL;
                int i, j, k;
                l_233 = g_171[g_36.f0][(g_36.f0 + 1)][(g_36.f0 + 2)];
            }
            for (g_74 = 0; (g_74 <= 3); g_74 += 1)
            { 
                struct S0 l_234 = {0x77E85B639F850FDDLL,1L};
                return l_234;
            }
        }
    }
    return g_115.f0.f2;
}



static int64_t  func_9(int16_t  p_10)
{ 
    int64_t l_178 = 0xC95D819CC642A9DDLL;
    int32_t l_179[5][4][4] = {{{8L,0x527C6C95L,0L,1L},{0x889E10CEL,8L,0x889E10CEL,0x9ADD7983L},{0L,(-5L),5L,0x527C6C95L},{1L,0x889E10CEL,1L,(-5L)}},{{0x8B3E4906L,6L,1L,0x6361B46BL},{1L,(-1L),5L,5L},{0L,0L,0x889E10CEL,0x8B3E4906L},{0x889E10CEL,0x8B3E4906L,0L,8L}},{{8L,0x7DFDD691L,0L,0L},{3L,0x7DFDD691L,0L,8L},{0x7DFDD691L,0x8B3E4906L,0x9ADD7983L,0x8B3E4906L},{9L,0L,(-5L),5L}},{{0x9ADD7983L,(-1L),6L,0x6361B46BL},{5L,6L,0x7DFDD691L,(-5L)},{5L,9L,1L,0L},{0x889E10CEL,0L,0L,0x889E10CEL}},{{0x527C6C95L,6L,0x889E10CEL,5L},{0x8B3E4906L,0L,8L,1L},{(-9L),0L,3L,1L},{6L,0L,0x7DFDD691L,5L}}};
    int i, j, k;
    l_179[3][3][2] = ((safe_add_func_int16_t_s_s((~(((g_94 , g_175) , (safe_div_func_int16_t_s_s(l_178, p_10))) > (-5L))), g_171[0][0][0])) , p_10);
    return g_21;
}



static uint8_t  func_28(int8_t  p_29, struct S2  p_30, struct S4  p_31, uint32_t  p_32, struct S0  p_33)
{ 
    const uint32_t l_141[5] = {4294967289UL,4294967289UL,4294967289UL,4294967289UL,4294967289UL};
    int32_t l_142[2][5] = {{0x7A280F67L,0x59E2955AL,0L,0L,0x59E2955AL},{0x7A280F67L,0x59E2955AL,0L,0L,0x59E2955AL}};
    int32_t l_143 = 0x1E669498L;
    int32_t l_144 = 1L;
    struct S1 l_147 = {0x45L,0x570B09EDL};
    int i, j;
lbl_145:
    l_144 |= (p_30.f2.f0 > (safe_div_func_int8_t_s_s((l_143 = (safe_mul_func_int8_t_s_s((g_115 , (l_142[1][0] = (safe_sub_func_uint32_t_u_u((~(safe_mod_func_int32_t_s_s((0x992EL && l_141[1]), l_141[1]))), p_30.f2.f0)))), (-1L)))), l_141[2])));
    if (((l_144 == g_99[0][4].f2.f0) > (l_144 == l_141[4])))
    { 
        struct S1 l_146 = {0x26L,0L};
        if (l_144)
            goto lbl_145;
        l_147 = l_146;
    }
    else
    { 
        int8_t l_168 = 0x3FL;
        int32_t l_169 = 0x280F0832L;
        l_169 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((p_31 , (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u((g_108 &= (((safe_add_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((p_30.f2.f0 >= 4UL) > (0xA90BL <= 0x2F53L)), 0x18B1E2C77FF3C2B3LL)), l_144)) | p_31.f0) | p_30.f2.f1)), l_168)) , g_99[0][4].f1.f0) < 8L) < g_115.f0.f1.f1), l_168)) && g_99[0][4].f2.f1), 2)) || p_33.f1), l_168)) >= g_115.f0.f2.f0) & l_168), 3))), 5)), 0xD9937AC4L));
    }
    return l_141[4];
}



static uint8_t  func_34(struct S1  p_35)
{ 
    const int8_t l_41 = 0L;
    union U5 l_48[3][1][3] = {{{{{-5L,{1L,0xAACC702BL},{0xBDDDD5D57D38C461LL,1L}}},{{-5L,{1L,0xAACC702BL},{0xBDDDD5D57D38C461LL,1L}}},{{-5L,{1L,0xAACC702BL},{0xBDDDD5D57D38C461LL,1L}}}}},{{{{0xD6L,{-3L,0x58E56A96L},{7L,0xBEL}}},{{0xD6L,{-3L,0x58E56A96L},{7L,0xBEL}}},{{0xD6L,{-3L,0x58E56A96L},{7L,0xBEL}}}}},{{{{-5L,{1L,0xAACC702BL},{0xBDDDD5D57D38C461LL,1L}}},{{-5L,{1L,0xAACC702BL},{0xBDDDD5D57D38C461LL,1L}}},{{-5L,{1L,0xAACC702BL},{0xBDDDD5D57D38C461LL,1L}}}}}};
    int32_t l_49 = 0x38A83A56L;
    uint16_t l_84 = 65530UL;
    int i, j, k;
lbl_80:
    for (g_21 = 7; (g_21 <= 22); g_21++)
    { 
        struct S1 l_53 = {0x5BL,0xF732BC12L};
        int32_t l_61 = 0x8451CF61L;
        uint32_t l_73 = 0x7B06E2AFL;
        if ((safe_mod_func_uint16_t_u_u(((l_41 | (((safe_sub_func_uint16_t_u_u((0x71603728L == (l_49 ^= (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_35.f0, (l_48[1][0][2] , 0x4656E2E3L))), l_48[1][0][2].f0.f0)))), (-1L))) & 0x7DC4L) == 1L)) && l_41), l_48[1][0][2].f0.f1.f0)))
        { 
            uint32_t l_52 = 0UL;
            struct S1 l_58 = {-1L,0L};
            if ((safe_rshift_func_uint16_t_u_u(l_52, p_35.f0)))
            { 
                int32_t l_57 = 0xE07B88C8L;
                l_53 = p_35;
                l_57 = ((1L == p_35.f0) && (safe_mul_func_int16_t_s_s((g_56 = (0x89L | (p_35.f0 |= (1L | p_35.f1)))), 0UL)));
            }
            else
            { 
                l_58 = g_36;
                return g_36.f1;
            }
            if (p_35.f1)
                continue;
        }
        else
        { 
            int8_t l_59[4][2][1] = {{{0L},{(-7L)}},{{0L},{(-7L)}},{{0L},{(-7L)}},{{0L},{(-7L)}}};
            struct S2 l_60 = {-4L,{0x36L,0L},{-1L,0x89L}};
            int32_t l_75 = 1L;
            int i, j, k;
            for (p_35.f0 = 0; (p_35.f0 <= 0); p_35.f0 += 1)
            { 
                int8_t l_72 = 0L;
                l_61 = (l_48[1][0][2].f0 , (((p_35.f1 < ((l_60 , l_48[1][0][2].f0.f1) , p_35.f1)) <= g_2) >= p_35.f0));
                l_75 |= ((g_74 &= ((safe_div_func_uint16_t_u_u((((safe_div_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((g_36.f1 != (((249UL != (((((safe_sub_func_uint64_t_u_u(0xA454D88F4020D70FLL, p_35.f1)) != (-6L)) & g_5) || g_56) && 18446744073709551615UL)) & g_56) != 6L)) >= p_35.f1), l_72)), 0xBA83E1A6L)) <= l_73) || g_5), l_72)) == l_60.f1.f0)) & p_35.f0);
            }
        }
    }
    for (l_49 = 25; (l_49 < (-12)); l_49--)
    { 
        for (p_35.f1 = (-11); (p_35.f1 == (-3)); p_35.f1 = safe_add_func_int32_t_s_s(p_35.f1, 5))
        { 
            if (g_5)
                goto lbl_80;
        }
    }
    if (l_48[1][0][2].f0.f0)
    { 
        int64_t l_81[2];
        int32_t l_82 = 1L;
        int32_t l_93 = 1L;
        struct S1 l_117 = {0x8FL,-2L};
        int i;
        for (i = 0; i < 2; i++)
            l_81[i] = 0x54D63FF5A50E62F1LL;
        --l_84;
        for (l_49 = 1; (l_49 >= 0); l_49 -= 1)
        { 
            const union U5 l_116 = {{0x1AL,{0L,0xF678E9A5L},{-2L,-10L}}};
            int i;
            if (((safe_sub_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(((((((1L ^ (safe_lshift_func_uint8_t_u_u(l_81[l_49], (((l_81[1] , 0x96L) != 0L) != 0x18L)))) || g_2) != g_5) | 9L) < g_56) ^ l_81[l_49]), p_35.f1)) < g_21), l_81[l_49])) || g_74))
            { 
                int16_t l_102 = (-1L);
                --g_94;
                g_103[0][2][3] = (safe_add_func_int32_t_s_s((((0x6DC7L < (g_99[0][4] , g_21)) != (safe_mul_func_uint8_t_u_u(l_102, 0x87L))) <= g_99[0][4].f1.f1), p_35.f1));
                --g_104;
            }
            else
            { 
                g_108++;
                return g_5;
            }
            g_107 ^= (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((0xC894L < ((g_115 , l_41) > ((((g_108 = (l_116 , l_116.f0.f2.f1)) < l_48[1][0][2].f0.f2.f0) ^ l_82) <= 0x39L))) > p_35.f0) , l_81[0]), 3)), l_48[1][0][2].f0.f1.f1));
        }
        g_36 = l_117;
    }
    else
    { 
        uint32_t l_118 = 0x2934973AL;
        int32_t l_125 = 0L;
        --l_118;
        l_125 = ((l_49 = p_35.f0) >= ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((g_99[0][4].f2.f0 > g_94), (p_35.f1 != 0xD700L))) , 0x0EL), g_115.f0.f2.f0)) | l_41));
    }
    return p_35.f1;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_99[i][j].f0, "g_99[i][j].f0", print_hash_value);
            transparent_crc(g_99[i][j].f1.f0, "g_99[i][j].f1.f0", print_hash_value);
            transparent_crc(g_99[i][j].f1.f1, "g_99[i][j].f1.f1", print_hash_value);
            transparent_crc(g_99[i][j].f2.f0, "g_99[i][j].f2.f0", print_hash_value);
            transparent_crc(g_99[i][j].f2.f1, "g_99[i][j].f2.f1", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_103[i][j][k], "g_103[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_115.f0.f0, "g_115.f0.f0", print_hash_value);
    transparent_crc(g_115.f0.f1.f0, "g_115.f0.f1.f0", print_hash_value);
    transparent_crc(g_115.f0.f1.f1, "g_115.f0.f1.f1", print_hash_value);
    transparent_crc(g_115.f0.f2.f0, "g_115.f0.f2.f0", print_hash_value);
    transparent_crc(g_115.f0.f2.f1, "g_115.f0.f2.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_171[i][j][k], "g_171[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_175.f0, "g_175.f0", print_hash_value);
    transparent_crc(g_175.f1, "g_175.f1", print_hash_value);
    transparent_crc(g_175.f2, "g_175.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
