// SPDX-License-Identifier: MIT
// cctest_csmith_d504e289.c --- cctest case csmith_d504e289 (csmith seed 3573867145)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa27d87a3 */

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

// Options:   -s 3573867145 -o /tmp/csmith_gen_shbp36e4/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const unsigned f0 : 3;
   unsigned f1 : 14;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   signed f0 : 26;
   uint32_t  f1;
   uint8_t  f2;
};
#pragma pack(pop)

union U2 {
   uint32_t  f0;
   int64_t  f1;
   const uint32_t  f2;
   const int16_t  f3;
};

union U3 {
   int64_t  f0;
};

union U4 {
   int8_t  f0;
};


static int32_t g_2 = 0xF6C74AA0L;
static union U4 g_56 = {-1L};
static union U4 g_58 = {-1L};
static union U4 g_59 = {0x6BL};
static union U4 g_60 = {-10L};
static union U4 *g_62 = &g_56;
static union U4 **g_61 = &g_62;
static uint32_t g_69 = 0x6575E0ADL;
static const union U2 g_72 = {4294967293UL};
static int32_t g_89 = (-3L);
static int32_t g_92 = (-10L);
static int32_t *g_93 = &g_92;
static struct S0 g_98 = {1,88};
static uint64_t g_120[7] = {18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551615UL};
static struct S1 g_121 = {7303,4294967290UL,0x41L};
static uint8_t g_128[2] = {0xCFL,0xCFL};
static union U3 *g_131 = (void*)0;
static union U3 g_135 = {1L};
static union U3 *g_134 = &g_135;
static uint32_t g_140 = 4294967292UL;
static uint64_t g_160 = 1UL;
static int16_t g_167 = 0x1673L;
static int16_t g_177 = 0x6563L;
static uint32_t g_189 = 0x0E96879FL;
static int16_t g_192 = 0xD057L;
static int8_t g_193 = (-1L);
static uint16_t g_194 = 0x5277L;
static const union U2 g_217 = {1UL};
static uint64_t g_233[4][3] = {{0xAA57C4A037CD1430LL,0x7874FC3CE81A5975LL,0xAA57C4A037CD1430LL},{0xAA57C4A037CD1430LL,0x7874FC3CE81A5975LL,0xAA57C4A037CD1430LL},{0xAA57C4A037CD1430LL,0x7874FC3CE81A5975LL,0xAA57C4A037CD1430LL},{0xAA57C4A037CD1430LL,0x7874FC3CE81A5975LL,0xAA57C4A037CD1430LL}};
static union U2 g_268 = {0x772E67D2L};
static struct S0 *g_287 = &g_98;
static struct S0 **g_286 = &g_287;



static int64_t  func_1(void);
static const int32_t * func_5(int32_t * const  p_6, uint8_t  p_7, struct S1  p_8, int32_t * const  p_9, int32_t * p_10);
static struct S1  func_12(uint64_t  p_13, int32_t * p_14);
static int32_t * func_16(int32_t * p_17, uint16_t  p_18, uint8_t  p_19);
static uint64_t  func_31(uint8_t  p_32);
static const union U4  func_41(int32_t  p_42, const union U2  p_43, const int64_t  p_44, uint32_t  p_45);
static union U3  func_46(int32_t * p_47, union U4  p_48, uint16_t  p_49, uint8_t  p_50, int32_t * const  p_51);
static int32_t * func_52(int32_t * p_53);




static int64_t  func_1(void)
{ 
    int32_t * const l_11 = &g_2;
    uint32_t l_26 = 0x211521FAL;
    int32_t l_188 = (-4L);
    int8_t * const l_218 = &g_56.f0;
    struct S1 *l_251 = &g_121;
    for (g_2 = 0; (g_2 < (-11)); --g_2)
    { 
        int32_t l_15 = (-1L);
        int32_t *l_20 = &g_2;
        const int32_t **l_148 = (void*)0;
        const int32_t *l_150 = &g_92;
        const int32_t **l_149 = &l_150;
        int32_t *l_151 = &g_92;
        int32_t *l_152 = &g_92;
        int32_t *l_153 = &g_92;
        int32_t *l_154 = &g_92;
        int32_t *l_155 = (void*)0;
        int32_t *l_156 = &g_92;
        int32_t *l_157 = &g_92;
        int32_t *l_158 = &g_92;
        int32_t *l_159[5];
        union U4 l_163 = {0x17L};
        struct S1 *l_164 = &g_121;
        const struct S1 *l_165 = &g_121;
        int16_t *l_166 = &g_167;
        int64_t *l_175 = &g_135.f0;
        int16_t *l_176 = &g_177;
        uint16_t l_178 = 0UL;
        const union U3 *l_243 = &g_135;
        int i;
        for (i = 0; i < 5; i++)
            l_159[i] = &g_92;
        (*l_149) = func_5(l_11, g_2, func_12(l_15, func_16(l_20, (!(g_2 , ((safe_div_func_int8_t_s_s(((((safe_mod_func_uint64_t_u_u(((void*)0 == &g_2), g_2)) < g_2) < g_2) < 0x7128L), l_26)) < g_2))), (*l_20))), &g_2, l_20);
        g_160--;
        g_93 = (void*)0;
        if (((((((*l_166) = ((l_163 , l_164) == l_165)) & ((*l_176) |= (safe_div_func_uint64_t_u_u((**l_149), ((*l_175) = (safe_mul_func_uint8_t_u_u((g_128[1] = g_58.f0), (!(0xE0L > ((((safe_add_func_uint8_t_u_u(g_72.f2, g_98.f1)) > g_98.f1) && 0L) || (*l_11))))))))))) & g_59.f0) || l_178) , 0x1BD848F3L))
        { 
            (*g_61) = (*g_61);
            if (g_128[1])
                break;
            for (g_140 = 1; (g_140 < 42); ++g_140)
            { 
                uint16_t l_183[1][7][6] = {{{65528UL,0x3946L,65528UL,0UL,65528UL,0x3946L},{0xA0D3L,0x3946L,65535UL,0x3946L,0xA0D3L,0x3946L},{65528UL,0UL,65528UL,0x3946L,65528UL,0UL},{0xA0D3L,0UL,65535UL,0UL,0xA0D3L,0UL},{65528UL,0x3946L,65528UL,0UL,65528UL,0x3946L},{0xA0D3L,0x3946L,65535UL,0x3946L,0xA0D3L,0x3946L},{65528UL,0UL,65528UL,0x3946L,65528UL,0UL}}};
                uint8_t *l_186 = &g_121.f2;
                int32_t l_187 = 0xC2AFABCBL;
                int i, j, k;
                for (l_178 = 0; (l_178 >= 27); ++l_178)
                { 
                    --l_183[0][0][4];
                }
                (*l_154) |= (*l_11);
                (*l_149) = ((((*l_186) = (*l_11)) ^ ((252UL != g_2) & l_183[0][0][4])) , &g_2);
                g_189++;
            }
            g_194++;
        }
        else
        { 
            uint32_t l_209[7] = {0xBACC00A5L,0xCCE38ADBL,0xBACC00A5L,0xBACC00A5L,0xCCE38ADBL,0xBACC00A5L,0xBACC00A5L};
            int32_t *l_211 = &g_2;
            int8_t l_212 = 0L;
            int8_t *l_213 = &g_60.f0;
            const union U2 *l_216 = &g_217;
            int32_t l_242 = 1L;
            union U4 *l_244[6][4] = {{&g_56,&g_56,&g_59,&g_56},{&g_56,&g_59,&g_59,&g_56},{&g_59,&g_56,&g_59,&g_59},{&g_56,&g_56,&g_59,&g_56},{&g_56,&g_59,&g_59,&g_56},{&g_59,&g_56,&g_59,&g_59}};
            int i, j;
            l_188 = ((*l_152) = (safe_rshift_func_int16_t_s_u((0xA5CBDD7EL || ((safe_unary_minus_func_uint64_t_u(((~5L) ^ (safe_lshift_func_int8_t_s_s((*l_11), (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s((*l_157), (safe_rshift_func_int8_t_s_u(((*l_213) = (l_209[3] < ((+((((&l_188 != l_211) & l_212) && 1UL) , (-1L))) < (*l_152)))), 1)))), 0x02L))))))) , (*l_11))), (*l_211))));
            for (g_140 = 0; (g_140 <= 1); g_140 += 1)
            { 
                const union U2 *l_214[3];
                const union U2 **l_215 = (void*)0;
                int8_t *l_219 = &g_60.f0;
                uint64_t *l_228 = &g_120[6];
                int32_t l_229[5][3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_214[i] = &g_72;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_229[i][j] = 0xC3EE7E03L;
                }
                l_216 = l_214[1];
                (*l_157) = (l_218 == l_219);
                l_229[3][0] |= (((safe_rshift_func_uint16_t_u_s(g_128[g_140], 14)) <= (0xF8E7L ^ (((0x6F327A7BL == ((safe_mod_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s(((((*l_228) = 18446744073709551615UL) , &g_93) == &l_211), (((*l_153) < 0x5AL) && (*l_11)))), 0x2C7609B5FE7B2001LL)), (*l_211))) == g_140)) , l_11) == (void*)0))) != (*l_11));
                g_121.f0 &= (((safe_sub_func_int16_t_s_s((((~(g_233[3][0] >= (+0xA546A7A22F573554LL))) < ((((*l_11) & (!(((safe_add_func_uint16_t_u_u((((*l_176) = (((void*)0 != &g_2) >= (safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint8_t_u_u(((*l_20) >= (func_46(func_16(func_52(&l_229[3][1]), l_242, (*l_11)), l_163, g_121.f1, (*l_211), &g_2) , l_229[3][0])), 5)) , g_177) <= g_193), g_128[g_140])))) >= g_121.f2), (*l_211))) == g_140) <= (-7L)))) ^ 0x0EF8L) >= 0x360856D30ABCD8AELL)) | (*l_211)), g_167)) , l_243) == (void*)0);
                (*l_149) = ((((*g_93) || ((((*g_61) != l_244[5][0]) ^ (safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_u(4UL, (((((0x69ADE63DL ^ g_92) & (safe_div_func_int8_t_s_s((g_59.f0 & g_189), g_233[2][2]))) || g_60.f0) , 4294967295UL) < l_229[2][1]))) & l_229[3][0]) == g_177), 6))) | 0x8BL)) ^ 0x734EL) , (void*)0);
            }
        }
    }
    (*l_251) = g_121;
    for (g_135.f0 = 0; (g_135.f0 >= (-20)); g_135.f0 = safe_sub_func_int16_t_s_s(g_135.f0, 1))
    { 
        for (l_26 = 10; (l_26 != 24); l_26 = safe_add_func_uint32_t_u_u(l_26, 7))
        { 
            return g_167;
        }
        return g_59.f0;
    }
    for (g_60.f0 = 0; (g_60.f0 != (-23)); g_60.f0--)
    { 
        uint8_t l_258 = 3UL;
        int32_t *l_262 = &l_188;
        const struct S1 l_263 = {-5831,0xDEC4028CL,246UL};
        union U2 *l_267 = &g_268;
        uint64_t l_272 = 0xECEA3FFCC7CFD098LL;
        if (l_258)
        { 
            (*l_251) = l_263;
            if ((*l_262))
                continue;
            if (g_233[3][0])
                break;
        }
        else
        { 
            struct S1 l_266 = {-2313,4UL,0UL};
            int32_t *l_269 = &g_92;
            (*l_269) = (((*l_11) = ((*l_262) = (l_266 , (*l_262)))) || (&g_217 == (l_263 , l_267)));
            for (g_69 = 0; (g_69 <= 2); g_69 += 1)
            { 
                int32_t *l_270 = &g_2;
                int32_t *l_271 = (void*)0;
                int i, j;
                ++l_272;
                if (g_233[(g_69 + 1)][g_69])
                    continue;
                (*l_269) = (*l_262);
            }
        }
        (*l_11) = (*l_262);
        for (g_59.f0 = 19; (g_59.f0 <= 25); ++g_59.f0)
        { 
            (*l_262) &= (safe_div_func_uint8_t_u_u((~(safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(0x2EE6L, (safe_mul_func_int8_t_s_s(g_268.f2, ((((void*)0 != g_286) | ((g_217 , &l_267) != (void*)0)) | 0x0CL))))), 0UL))), g_120[1]));
        }
    }
    return (*l_11);
}



static const int32_t * func_5(int32_t * const  p_6, uint8_t  p_7, struct S1  p_8, int32_t * const  p_9, int32_t * p_10)
{ 
    struct S1 l_144 = {4023,0xDE445E70L,246UL};
    struct S1 *l_145 = (void*)0;
    struct S1 l_146 = {6060,0x8BFBDA86L,0xFAL};
    const int32_t *l_147 = &g_2;
    l_146 = l_144;
    return l_147;
}



static struct S1  func_12(uint64_t  p_13, int32_t * p_14)
{ 
    struct S1 *l_102 = (void*)0;
    struct S1 **l_103 = &l_102;
    int32_t l_108 = 1L;
    int32_t l_138[4][2] = {{7L,7L},{7L,7L},{7L,7L},{7L,7L}};
    struct S1 l_143 = {5967,0x7EE7FC08L,0x1EL};
    int i, j;
lbl_136:
    (*l_103) = l_102;
    for (g_56.f0 = 0; (g_56.f0 != (-28)); g_56.f0 = safe_sub_func_uint8_t_u_u(g_56.f0, 7))
    { 
        union U3 l_112 = {0L};
        int32_t l_122 = (-1L);
        int32_t l_124 = 0x05D9C67FL;
        int32_t *l_137[4][1] = {{&l_108},{&l_108},{&l_108},{&l_108}};
        int64_t l_139 = 0x91DF6875C0BC95C9LL;
        int i, j;
        for (g_69 = (-7); (g_69 >= 14); g_69++)
        { 
            uint64_t *l_119[6] = {&g_120[6],&g_120[6],&g_120[6],&g_120[6],&g_120[6],&g_120[6]};
            int32_t l_123 = 1L;
            int32_t *l_125 = (void*)0;
            int32_t *l_126 = &g_92;
            int32_t *l_127[7][1][2] = {{{(void*)0,(void*)0}},{{&l_122,&l_122}},{{&l_122,(void*)0}},{{(void*)0,&l_108}},{{(void*)0,&l_108}},{{(void*)0,(void*)0}},{{&l_122,&l_122}}};
            union U3 **l_132 = (void*)0;
            union U3 **l_133[7] = {&g_131,(void*)0,&g_131,&g_131,(void*)0,&g_131,&g_131};
            int i, j, k;
            (*l_126) |= ((l_108 > p_13) , (safe_div_func_uint32_t_u_u((l_124 ^= ((~(l_112 , (safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_123 = ((l_122 = ((safe_div_func_uint64_t_u_u(18446744073709551615UL, (g_120[6] &= p_13))) || (g_121 , (p_13 & 0x4A879AF5B30FD8B1LL)))) , 0xA6L)), p_13)), p_13)))) >= l_108)), 0x9F59CAFAL)));
            g_128[1]--;
            if (l_112.f0)
                continue;
            g_134 = (g_131 = (g_98 , g_131));
        }
        if (g_121.f0)
            goto lbl_136;
        g_121.f0 &= (0x15B8L < l_124);
        ++g_140;
        g_92 = (*g_93);
    }
    return l_143;
}



static int32_t * func_16(int32_t * p_17, uint16_t  p_18, uint8_t  p_19)
{ 
    uint64_t l_38 = 0x3ED13222C7E12FD8LL;
    union U2 l_54 = {4294967295UL};
    union U4 l_55 = {-1L};
    union U4 *l_57[4][4][5] = {{{(void*)0,&l_55,(void*)0,(void*)0,(void*)0},{&l_55,&l_55,&l_55,(void*)0,&l_55},{&l_55,&l_55,&l_55,(void*)0,&l_55},{&l_55,&l_55,&l_55,&l_55,&l_55}},{{(void*)0,&l_55,(void*)0,(void*)0,(void*)0},{&l_55,&l_55,&l_55,(void*)0,&l_55},{&l_55,&l_55,&l_55,(void*)0,&l_55},{&l_55,&l_55,&l_55,&l_55,&l_55}},{{(void*)0,&l_55,(void*)0,(void*)0,(void*)0},{&l_55,&l_55,&l_55,(void*)0,&l_55},{&l_55,&l_55,&l_55,(void*)0,&l_55},{&l_55,&l_55,&l_55,&l_55,&l_55}},{{(void*)0,&l_55,(void*)0,(void*)0,(void*)0},{&l_55,&l_55,&l_55,(void*)0,&l_55},{&l_55,&l_55,&l_55,(void*)0,&l_55},{&l_55,&l_55,&l_55,&l_55,&l_55}}};
    struct S0 *l_101 = (void*)0;
    int i, j, k;
    if ((safe_div_func_uint8_t_u_u((g_2 <= (safe_lshift_func_int8_t_s_s((func_31((safe_mod_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(g_2, ((~1UL) <= l_38))) & ((safe_sub_func_uint64_t_u_u(0xD050B7F45B6D4F50LL, ((func_41((func_46(func_52(((g_59 = (g_58 = (l_54 , (g_56 = l_55)))) , &g_2)), g_60, p_18, g_2, p_17) , p_19), g_72, g_2, g_72.f3) , &g_92) != (void*)0))) != g_72.f0)), g_72.f0))) ^ 0xE0FDA63E176CBFBCLL), 0))), g_72.f2)))
    { 
        return &g_2;
    }
    else
    { 
        l_101 = l_101;
    }
    return &g_92;
}



static uint64_t  func_31(uint8_t  p_32)
{ 
    int64_t l_100[7] = {(-4L),0x61C721796DE0D780LL,(-4L),(-4L),0x61C721796DE0D780LL,(-4L),(-4L)};
    int i;
    for (g_69 = (-18); (g_69 > 7); g_69 = safe_add_func_int64_t_s_s(g_69, 7))
    { 
        struct S0 *l_97 = &g_98;
        struct S0 **l_99 = &l_97;
        (*l_99) = l_97;
    }
    for (g_69 = 1; (g_69 <= 6); g_69 += 1)
    { 
        int i;
        return l_100[g_69];
    }
    return p_32;
}



static const union U4  func_41(int32_t  p_42, const union U2  p_43, const int64_t  p_44, uint32_t  p_45)
{ 
    struct S0 l_86 = {0,1};
    union U3 l_87 = {1L};
    int32_t *l_88 = &g_89;
    int8_t *l_90 = &g_59.f0;
    int32_t *l_91 = &g_92;
    const union U4 l_94 = {-6L};
    (*l_91) = (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((((void*)0 == &g_62) >= (((*l_90) = (((*l_88) = (18446744073709551615UL | (((safe_unary_minus_func_int32_t_s(((g_72.f0 , (safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_add_func_int64_t_s_s((l_86 , ((l_86.f1 < 2L) <= p_43.f3)), p_43.f3)) > l_86.f1), p_44)), g_56.f0)) && l_86.f0), g_60.f0))) & 0xC3L))) , l_87) , g_2))) , 1L)) || g_72.f3)), g_60.f0)) && 0x09020540L), 14));
    g_93 = func_52(func_52(l_88));
    return l_94;
}



static union U3  func_46(int32_t * p_47, union U4  p_48, uint16_t  p_49, uint8_t  p_50, int32_t * const  p_51)
{ 
    union U4 ***l_63 = &g_61;
    union U3 l_71 = {-7L};
    (*l_63) = g_61;
    for (p_48.f0 = (-7); (p_48.f0 < (-19)); p_48.f0 = safe_sub_func_uint8_t_u_u(p_48.f0, 3))
    { 
        union U4 **l_67[4][5][2] = {{{&g_62,&g_62},{(void*)0,&g_62},{(void*)0,&g_62},{&g_62,&g_62},{&g_62,(void*)0}},{{&g_62,(void*)0},{&g_62,&g_62},{&g_62,&g_62},{(void*)0,&g_62},{&g_62,&g_62}},{{&g_62,&g_62},{&g_62,&g_62},{&g_62,&g_62},{&g_62,&g_62},{&g_62,&g_62}},{{&g_62,&g_62},{&g_62,&g_62},{&g_62,&g_62},{&g_62,&g_62},{&g_62,&g_62}}};
        uint32_t *l_68 = &g_69;
        int32_t l_70 = 0x862B336FL;
        int i, j, k;
        l_70 = (safe_unary_minus_func_uint32_t_u(((*l_68) = (l_67[1][2][1] != l_67[1][2][1]))));
    }
    return l_71;
}



static int32_t * func_52(int32_t * p_53)
{ 
    return &g_2;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_56.f0, "g_56.f0", print_hash_value);
    transparent_crc(g_58.f0, "g_58.f0", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_120[i], "g_120[i]", print_hash_value);

    }
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_121.f1, "g_121.f1", print_hash_value);
    transparent_crc(g_121.f2, "g_121.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_128[i], "g_128[i]", print_hash_value);

    }
    transparent_crc(g_135.f0, "g_135.f0", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_217.f0, "g_217.f0", print_hash_value);
    transparent_crc(g_217.f2, "g_217.f2", print_hash_value);
    transparent_crc(g_217.f3, "g_217.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_233[i][j], "g_233[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_268.f0, "g_268.f0", print_hash_value);
    transparent_crc(g_268.f2, "g_268.f2", print_hash_value);
    transparent_crc(g_268.f3, "g_268.f3", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
