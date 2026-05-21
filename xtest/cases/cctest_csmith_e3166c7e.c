// SPDX-License-Identifier: MIT
// cctest_csmith_e3166c7e.c --- cctest case csmith_e3166c7e (csmith seed 3809897598)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe67cda62 */

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

// Options:   -s 3809897598 -o /tmp/csmith_gen_h0oz1bvq/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   const uint32_t  f1;
   const int32_t  f2;
   int8_t  f3;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
};

union U2 {
   uint32_t  f0;
};


static union U1 g_9 = {{0x13244D513C61C71BLL,3UL,1L,0xA0L}};
static uint16_t g_28 = 0x29A2L;
static union U2 g_42 = {18446744073709551606UL};
static int16_t g_47 = (-1L);
static int16_t g_83 = (-9L);
static uint32_t g_84[3][4] = {{0x64400D43L,1UL,1UL,1UL},{1UL,1UL,0x64400D43L,1UL},{0x5DEC46B6L,1UL,0x5DEC46B6L,0x64400D43L}};
static int16_t g_109 = 0x5336L;
static uint32_t g_116 = 0xC7BDE7BCL;
static int64_t g_117 = 1L;
static int32_t g_146[3][2] = {{0xFC229ECFL,0x599A50A9L},{0x599A50A9L,0xFC229ECFL},{0x599A50A9L,0x599A50A9L}};
static int32_t g_181 = (-8L);
static uint32_t g_202 = 3UL;
static int32_t g_228[2][2][1] = {{{0x766197A9L},{0x4E8DBFCDL}},{{0x766197A9L},{0x4E8DBFCDL}}};
static int32_t g_251[4] = {4L,4L,4L,4L};
static uint32_t g_289 = 0x70257DEBL;



static int16_t  func_1(void);
static int16_t  func_5(union U1  p_6, struct S0  p_7, int8_t  p_8);
static struct S0  func_10(int32_t  p_11, int32_t  p_12, int8_t  p_13, int32_t  p_14, union U1  p_15);
static int8_t  func_23(uint16_t  p_24, const uint32_t  p_25, uint64_t  p_26);




static int16_t  func_1(void)
{ 
    int8_t l_4 = (-4L);
    int32_t l_290 = 0x5472B14FL;
    l_290 |= ((safe_mul_func_int8_t_s_s(l_4, (func_5(g_9, func_10((l_4 & l_4), l_4, g_9.f0.f3, l_4, g_9), l_4) <= 8UL))) & g_289);
    l_290 ^= 0xAF350A2BL;
    g_251[0] = g_228[1][1][0];
    return g_28;
}



static int16_t  func_5(union U1  p_6, struct S0  p_7, int8_t  p_8)
{ 
    uint32_t l_273 = 0xD68CEC90L;
    int32_t l_274 = 3L;
    int8_t l_281 = 0L;
    int32_t l_285[1][3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_285[i][j] = 0L;
    }
    l_274 = (g_9 , (safe_div_func_uint32_t_u_u(((((0x0B20L < 0x84C8L) | (g_28 || 0xAEA3714A4212A552LL)) >= l_273) < 0x3C7EL), l_273)));
    for (g_9.f0.f3 = 22; (g_9.f0.f3 < (-28)); g_9.f0.f3 = safe_sub_func_int64_t_s_s(g_9.f0.f3, 8))
    { 
        int16_t l_284 = 5L;
        int32_t l_286 = 0L;
        l_286 = (l_274 = (safe_mul_func_uint16_t_u_u(((l_285[0][0] = (safe_lshift_func_int8_t_s_s(((l_281 > ((safe_rshift_func_int16_t_s_s(((g_109 ^= g_9.f0.f1) && l_284), 7)) <= p_6.f0.f0)) , (-1L)), g_146[1][1]))) > p_7.f2), g_83)));
        g_146[1][1] = g_84[2][3];
        l_285[0][0] = (safe_div_func_int32_t_s_s(g_109, 4294967295UL));
    }
    return p_7.f0;
}



static struct S0  func_10(int32_t  p_11, int32_t  p_12, int8_t  p_13, int32_t  p_14, union U1  p_15)
{ 
    uint8_t l_16 = 0x81L;
    int32_t l_17 = 0x006986D6L;
    int16_t l_87 = 1L;
    const uint64_t l_106[2][4] = {{0xD3D76C9451C119C8LL,18446744073709551615UL,18446744073709551615UL,0xD3D76C9451C119C8LL},{18446744073709551615UL,0xD3D76C9451C119C8LL,18446744073709551615UL,18446744073709551615UL}};
    uint32_t l_145[2];
    int32_t l_161 = 0x4711E6C6L;
    int32_t l_163 = 0xC684B151L;
    int32_t l_166[2];
    const union U2 l_174[1][3][1] = {{{{18446744073709551609UL}},{{18446744073709551609UL}},{{18446744073709551609UL}}}};
    const union U1 l_193 = {{0x8C0A6948E95C3721LL,0xA19B7F54L,0x5085358AL,0x2EL}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_145[i] = 4UL;
    for (i = 0; i < 2; i++)
        l_166[i] = (-10L);
lbl_122:
    l_17 = l_16;
    if ((+((l_17 = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((func_23(g_9.f0.f3, g_9.f0.f2, l_16) || (-6L)), l_87)), 5UL)) && (-2L))) && (-1L))))
    { 
        int16_t l_90[1];
        union U2 l_93 = {0x9A883271L};
        int8_t l_105 = 0x96L;
        int i;
        for (i = 0; i < 1; i++)
            l_90[i] = 1L;
        l_90[0] = ((l_17 = (-5L)) == (safe_lshift_func_int8_t_s_s(0x78L, 1)));
        for (p_14 = 1; (p_14 != 2); p_14++)
        { 
            const uint64_t l_102 = 0xF2AEC61BC9EF25ADLL;
            if ((l_93 , ((safe_mod_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((l_102 < (((g_42.f0 = l_93.f0) , (safe_sub_func_int64_t_s_s((g_9.f0.f2 , 0x94EC24AAD4D87CD7LL), g_42.f0))) == 255UL)), l_105)), p_15.f0.f1)), g_28)) && 1UL) , l_102) && l_106[0][1]), 7L)) <= p_11)))
            { 
                int64_t l_114 = 1L;
                uint16_t l_115 = 0x3991L;
                g_116 ^= (safe_div_func_int8_t_s_s((g_9.f0.f1 != ((g_109 = 0xE4031697L) <= ((safe_sub_func_uint64_t_u_u((0UL ^ ((safe_add_func_int16_t_s_s(l_114, p_12)) || l_114)), 2UL)) > l_115))), p_15.f0.f2));
            }
            else
            { 
                l_17 = l_17;
            }
            l_17 = g_9.f0.f2;
            g_117 = 2L;
        }
    }
    else
    { 
        int16_t l_135 = (-6L);
        for (g_109 = 7; (g_109 > (-4)); --g_109)
        { 
            for (g_83 = (-24); (g_83 != 9); g_83 = safe_add_func_uint16_t_u_u(g_83, 1))
            { 
                if (g_9.f0.f0)
                    goto lbl_122;
            }
            for (g_117 = 0; (g_117 <= 2); g_117 += 1)
            { 
                int i, j;
                p_14 |= 0x5865EE81L;
                l_17 = g_84[g_117][(g_117 + 1)];
                p_14 = ((+((((safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((~(l_17 = (safe_sub_func_int16_t_s_s(7L, (0x20B361CEL != 4294967294UL))))), (safe_mod_func_int16_t_s_s(g_9.f0.f1, l_135)))), p_15.f0.f3)), p_12)) & p_15.f0.f0) , p_15.f0.f3) || g_9.f0.f3)) , g_109);
            }
        }
        if (g_42.f0)
            goto lbl_122;
    }
    if (((++g_28) <= ((l_16 <= ((!l_17) <= g_9.f0.f3)) & (g_146[1][1] = (((safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(((((l_106[0][1] & p_15.f0.f1) & l_17) || (-6L)) >= l_87), l_106[0][1])), l_145[0])) & p_14) >= 7UL)))))
    { 
        int16_t l_160 = (-1L);
        int32_t l_165 = 7L;
        int32_t l_168[3];
        uint32_t l_180 = 0x40E15510L;
        int i;
        for (i = 0; i < 3; i++)
            l_168[i] = 0x5475258AL;
        for (l_16 = 0; (l_16 <= 1); l_16 += 1)
        { 
            int8_t l_154 = 0x48L;
            int32_t l_158 = 0x3C6A6534L;
            int32_t l_164 = (-6L);
            int32_t l_167[1][4][4] = {{{0x58CEABDBL,0xDA806100L,0xDA806100L,0x58CEABDBL},{0x0CC12B9BL,0xDA806100L,(-2L),0xDA806100L},{0xDA806100L,0x0CC12B9BL,0x63D52EC9L,0x63D52EC9L},{0xDA806100L,0xDA806100L,0x58CEABDBL,0x63D52EC9L}}};
            int32_t l_179 = 0xEB8C283CL;
            struct S0 l_182 = {-9L,1UL,0xB4463F65L,-1L};
            union U2 l_190 = {18446744073709551615UL};
            int i, j, k;
            if ((l_87 && ((safe_rshift_func_int16_t_s_u(((safe_div_func_int64_t_s_s((!p_15.f0.f2), (safe_sub_func_uint8_t_u_u(((l_154 = g_117) , (safe_add_func_int16_t_s_s((!p_13), g_146[1][0]))), l_158)))) | p_15.f0.f3), 13)) > l_106[0][2])))
            { 
                if (p_15.f0.f1)
                    break;
            }
            else
            { 
                int32_t l_159 = 0L;
                int32_t l_162 = 0x07334A22L;
                uint32_t l_169 = 0x78C483DFL;
                l_169--;
                l_164 = (safe_mul_func_int8_t_s_s((g_181 = ((l_174[0][2][0] , ((safe_add_func_int8_t_s_s(p_12, (((p_15.f0.f0 >= (((safe_rshift_func_uint16_t_u_u(l_179, g_116)) & l_179) >= l_16)) != 0x8A0F2808L) , g_9.f0.f0))) < g_146[1][1])) != l_180)), (-1L)));
            }
            for (p_12 = 0; p_12 < 2; p_12 += 1)
            {
                l_145[p_12] = 0x7DBC3B14L;
            }
            for (g_109 = 1; (g_109 >= 0); g_109 -= 1)
            { 
                return l_182;
            }
            for (g_42.f0 = 0; (g_42.f0 <= 2); g_42.f0 += 1)
            { 
                uint8_t l_191 = 0UL;
                int i, j;
                g_146[g_42.f0][l_16] = (safe_mul_func_uint8_t_u_u(0xB1L, (18446744073709551607UL < (((g_146[l_16][l_16] <= (safe_mul_func_uint16_t_u_u((+(((safe_div_func_int16_t_s_s((l_191 ^= (l_190 , 0xD337L)), g_84[l_16][(l_16 + 1)])) , 65527UL) || p_15.f0.f1)), 0x50ECL))) == 0xA2A9BA58C66C539ELL) & g_84[2][3]))));
            }
        }
    }
    else
    { 
        uint32_t l_192 = 0x6D6690D2L;
        int32_t l_203[4][1][5] = {{{0xCD2BE11DL,0xB62A1B42L,(-1L),0x87208B66L,(-1L)}},{{(-1L),(-1L),0x39E76076L,0x87208B66L,1L}},{{0xB62A1B42L,0xCD2BE11DL,0xCD2BE11DL,0xB62A1B42L,(-1L)}},{{0xB62A1B42L,0x87208B66L,0x70B1168EL,0x70B1168EL,0x87208B66L}}};
        union U2 l_213 = {0xFD5CC310L};
        int32_t l_214 = 0xD7E15E09L;
        int i, j, k;
        l_192 = (g_181 = g_28);
        l_203[1][0][3] |= ((l_193 , (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((((l_161 = ((((((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((g_42.f0 , (g_202 |= ((g_9.f0.f2 ^ (p_15.f0 , l_192)) > g_28))) ^ 0x55L), p_15.f0.f2)), g_28)) != p_15.f0.f2) == 3L) < l_192) <= l_145[0]) , 0UL)) > (-1L)) > g_146[1][1]), p_12)) >= g_117), l_192))) & p_15.f0.f2);
        if ((((safe_sub_func_uint64_t_u_u((l_203[1][0][3] | l_203[2][0][0]), (+(safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((((safe_mod_func_uint8_t_u_u((l_214 ^= (l_213 , (l_166[1] = (g_47 && 3UL)))), l_203[1][0][3])) , g_117) , 2UL) | g_42.f0), g_9.f0.f3)), g_116))))) , g_202) && p_15.f0.f2))
        { 
            uint32_t l_215[2][5];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_215[i][j] = 1UL;
            }
            --l_215[0][4];
        }
        else
        { 
            uint32_t l_229 = 0x8BFC3082L;
            int32_t l_238 = (-10L);
            union U2 l_250 = {18446744073709551606UL};
            for (g_28 = 0; (g_28 > 15); g_28 = safe_add_func_uint8_t_u_u(g_28, 4))
            { 
                uint8_t l_237 = 250UL;
                union U2 l_249 = {18446744073709551607UL};
                p_14 = (safe_rshift_func_int8_t_s_s((g_9.f0.f1 != ((g_42 = g_42) , ((((safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((g_228[1][0][0] = p_13) & (0x0E726625L & 0xB2B15E5CL)), g_202)), l_229)), l_214)) != g_9.f0.f2) && p_13) | l_145[0]))), 7));
                p_14 = (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(p_13, 6)) && (g_146[1][1] > (safe_mul_func_uint8_t_u_u(l_229, (p_15.f0.f3 = (l_238 = (!(l_237 = ((((g_42 , g_116) | 255UL) , 0xADD7577FL) , 0UL))))))))), g_84[2][3]));
                g_181 = (((g_117 , (g_251[0] = ((((+(((l_203[1][0][3] = (((safe_lshift_func_int8_t_s_u((1UL != (safe_sub_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((((safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((g_42 , ((l_250 = l_249) , g_202)) <= g_84[2][3]))), 9L)) & g_9.f0.f2) || 65528UL), p_15.f0.f1)) > g_228[0][0][0]), l_238))), 3)) >= 4294967295UL) > p_12)) >= l_192) && 254UL)) <= l_16) >= 0x9FDCL) == p_11))) , p_13) != 0x3F47L);
            }
            if (((safe_div_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u((((((safe_add_func_int32_t_s_s((g_9.f0 , (l_229 , ((((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(l_193.f0.f2, 6)), 0x4488EE7CE54AC666LL)) != 0x778E50C8L) < g_84[0][1]) ^ l_166[1]))), (-9L))) , g_84[2][3]) == 0xE8L) > 0xDD58F199L) | 0x7C3E86A6L), g_117)) <= p_13) == 0xD249FA4DF0E4EAF2LL) && 0x3E714B42L), g_42.f0)) < 0x5910L))
            { 
                int32_t l_262 = 0x798D4120L;
                l_238 = (p_15.f0.f2 , (p_14 ^= (0x207287C9L == ((1UL <= l_262) & 0x8CL))));
                return p_15.f0;
            }
            else
            { 
                int16_t l_267 = (-4L);
                int32_t l_270 = 0x89333FCDL;
                l_238 = (safe_mul_func_int8_t_s_s(((safe_div_func_int64_t_s_s(l_267, (((safe_add_func_uint8_t_u_u(p_15.f0.f0, (g_117 < l_267))) == l_250.f0) ^ g_83))) == l_267), 5L));
                l_270 &= (1L >= 0xE4L);
            }
        }
    }
    return p_15.f0;
}



static int8_t  func_23(uint16_t  p_24, const uint32_t  p_25, uint64_t  p_26)
{ 
    int8_t l_27[5];
    int32_t l_43 = (-1L);
    int32_t l_44 = 0xC50133ECL;
    int16_t l_45 = 8L;
    const struct S0 l_52 = {-5L,0x1A7003B9L,0xE29F19B5L,0xD9L};
    union U2 l_70 = {18446744073709551615UL};
    int32_t l_71 = 0x7BFB9E2BL;
    int i;
    for (i = 0; i < 5; i++)
        l_27[i] = 0L;
    for (p_26 = 0; (p_26 <= 4); p_26 += 1)
    { 
        uint32_t l_35 = 4294967291UL;
        --g_28;
        for (p_24 = 0; (p_24 <= 4); p_24 += 1)
        { 
            int32_t l_46 = 0x8C32619CL;
            l_46 ^= (safe_add_func_int64_t_s_s((((((safe_mul_func_int16_t_s_s((l_35 < ((((4L <= (safe_mod_func_int64_t_s_s((l_44 = (safe_lshift_func_int8_t_s_u(g_9.f0.f0, (((l_43 = ((safe_mod_func_int8_t_s_s((g_42 , p_25), g_9.f0.f3)) & 6L)) <= p_26) < g_9.f0.f0)))), g_9.f0.f2))) || l_44) <= (-2L)) && g_9.f0.f0)), l_27[3])) < p_24) | p_24) <= l_45) == 1UL), 18446744073709551611UL));
        }
        g_47 = p_26;
    }
    l_43 = ((((safe_sub_func_int16_t_s_s(0xA480L, l_45)) < ((safe_rshift_func_int8_t_s_s((l_44 &= 0x69L), 7)) <= ((((g_28 , l_52) , g_9.f0.f2) || 0x663B350B8378C3A3LL) , g_9.f0.f2))) & g_28) ^ 0x8DFEL);
    if (((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(g_28, ((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((!l_52.f3), 0L)), (l_70 , l_52.f1))) || p_24), l_45)), 1L)), 1L)) >= 0UL) == l_52.f1), l_70.f0)) == 0x0AL))), p_25)) < l_71))
    { 
        g_83 = (safe_mod_func_uint64_t_u_u(((((safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((g_9.f0.f0 == (0x4FL | (((255UL > (safe_div_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u((~g_28), g_9.f0.f2)) > 0x5ED1L) | 0xBE65L) , 0x5EL), 0x1AL))) && p_26) , g_9.f0.f1))), g_47)), 1)) , (-10L)) | p_26) <= p_26), 0xBF4D75DB0C68D18ELL));
    }
    else
    { 
        g_84[2][3]++;
        return g_84[2][3];
    }
    return p_26;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9.f0.f0, "g_9.f0.f0", print_hash_value);
    transparent_crc(g_9.f0.f1, "g_9.f0.f1", print_hash_value);
    transparent_crc(g_9.f0.f2, "g_9.f0.f2", print_hash_value);
    transparent_crc(g_9.f0.f3, "g_9.f0.f3", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_42.f0, "g_42.f0", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_84[i][j], "g_84[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_146[i][j], "g_146[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_228[i][j][k], "g_228[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_251[i], "g_251[i]", print_hash_value);

    }
    transparent_crc(g_289, "g_289", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
