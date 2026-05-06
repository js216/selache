// SPDX-License-Identifier: MIT
// cctest_csmith_ca355d40.c --- cctest case csmith_ca355d40 (csmith seed 3392494912)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9bcdaf76 */

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

// Options:   -s 3392494912 -o /tmp/csmith_gen_arp1aoi3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   signed f0 : 14;
   signed f1 : 11;
   const unsigned f2 : 1;
};
#pragma pack(pop)

union U1 {
   const int8_t  f0;
   const int8_t  f1;
};

union U2 {
   uint64_t  f0;
   uint32_t  f1;
   uint8_t  f2;
};

union U3 {
   uint8_t  f0;
   const int64_t  f1;
   uint64_t  f2;
};

union U4 {
   int32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   const uint64_t  f3;
};


static int8_t g_2 = 0xFEL;
static uint32_t g_19 = 1UL;
static uint32_t g_41 = 4294967288UL;
static union U2 g_61 = {0UL};
static int16_t g_62 = (-1L);
static int32_t g_66 = 1L;
static int16_t g_69 = (-10L);
static int32_t g_70[3][2] = {{3L,3L},{3L,3L},{3L,3L}};
static uint64_t g_74 = 18446744073709551613UL;
static int16_t g_90 = 0x065CL;
static uint64_t g_114 = 0x4EFE8F334EEA40FDLL;
static struct S0 g_137 = {121,24,0};
static union U4 g_182[5] = {{-9L},{-9L},{-9L},{-9L},{-9L}};
static uint64_t g_237 = 18446744073709551615UL;



static int32_t  func_1(void);
static union U4  func_3(uint8_t  p_4, uint16_t  p_5, uint16_t  p_6, int16_t  p_7);
static int64_t  func_13(uint16_t  p_14, union U1  p_15, uint32_t  p_16);
static union U2  func_26(uint32_t  p_27, int8_t  p_28, int32_t  p_29, struct S0  p_30, const int32_t  p_31);




static int32_t  func_1(void)
{ 
    int32_t l_8 = 0L;
    const int8_t l_183[5] = {0xA7L,0xA7L,0xA7L,0xA7L,0xA7L};
    int32_t l_184 = 0x8ABCB019L;
    int i;
    l_184 = ((g_2 ^ (((((func_3((l_8 , g_2), g_2, l_8, l_8) , 0xA2L) == l_183[3]) , l_183[3]) ^ l_183[3]) > g_70[1][1])) == 0x65L);
    g_137.f0 &= (safe_mul_func_int8_t_s_s(((l_184 = (safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(252UL, l_183[0])), (safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((-1L), (safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(g_74, l_183[3])) != 0x0A0F2B41L), 0UL)))), 14))))) <= g_66), 3UL));
    for (g_61.f2 = (-18); (g_61.f2 == 51); g_61.f2 = safe_add_func_uint8_t_u_u(g_61.f2, 1))
    { 
        uint32_t l_205 = 0xF2194A6FL;
        int64_t l_226 = 0x37CDCD6FD788535DLL;
        int32_t l_228 = (-5L);
        for (g_114 = 0; (g_114 != 48); g_114 = safe_add_func_int16_t_s_s(g_114, 2))
        { 
            for (g_74 = 0; (g_74 <= 1); g_74 += 1)
            { 
                int i, j;
                return g_70[(g_74 + 1)][g_74];
            }
        }
        if (((safe_div_func_uint16_t_u_u((((g_137.f0 = ((((l_205 < (((safe_rshift_func_int16_t_s_s(g_61.f2, l_205)) >= g_182[1].f1) >= 18446744073709551610UL)) && 4294967291UL) != 0x767B023839C74932LL) , g_114)) == g_61.f2) & l_205), g_137.f1)) != g_19))
        { 
            int32_t l_225[1];
            int32_t l_227 = (-1L);
            int i;
            for (i = 0; i < 1; i++)
                l_225[i] = (-1L);
            g_66 = (l_8 <= ((safe_rshift_func_int8_t_s_u(l_183[4], 0)) == 2L));
            l_228 = (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(g_41, (g_2 | (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((~g_182[1].f2) < (g_114 | g_41)) && l_205), 5UL)), 15)), g_61.f2)) , l_183[3]) > l_225[0]), 5)) <= 9L), l_226))))) | l_227), l_226));
        }
        else
        { 
            union U1 l_229 = {-1L};
            l_184 = (l_229 , (~(safe_add_func_uint64_t_u_u((0x872CB338217DE881LL < 0x7A1799D2B88D7C33LL), (g_19 , l_205)))));
            l_184 = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((g_237 = 0UL), (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((((l_228 &= (safe_rshift_func_uint8_t_u_u((+(0xBFA4L <= (g_137.f0 >= l_229.f1))), g_41))) <= g_70[0][1]) && l_228) , l_229.f1), l_183[4])) && g_182[1].f1), (-9L))))), g_2));
            for (g_114 = 0; (g_114 > 31); ++g_114)
            { 
                uint8_t l_249[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_249[i][j] = 0xF7L;
                }
                g_66 = l_249[0][1];
                return l_228;
            }
        }
        if (l_183[4])
            break;
    }
    return g_90;
}



static union U4  func_3(uint8_t  p_4, uint16_t  p_5, uint16_t  p_6, int16_t  p_7)
{ 
    uint8_t l_11[4] = {1UL,1UL,1UL,1UL};
    uint64_t l_12[2][4] = {{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL}};
    int32_t l_17 = (-1L);
    union U1 l_18 = {-5L};
    struct S0 l_39[1] = {{-71,-11,0}};
    int32_t l_72 = 0L;
    int32_t l_73 = 1L;
    int16_t l_125 = 1L;
    union U4 l_164 = {0xACCF6E19L};
    uint32_t l_175 = 18446744073709551615UL;
    int i, j;
    if (((safe_mul_func_int16_t_s_s((((l_11[2] ^ (0x7AF2C9A130DFDDAELL || l_12[0][3])) | (func_13(((l_17 = 0x1EE4CFF15CC7C44DLL) <= 5UL), l_18, g_2) || 0x058BBE58ED0BD2F2LL)) , l_18.f0), g_2)) > 0xFA898CBDB62B2FAALL))
    { 
        int64_t l_38[2];
        int i;
        for (i = 0; i < 2; i++)
            l_38[i] = 0x56A759F32F520A04LL;
        g_62 = (safe_add_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u(((func_26(((safe_rshift_func_uint8_t_u_u((l_17 = (l_18 , (safe_add_func_uint16_t_u_u(p_6, ((safe_mod_func_uint32_t_u_u(((g_19 == l_38[0]) <= g_19), p_7)) > 0xAB19F88DD0BB265DLL))))), 0)) , p_5), l_18.f0, g_2, l_39[0], g_19) , 0UL) & l_39[0].f1), l_38[0])) <= l_18.f0), 0x358B9E0795B172C6LL));
    }
    else
    { 
        int64_t l_67 = 0x93F16A1EA5693CDBLL;
        int32_t l_71 = 0x224F168EL;
        for (l_17 = 0; (l_17 < (-24)); --l_17)
        { 
            int8_t l_65[3][4][5] = {{{(-4L),1L,(-4L),1L,(-4L)},{0x8FL,0x8FL,0x8FL,0x8FL,0x8FL},{(-4L),1L,(-4L),1L,(-4L)},{0x8FL,0x8FL,0x8FL,0x8FL,0x8FL}},{{(-4L),1L,(-4L),1L,(-4L)},{0x8FL,0x8FL,0x8FL,0x8FL,0x8FL},{(-4L),1L,(-4L),1L,(-4L)},{0x8FL,0x8FL,0x8FL,0x8FL,0x8FL}},{{(-4L),1L,(-4L),1L,(-4L)},{0x8FL,0x8FL,0x8FL,0x8FL,0x8FL},{(-4L),1L,(-4L),1L,(-4L)},{0x8FL,0x8FL,0x8FL,0x8FL,0x8FL}}};
            int32_t l_68 = (-4L);
            struct S0 l_83 = {-106,0,0};
            int i, j, k;
            l_65[2][2][1] = g_62;
            --g_74;
            l_68 = (safe_sub_func_uint64_t_u_u((g_74 = g_70[1][1]), (safe_rshift_func_uint8_t_u_u(250UL, (safe_add_func_int64_t_s_s((((l_83 , (((safe_mul_func_int16_t_s_s(((((--g_61.f1) && g_61.f2) != p_4) >= 0x1293870B5DC3D349LL), p_4)) & g_41) >= p_6)) || 5UL) ^ l_68), l_65[1][2][0]))))));
        }
    }
    g_66 = 0x2808108BL;
    if (((safe_lshift_func_uint16_t_u_s((g_90 = l_12[0][3]), 7)) >= (((--p_4) , l_18) , l_72)))
    { 
        int32_t l_109 = 0L;
        int32_t l_121 = 3L;
        g_66 = ((safe_div_func_uint64_t_u_u((l_18 , (++g_74)), (safe_add_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((g_66 , ((safe_mul_func_uint16_t_u_u(g_62, (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(g_70[1][1], g_61.f2)), 8L)) || 0UL) & (-10L)))) & 0x7DF3L)), 0x30L)), p_4)) <= 0x35E5L), p_5)))) & l_109);
        l_39[0].f1 |= (safe_mul_func_uint16_t_u_u(g_61.f2, (safe_lshift_func_int8_t_s_s((((((g_114 = (l_73 <= 0UL)) ^ 249UL) <= 0xD168L) & 0xB4ECL) >= l_109), 0))));
        l_121 = (((((safe_lshift_func_int16_t_s_s(0x389DL, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((l_18 , (l_109 = p_7)) , p_6), 11)), 0x467E2B5FL)))) >= 0xAE3508C96F5F53E4LL) < g_41) < 7L) | (-7L));
    }
    else
    { 
        union U3 l_122 = {0x16L};
        int32_t l_126 = 8L;
        int32_t l_131 = 0x727A2C14L;
        uint32_t l_132 = 0x7E664DD2L;
        uint64_t l_147 = 0x534C0AFD8232EDDALL;
        uint64_t l_156[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        int i;
        l_126 ^= (g_66 < ((((p_4 , (((l_122 , (((safe_rshift_func_uint16_t_u_s(l_125, 6)) , 65535UL) , l_18.f1)) < g_69) <= g_19)) > l_122.f0) > 0x2B6A99605DBDBD1FLL) == g_114));
        if (((safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((l_132++) > (safe_div_func_uint8_t_u_u(0UL, (g_137 , (safe_mul_func_uint16_t_u_u((p_5 >= ((safe_add_func_int64_t_s_s((((safe_mod_func_int32_t_s_s((((l_131 ^ g_61.f1) <= 0UL) != l_122.f0), g_62)) > l_126) < l_126), l_131)) < 0UL)), l_39[0].f2)))))), l_125)), g_70[1][0])) != g_90))
        { 
            const int16_t l_161 = 1L;
            int32_t l_163 = 0x6350F6E7L;
            if ((g_137.f1 = (l_17 &= ((l_125 , p_5) & ((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s(0x57L)), l_147)) <= g_74)))))
            { 
                int32_t l_155 = 0x4A88B036L;
                l_156[0] = (safe_unary_minus_func_int32_t_s((safe_sub_func_int32_t_s_s(g_114, (safe_mod_func_uint8_t_u_u((p_5 , ((((safe_div_func_int8_t_s_s(((((g_69 , (((p_4 & l_122.f0) <= g_114) , 0x1CL)) | g_66) || g_61.f2) & g_70[1][1]), 255UL)) || l_155) <= 1L) != 0L)), l_11[2]))))));
            }
            else
            { 
                uint16_t l_162[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_162[i] = 0x7905L;
                l_163 = (l_162[1] ^= (p_4 > (safe_div_func_uint16_t_u_u((g_137 , p_7), (safe_div_func_int8_t_s_s((0x6FL > l_161), 0x98L))))));
                return l_164;
            }
        }
        else
        { 
            struct S0 l_170[3] = {{-18,6,0},{-18,6,0},{-18,6,0}};
            int i;
            for (g_69 = 12; (g_69 >= 14); g_69++)
            { 
                uint64_t l_167 = 18446744073709551606UL;
                l_167++;
            }
            l_170[2].f0 = (l_12[0][1] && ((g_137 , l_170[2]) , (6UL <= 0x5AL)));
            for (l_164.f1 = 0; (l_164.f1 > 20); l_164.f1 = safe_add_func_int8_t_s_s(l_164.f1, 7))
            { 
                if (g_74)
                    break;
                if (p_4)
                    continue;
                g_137.f0 &= (l_131 = ((safe_lshift_func_int16_t_s_u(l_175, 9)) != (g_61.f2 != (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(p_6, 0x43CDL)) <= g_2), 0x1E0CL)), g_19)))));
            }
        }
    }
    return g_182[1];
}



static int64_t  func_13(uint16_t  p_14, union U1  p_15, uint32_t  p_16)
{ 
    g_19--;
    return p_15.f1;
}



static union U2  func_26(uint32_t  p_27, int8_t  p_28, int32_t  p_29, struct S0  p_30, const int32_t  p_31)
{ 
    int32_t l_40 = 1L;
    int32_t l_55 = 0L;
    int32_t l_56 = (-1L);
    int32_t l_57 = 0xEC8B24CEL;
    int32_t l_58 = 5L;
    int32_t l_59 = 0x19D5C01CL;
    int32_t l_60 = 5L;
    g_41--;
    l_60 = (((l_59 = (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(p_27, 1)) <= (safe_rshift_func_uint8_t_u_s(((l_58 ^= (safe_unary_minus_func_uint8_t_u((((safe_mod_func_uint8_t_u_u(((l_57 = (g_41 & ((l_56 = (safe_div_func_int16_t_s_s(l_40, (l_55 = (-1L))))) <= p_30.f1))) == 0xE4L), g_2)) >= 0xD942A26B13122E3BLL) != (-7L))))) & p_30.f2), l_40))), p_30.f1))) > l_40) , l_55);
    return g_61;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_61.f2, "g_61.f2", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_70[i][j], "g_70[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_137.f0, "g_137.f0", print_hash_value);
    transparent_crc(g_137.f1, "g_137.f1", print_hash_value);
    transparent_crc(g_137.f2, "g_137.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_182[i].f0, "g_182[i].f0", print_hash_value);
        transparent_crc(g_182[i].f1, "g_182[i].f1", print_hash_value);
        transparent_crc(g_182[i].f2, "g_182[i].f2", print_hash_value);

    }
    transparent_crc(g_237, "g_237", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
