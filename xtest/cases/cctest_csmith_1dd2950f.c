// SPDX-License-Identifier: MIT
// cctest_csmith_1dd2950f.c --- cctest case csmith_1dd2950f (csmith seed 500339983)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2f6fc857 */

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

// Options:   -s 500339983 -o /tmp/csmith_gen_1pcezrmv/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint8_t  f1;
   int64_t  f2;
   const uint8_t  f3;
   int8_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   uint16_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   uint8_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

union U2 {
   int32_t  f0;
   uint64_t  f1;
   int32_t  f2;
   uint32_t  f3;
};


static int32_t g_3 = 0xFEF9D786L;
static int32_t g_26 = (-4L);
static uint32_t g_31 = 18446744073709551606UL;
static union U2 g_47 = {0L};
static int8_t g_49 = 1L;
static struct S1 g_50 = {0xE861L,0x80L,0x96066EAAL,8UL,0x5D2985DAL};
static int64_t g_73[3][3] = {{0x3554F437236CF92ALL,0x3554F437236CF92ALL,0x3554F437236CF92ALL},{0x3554F437236CF92ALL,0x3554F437236CF92ALL,0x3554F437236CF92ALL},{0x3554F437236CF92ALL,0x3554F437236CF92ALL,0x3554F437236CF92ALL}};
static int32_t g_74 = 1L;
static int32_t *g_109 = &g_50.f4;
static int32_t **g_108[7][7] = {{&g_109,&g_109,&g_109,&g_109,&g_109,&g_109,&g_109},{&g_109,&g_109,&g_109,&g_109,&g_109,&g_109,&g_109},{&g_109,&g_109,&g_109,&g_109,&g_109,&g_109,&g_109},{&g_109,&g_109,&g_109,&g_109,&g_109,&g_109,&g_109},{&g_109,&g_109,&g_109,&g_109,&g_109,&g_109,&g_109},{&g_109,&g_109,&g_109,(void*)0,&g_109,(void*)0,&g_109},{&g_109,&g_109,&g_109,(void*)0,&g_109,(void*)0,&g_109}};
static struct S0 g_119 = {4UL,0x9CL,1L,0x13L,0L};
static int8_t *g_142 = &g_119.f4;
static int8_t **g_141 = &g_142;
static int8_t ***g_140[3] = {&g_141,&g_141,&g_141};
static uint32_t g_154 = 0x8F565D05L;
static int8_t *g_192 = (void*)0;
static int8_t ** const g_191 = &g_192;
static int8_t ** const *g_190 = &g_191;
static int16_t g_209 = 1L;
static uint64_t *g_213 = &g_119.f0;
static uint64_t **g_212 = &g_213;
static uint64_t ***g_211[4] = {&g_212,&g_212,&g_212,&g_212};
static uint16_t *g_235 = (void*)0;
static uint32_t *g_341 = &g_154;
static uint32_t **g_340[4][2] = {{&g_341,&g_341},{&g_341,&g_341},{&g_341,&g_341},{&g_341,&g_341}};
static union U2 g_384 = {0x3175606AL};
static int32_t g_411 = 1L;
static const uint64_t **g_445 = (void*)0;
static const uint64_t ***g_444 = &g_445;
static struct S1 g_462 = {0x981EL,251UL,0xCB881785L,0x00L,0xF62CDE19L};
static uint32_t g_504 = 0xB443248CL;
static int64_t g_661 = 3L;
static int32_t g_720[4] = {0L,0L,0L,0L};
static struct S1 g_723[6][2][4] = {{{{0xCF4CL,0x6BL,0xB5778E08L,0x7AL,-1L},{0UL,250UL,0x4A641812L,0x9FL,0x81BF154AL},{0UL,1UL,1UL,254UL,1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L}},{{0UL,1UL,1UL,254UL,1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L},{0UL,1UL,1UL,254UL,1L},{0UL,250UL,0x4A641812L,0x9FL,0x81BF154AL}}},{{{0xCF4CL,0x6BL,0xB5778E08L,0x7AL,-1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L},{0UL,0xB6L,0xD2D82D26L,5UL,3L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L}},{{0xCF4CL,0x6BL,0xB5778E08L,0x7AL,-1L},{0UL,250UL,0x4A641812L,0x9FL,0x81BF154AL},{0UL,1UL,1UL,254UL,1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L}}},{{{0UL,1UL,1UL,254UL,1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L},{0UL,1UL,1UL,254UL,1L},{0UL,250UL,0x4A641812L,0x9FL,0x81BF154AL}},{{0xCF4CL,0x6BL,0xB5778E08L,0x7AL,-1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L},{0UL,0xB6L,0xD2D82D26L,5UL,3L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L}}},{{{0xCF4CL,0x6BL,0xB5778E08L,0x7AL,-1L},{0UL,250UL,0x4A641812L,0x9FL,0x81BF154AL},{0UL,1UL,1UL,254UL,1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L}},{{0UL,1UL,1UL,254UL,1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L},{0UL,1UL,1UL,254UL,1L},{0UL,250UL,0x4A641812L,0x9FL,0x81BF154AL}}},{{{0xCF4CL,0x6BL,0xB5778E08L,0x7AL,-1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L},{0UL,0xB6L,0xD2D82D26L,5UL,3L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L}},{{0xCF4CL,0x6BL,0xB5778E08L,0x7AL,-1L},{0UL,250UL,0x4A641812L,0x9FL,0x81BF154AL},{0UL,1UL,1UL,254UL,1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L}}},{{{0UL,1UL,1UL,254UL,1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L},{0UL,1UL,1UL,254UL,1L},{0UL,250UL,0x4A641812L,0x9FL,0x81BF154AL}},{{0xCF4CL,0x6BL,0xB5778E08L,0x7AL,-1L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L},{0UL,0xB6L,0xD2D82D26L,5UL,3L},{0xB247L,0UL,0x504AD0B9L,0x4DL,9L}}}};
static union U2 *g_727 = &g_384;
static union U2 ** const g_726[5] = {&g_727,&g_727,&g_727,&g_727,&g_727};
static int32_t *g_862 = &g_411;
static int32_t g_913 = 0xAAE209F7L;
static int64_t *g_922 = &g_661;
static int64_t **g_921 = &g_922;
static struct S0 g_1005 = {0x667EDA7E8349CB24LL,0x88L,-4L,0UL,9L};
static const int8_t g_1025 = (-3L);
static uint32_t ***g_1049 = &g_340[3][1];
static uint32_t ****g_1048[6][4][4] = {{{&g_1049,&g_1049,(void*)0,(void*)0},{(void*)0,&g_1049,&g_1049,&g_1049},{&g_1049,(void*)0,(void*)0,(void*)0},{&g_1049,&g_1049,(void*)0,&g_1049}},{{&g_1049,&g_1049,&g_1049,&g_1049},{&g_1049,(void*)0,&g_1049,&g_1049},{&g_1049,&g_1049,(void*)0,&g_1049},{(void*)0,&g_1049,&g_1049,&g_1049}},{{&g_1049,&g_1049,&g_1049,&g_1049},{&g_1049,&g_1049,(void*)0,&g_1049},{&g_1049,&g_1049,(void*)0,&g_1049},{&g_1049,&g_1049,&g_1049,&g_1049}},{{&g_1049,(void*)0,&g_1049,&g_1049},{&g_1049,&g_1049,&g_1049,&g_1049},{&g_1049,&g_1049,&g_1049,(void*)0},{&g_1049,(void*)0,(void*)0,&g_1049}},{{&g_1049,&g_1049,(void*)0,(void*)0},{&g_1049,&g_1049,&g_1049,(void*)0},{&g_1049,&g_1049,(void*)0,(void*)0},{(void*)0,&g_1049,(void*)0,&g_1049}},{{&g_1049,(void*)0,(void*)0,&g_1049},{(void*)0,&g_1049,(void*)0,&g_1049},{&g_1049,&g_1049,&g_1049,&g_1049},{&g_1049,&g_1049,(void*)0,&g_1049}}};
static int8_t *****g_1075 = (void*)0;
static struct S1 *g_1100 = &g_723[1][0][2];
static struct S1 **g_1099 = &g_1100;
static const int8_t **g_1114 = (void*)0;
static const int8_t ***g_1113 = &g_1114;
static const int8_t ****g_1112 = &g_1113;
static const int8_t *****g_1111 = &g_1112;
static const int8_t *****g_1115 = &g_1112;
static int16_t g_1155 = (-1L);
static int32_t g_1388 = 1L;
static int32_t * const *g_1437[1][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
static int32_t * const **g_1436 = &g_1437[0][0];
static uint32_t g_1477 = 0xAD1FE3AFL;
static int32_t g_1517[4][5][4] = {{{0x8734D0E2L,0xA9508BFAL,1L,(-1L)},{(-1L),(-1L),1L,(-4L)},{0x90A32731L,(-6L),0x90A32731L,1L},{0x3D1240AAL,0x18FF359CL,0x0F18CECCL,(-1L)},{(-1L),0xEE689C2AL,(-1L),0x18FF359CL}},{{1L,1L,(-1L),0xC7139676L},{(-1L),1L,0x0F18CECCL,0xA9508BFAL},{0x3D1240AAL,1L,0x90A32731L,0x90A32731L},{0x90A32731L,0x90A32731L,1L,0x3D1240AAL},{0xA9508BFAL,0x0F18CECCL,1L,(-1L)}},{{0xC7139676L,(-1L),1L,1L},{0x18FF359CL,(-1L),0xEE689C2AL,(-1L)},{(-1L),0x0F18CECCL,0x18FF359CL,0x3D1240AAL},{1L,0x90A32731L,(-6L),0x90A32731L},{(-4L),1L,(-1L),0xA9508BFAL}},{{(-3L),1L,(-6L),0xC7139676L},{(-6L),1L,0x8734D0E2L,0x18FF359CL},{(-6L),0xEE689C2AL,(-6L),(-1L)},{(-3L),0x18FF359CL,(-1L),1L},{(-4L),(-6L),(-6L),(-4L)}}};
static uint64_t *** const *g_1562 = &g_211[0];
static uint64_t *** const **g_1561[5][5] = {{&g_1562,&g_1562,&g_1562,&g_1562,&g_1562},{&g_1562,&g_1562,&g_1562,&g_1562,&g_1562},{&g_1562,&g_1562,&g_1562,&g_1562,&g_1562},{&g_1562,&g_1562,&g_1562,&g_1562,&g_1562},{&g_1562,&g_1562,&g_1562,&g_1562,&g_1562}};
static int64_t g_1602 = (-3L);
static struct S0 g_1614 = {0xC7FD0B4F3EA380C8LL,0x77L,-1L,0xDFL,0x27L};
static uint32_t g_1651 = 0xD9E5EA48L;
static uint8_t g_1665 = 1UL;
static int64_t g_1726 = 1L;



static uint64_t  func_1(void);
static int32_t * const  func_4(int32_t * p_5, struct S0  p_6, uint8_t  p_7, int32_t * p_8);
static struct S0  func_10(struct S1  p_11, struct S0  p_12);
static struct S1  func_13(int64_t  p_14, uint32_t  p_15);
static uint32_t  func_16(int32_t * p_17, int8_t  p_18, int32_t * p_19, int32_t  p_20);
static int32_t * func_21(int32_t * p_22);
static int32_t * func_34(int32_t * p_35);
static struct S1  func_36(int32_t * p_37, struct S1  p_38, uint64_t  p_39, int16_t  p_40);




static uint64_t  func_1(void)
{ 
    int8_t l_2[4];
    int32_t l_385 = 0xB4DF4E63L;
    int32_t *l_386 = &g_3;
    int32_t l_1395 = 0xF5AA3757L;
    int32_t l_1396 = (-1L);
    int32_t l_1398[4][3] = {{0xF7EC43D8L,4L,0xF7EC43D8L},{0L,0L,0L},{0xF7EC43D8L,4L,0xF7EC43D8L},{0L,0L,0L}};
    uint16_t l_1405[3][4][4] = {{{0x0C8BL,0x9378L,0x0C8BL,0xF5EFL},{0x0C8BL,0xF5EFL,0x0C8BL,0x9378L},{0x0C8BL,0x9378L,0x0C8BL,0xF5EFL},{0x0C8BL,0xF5EFL,0x0C8BL,0x9378L}},{{0x0C8BL,0x9378L,0x0C8BL,0xF5EFL},{0x0C8BL,0xF5EFL,0x0C8BL,0x9378L},{0x0C8BL,0x9378L,0x0C8BL,0xF5EFL},{0x0C8BL,0xF5EFL,0x0C8BL,0x9378L}},{{0x0C8BL,0x9378L,0x0C8BL,0xF5EFL},{0x0C8BL,0xF5EFL,0x0C8BL,0x9378L},{0x0C8BL,0x9378L,0x0C8BL,0xF5EFL},{0x0C8BL,0xF5EFL,0x0C8BL,0x9378L}}};
    int8_t l_1495 = 1L;
    uint16_t *l_1496 = &l_1405[1][2][0];
    uint32_t l_1515 = 1UL;
    int64_t l_1520 = 0x418005205C389420LL;
    uint16_t l_1547 = 0UL;
    uint64_t ****l_1564[1];
    uint64_t *****l_1563 = &l_1564[0];
    int64_t l_1598 = (-1L);
    struct S0 *l_1613 = &g_1614;
    int32_t * const l_1669 = &g_723[1][0][2].f4;
    const uint32_t l_1683 = 1UL;
    int32_t l_1689[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int64_t l_1692 = 0L;
    union U2 l_1696[2][4][1] = {{{{-10L}},{{0x81A7EE2DL}},{{-10L}},{{0x81A7EE2DL}}},{{{-10L}},{{0x81A7EE2DL}},{{-10L}},{{0x81A7EE2DL}}}};
    int16_t l_1697 = (-10L);
    int64_t l_1700 = (-9L);
    uint32_t l_1707 = 0x7AEFB35CL;
    int32_t l_1725 = 4L;
    uint64_t l_1727 = 0xB0671566A8BC092DLL;
    struct S1 l_1731 = {0UL,0x7DL,0x12BFDA73L,0UL,0x0627AD73L};
    uint32_t *l_1736 = &g_1477;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2[i] = 0x09L;
    for (i = 0; i < 1; i++)
        l_1564[i] = &g_211[3];
    for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
    { 
        int32_t *l_9 = &g_3;
        int32_t **l_1356 = &l_9;
        uint64_t ***l_1385[5] = {&g_212,&g_212,&g_212,&g_212,&g_212};
        struct S1 l_1389 = {0x8FA1L,0x73L,18446744073709551611UL,0x70L,0x5D20D044L};
        int64_t l_1391 = 0L;
        int32_t *l_1393 = &g_720[3];
        int32_t *l_1394[5][2][7] = {{{(void*)0,&g_462.f4,&g_3,&g_3,(void*)0,&g_50.f4,(void*)0},{&g_26,&g_26,&g_26,&g_26,(void*)0,&l_385,&g_26}},{{(void*)0,&g_50.f4,&g_720[2],&g_462.f4,&g_720[2],&g_50.f4,(void*)0},{&g_26,&g_26,(void*)0,&g_26,&g_26,&g_26,&g_26}},{{&g_3,&g_720[3],&g_3,&g_26,&g_720[2],&g_3,&g_720[3]},{&g_26,&g_720[0],(void*)0,(void*)0,&g_720[0],&g_26,&g_720[0]}},{{&g_3,&g_26,&g_720[2],&g_3,&g_720[3],&g_3,&g_720[2]},{&g_26,&g_26,&g_26,(void*)0,&g_26,&g_26,&g_26}},{{(void*)0,&g_26,(void*)0,&g_26,(void*)0,&g_50.f4,&g_720[2]},{&l_385,&g_720[0],&l_385,&g_26,&g_26,&l_385,&g_720[0]}}};
        int64_t l_1397 = 0xA9F687B474FE4139LL;
        uint32_t l_1399 = 3UL;
        int16_t *l_1408 = &g_1155;
        uint8_t l_1409[3];
        uint32_t **** const *l_1410[6][5][6] = {{{&g_1048[3][3][1],&g_1048[0][3][1],&g_1048[0][3][1],&g_1048[4][2][1],(void*)0,&g_1048[4][2][1]},{&g_1048[1][0][0],&g_1048[0][3][1],&g_1048[1][0][0],&g_1048[5][2][2],&g_1048[0][3][1],(void*)0},{(void*)0,&g_1048[4][0][3],&g_1048[1][0][0],&g_1048[3][0][3],&g_1048[3][3][1],&g_1048[4][2][1]},{&g_1048[4][0][3],&g_1048[3][0][3],&g_1048[0][3][1],&g_1048[3][0][3],&g_1048[4][0][3],&g_1048[5][2][2]},{(void*)0,&g_1048[4][2][1],&g_1048[2][3][2],&g_1048[5][2][2],&g_1048[4][0][3],&g_1048[3][0][3]}},{{&g_1048[1][0][0],&g_1048[3][0][3],&g_1048[3][3][1],&g_1048[4][2][1],&g_1048[3][3][1],&g_1048[3][0][3]},{&g_1048[3][3][1],&g_1048[4][0][3],&g_1048[2][3][2],(void*)0,&g_1048[0][3][1],&g_1048[5][2][2]},{&g_1048[3][3][1],&g_1048[0][3][1],&g_1048[0][3][1],&g_1048[4][2][1],(void*)0,&g_1048[4][2][1]},{&g_1048[1][0][0],&g_1048[0][3][1],&g_1048[1][0][0],&g_1048[5][2][2],&g_1048[0][3][1],(void*)0},{(void*)0,&g_1048[4][0][3],&g_1048[1][0][0],&g_1048[3][0][3],&g_1048[3][3][1],&g_1048[4][2][1]}},{{&g_1048[4][0][3],&g_1048[3][0][3],&g_1048[0][3][1],&g_1048[3][0][3],&g_1048[4][0][3],&g_1048[5][2][2]},{(void*)0,&g_1048[4][2][1],&g_1048[2][3][2],&g_1048[5][2][2],&g_1048[4][0][3],&g_1048[3][0][3]},{&g_1048[1][0][0],&g_1048[3][0][3],&g_1048[3][3][1],&g_1048[4][2][1],&g_1048[3][3][1],&g_1048[3][0][3]},{&g_1048[3][3][1],&g_1048[4][0][3],&g_1048[2][3][2],(void*)0,&g_1048[0][3][1],&g_1048[5][2][2]},{&g_1048[3][3][1],&g_1048[0][3][1],&g_1048[0][3][1],&g_1048[4][2][1],(void*)0,&g_1048[4][2][1]}},{{&g_1048[1][0][0],&g_1048[0][3][1],&g_1048[1][0][0],&g_1048[5][2][2],&g_1048[0][3][1],(void*)0},{(void*)0,&g_1048[4][0][3],&g_1048[1][0][0],&g_1048[3][0][3],&g_1048[3][3][1],&g_1048[4][2][1]},{&g_1048[4][0][3],&g_1048[3][0][3],&g_1048[0][3][1],&g_1048[3][0][3],&g_1048[4][0][3],&g_1048[5][2][2]},{(void*)0,&g_1048[4][2][1],&g_1048[2][3][2],&g_1048[5][2][2],&g_1048[4][0][3],&g_1048[3][0][3]},{&g_1048[1][0][0],&g_1048[3][0][3],&g_1048[3][3][1],&g_1048[4][2][1],&g_1048[3][3][1],&g_1048[3][0][3]}},{{&g_1048[3][3][1],&g_1048[4][0][3],&g_1048[2][3][2],(void*)0,&g_1048[0][3][1],&g_1048[5][2][2]},{&g_1048[3][3][1],&g_1048[0][3][1],&g_1048[0][3][1],&g_1048[4][2][1],(void*)0,&g_1048[4][2][1]},{&g_1048[1][0][0],&g_1048[5][0][1],&g_1048[4][0][3],(void*)0,&g_1048[3][3][1],&g_1048[0][3][1]},{&g_1048[1][0][0],&g_1048[4][2][1],&g_1048[4][0][3],&g_1048[4][0][3],(void*)0,&g_1048[5][2][2]},{&g_1048[2][3][2],&g_1048[4][0][3],&g_1048[3][3][1],&g_1048[4][0][3],&g_1048[2][3][2],(void*)0}},{{&g_1048[1][0][0],&g_1048[5][2][2],&g_1048[0][3][1],(void*)0,&g_1048[2][3][2],&g_1048[4][0][3]},{&g_1048[4][0][3],&g_1048[4][0][3],(void*)0,&g_1048[5][2][2],(void*)0,&g_1048[4][0][3]},{(void*)0,&g_1048[4][2][1],&g_1048[0][3][1],&g_1048[0][3][1],&g_1048[3][3][1],(void*)0},{(void*)0,&g_1048[5][0][1],&g_1048[3][3][1],&g_1048[5][2][2],(void*)0,&g_1048[5][2][2]},{&g_1048[4][0][3],&g_1048[5][0][1],&g_1048[4][0][3],(void*)0,&g_1048[3][3][1],&g_1048[0][3][1]}}};
        int64_t l_1417[2][7] = {{5L,0L,(-1L),(-1L),0L,5L,0L},{1L,5L,5L,1L,0L,1L,5L}};
        const union U2 l_1421 = {-4L};
        union U2 l_1534 = {0xE9BAB6F7L};
        uint8_t l_1565 = 1UL;
        int32_t l_1606 = 0x10F427B8L;
        uint32_t l_1693 = 1UL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1409[i] = 7UL;
    }
    (*g_1100) = func_13((*l_386), (+(((*l_1669) , func_36(&l_1398[3][0], l_1731, (*l_386), ((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((*l_386) & ((*l_1736) &= (*g_341))), (**g_141))), (*l_1669))) , g_47.f0))) , (*l_386))));
    return (*l_386);
}



static int32_t * const  func_4(int32_t * p_5, struct S0  p_6, uint8_t  p_7, int32_t * p_8)
{ 
    uint16_t l_1353 = 0xB901L;
    int32_t *l_1354[3];
    uint8_t l_1355 = 0x2FL;
    int i;
    for (i = 0; i < 3; i++)
        l_1354[i] = &g_462.f4;
    l_1355 |= l_1353;
    return l_1354[2];
}



static struct S0  func_10(struct S1  p_11, struct S0  p_12)
{ 
    int16_t l_1014 = 1L;
    int16_t *l_1015 = &l_1014;
    const uint16_t *l_1022 = &g_462.f0;
    const uint16_t **l_1021[3][7] = {{&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022,&l_1022}};
    int32_t l_1026 = 0x9D8F08DDL;
    uint8_t l_1027 = 0x38L;
    int32_t **l_1028 = &g_109;
    int32_t l_1031 = (-10L);
    uint32_t ***l_1045 = &g_340[3][1];
    uint32_t ****l_1044 = &l_1045;
    int8_t **l_1053 = &g_192;
    struct S1 ** const l_1101 = &g_1100;
    union U2 *l_1121 = &g_47;
    uint16_t l_1156 = 0xF0D7L;
    uint32_t l_1190 = 0xC165D4FCL;
    int32_t l_1222[5][4] = {{0x504EB934L,(-8L),0xACCBF556L,0xACCBF556L},{(-1L),(-1L),0x504EB934L,0xACCBF556L},{1L,(-8L),1L,0x504EB934L},{1L,0x504EB934L,0x504EB934L,1L},{(-1L),0x504EB934L,0xACCBF556L,0x504EB934L}};
    struct S0 l_1260[1][1][1] = {{{{18446744073709551606UL,0x7FL,3L,0x92L,-1L}}}};
    int64_t ***l_1269[2][6][6] = {{{&g_921,&g_921,&g_921,&g_921,&g_921,&g_921},{&g_921,&g_921,&g_921,&g_921,(void*)0,&g_921},{&g_921,(void*)0,&g_921,&g_921,&g_921,&g_921},{&g_921,&g_921,&g_921,&g_921,&g_921,&g_921},{&g_921,(void*)0,&g_921,&g_921,(void*)0,&g_921},{&g_921,&g_921,&g_921,&g_921,&g_921,&g_921}},{{&g_921,&g_921,&g_921,&g_921,(void*)0,&g_921},{&g_921,(void*)0,&g_921,&g_921,&g_921,&g_921},{&g_921,&g_921,&g_921,&g_921,&g_921,&g_921},{&g_921,(void*)0,&g_921,&g_921,(void*)0,&g_921},{&g_921,&g_921,&g_921,&g_921,&g_921,&g_921},{&g_921,&g_921,&g_921,&g_921,(void*)0,&g_921}}};
    int16_t l_1341[1][2];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1341[i][j] = 0xF755L;
    }
    l_1026 = (safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s((((safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((*l_1015) = l_1014), 0x2151L)) >= (p_11.f4 >= (p_11.f4 < (safe_mod_func_int8_t_s_s(((**g_141) = (!((p_11.f3 = (((++(*g_213)) , &g_235) == l_1021[2][4])) == (safe_lshift_func_uint8_t_u_s(g_1025, 0))))), p_12.f0))))), p_12.f2)) == l_1026) <= l_1027), g_119.f3)), l_1026));
    (*l_1028) = &l_1026;
    if (p_11.f2)
    { 
        int32_t *l_1029 = &g_462.f4;
        int32_t *l_1030[6][1];
        uint32_t l_1032 = 0x593AD0D9L;
        int64_t l_1076 = 0xFD03DC1822BD8FA6LL;
        int32_t ***l_1096[7][5][1] = {{{&g_108[5][1]},{(void*)0},{&g_108[2][0]},{&l_1028},{&g_108[5][1]}},{{&l_1028},{&g_108[2][0]},{(void*)0},{&g_108[5][1]},{&g_108[5][1]}},{{&g_108[5][1]},{&g_108[5][1]},{(void*)0},{&g_108[2][0]},{&l_1028}},{{&g_108[5][1]},{&l_1028},{&g_108[5][1]},{&g_108[5][1]},{&l_1028}},{{&g_108[2][5]},{&g_108[2][5]},{&l_1028},{&g_108[5][1]},{&g_108[5][1]}},{{&l_1028},{&g_108[5][1]},{&l_1028},{&g_108[5][1]},{&g_108[5][1]}},{{&l_1028},{&g_108[2][5]},{&g_108[2][5]},{&l_1028},{&g_108[5][1]}}};
        uint32_t l_1102[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
        uint32_t ****l_1107 = &l_1045;
        const int8_t ***l_1110 = (void*)0;
        const int8_t ****l_1109 = &l_1110;
        const int8_t *****l_1108[7];
        union U2 *l_1122 = &g_47;
        uint64_t *l_1123 = &g_47.f1;
        uint64_t *l_1124 = &g_1005.f0;
        int32_t l_1125 = 0L;
        int16_t l_1173 = (-1L);
        const int16_t l_1199[5][4] = {{0x903FL,4L,4L,0x903FL},{0x903FL,4L,4L,0x903FL},{0x903FL,4L,4L,0x903FL},{0x903FL,4L,4L,0x903FL},{0x903FL,4L,4L,0x903FL}};
        int64_t l_1267 = (-1L);
        struct S0 l_1302 = {1UL,0xB4L,-3L,1UL,0x0AL};
        uint16_t l_1334 = 0xD123L;
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_1030[i][j] = &l_1026;
        }
        for (i = 0; i < 7; i++)
            l_1108[i] = &l_1109;
        l_1032++;
lbl_1251:
        for (g_74 = (-4); (g_74 != 12); g_74 = safe_add_func_int64_t_s_s(g_74, 8))
        { 
            int32_t l_1043[7][2][7] = {{{(-10L),1L,0xF270ED14L,1L,1L,(-10L),0xE170FB8DL},{0xB0B174B0L,0xA4707339L,(-1L),0xE170FB8DL,(-10L),0L,0L}},{{(-1L),3L,0xF270ED14L,3L,(-1L),0x4A5BB650L,0x1068828DL},{0x1068828DL,3L,0L,1L,1L,0x3FBE14BBL,(-10L)}},{{3L,0xA4707339L,1L,0xEF394C26L,0xF270ED14L,0xF270ED14L,0xEF394C26L},{0x1068828DL,1L,0x1068828DL,0xF270ED14L,(-10L),0xA4707339L,0xEF394C26L}},{{(-1L),(-2L),0x3FBE14BBL,0x4A5BB650L,0xEF394C26L,0x1068828DL,(-10L)},{0xB0B174B0L,0x1068828DL,0xA4707339L,(-2L),(-2L),0xA4707339L,0x1068828DL}},{{(-10L),1L,0xE170FB8DL,0xB0B174B0L,(-2L),0xF270ED14L,0L},{1L,(-1L),1L,0L,0xEF394C26L,0x3FBE14BBL,0xE170FB8DL}},{{0x4A5BB650L,(-10L),0xB0B174B0L,0xB0B174B0L,(-10L),0x4A5BB650L,1L},{1L,0xE170FB8DL,0xB0B174B0L,(-2L),0xF270ED14L,0L,(-10L)}},{{0L,0xEF394C26L,1L,0x4A5BB650L,1L,(-10L),1L},{0xF270ED14L,0xE170FB8DL,0xE170FB8DL,0xF270ED14L,(-1L),(-2L),0x3FBE14BBL}}};
            int8_t ****l_1074 = &g_140[0];
            int8_t *****l_1073 = &l_1074;
            uint32_t l_1079[7][2][7] = {{{0xD7F76719L,0x951C864FL,0UL,0UL,0x951C864FL,0xD7F76719L,0x951C864FL},{18446744073709551615UL,0xD7F76719L,0xD7F76719L,18446744073709551615UL,0x951C864FL,18446744073709551615UL,0xD7F76719L}},{{0x04B9B53FL,0x04B9B53FL,0xD7F76719L,0UL,0xD7F76719L,0x04B9B53FL,0x04B9B53FL},{0x04B9B53FL,0xD7F76719L,0UL,0xD7F76719L,0x04B9B53FL,0x04B9B53FL,0xD7F76719L}},{{18446744073709551615UL,0x951C864FL,18446744073709551615UL,0xD7F76719L,0xD7F76719L,18446744073709551615UL,0x951C864FL},{0xD7F76719L,0x951C864FL,0UL,0UL,0x951C864FL,0xD7F76719L,0x951C864FL}},{{18446744073709551615UL,0xD7F76719L,0xD7F76719L,18446744073709551615UL,0x951C864FL,18446744073709551615UL,0xD7F76719L},{0x04B9B53FL,0xD7F76719L,18446744073709551615UL,0x951C864FL,18446744073709551615UL,0xD7F76719L,0xD7F76719L}},{{0xD7F76719L,18446744073709551615UL,0x951C864FL,18446744073709551615UL,0xD7F76719L,0xD7F76719L,18446744073709551615UL},{0UL,0x04B9B53FL,0UL,18446744073709551615UL,18446744073709551615UL,0UL,0x04B9B53FL}},{{18446744073709551615UL,0x04B9B53FL,0x951C864FL,0x951C864FL,0x04B9B53FL,18446744073709551615UL,0x04B9B53FL},{0UL,18446744073709551615UL,18446744073709551615UL,0UL,0x04B9B53FL,0UL,18446744073709551615UL}},{{0xD7F76719L,0xD7F76719L,18446744073709551615UL,0x951C864FL,18446744073709551615UL,0xD7F76719L,0xD7F76719L},{0xD7F76719L,18446744073709551615UL,0x951C864FL,18446744073709551615UL,0xD7F76719L,0xD7F76719L,18446744073709551615UL}}};
            int i, j, k;
            if ((g_50.f0 || (**l_1028)))
            { 
                struct S1 *l_1037 = (void*)0;
                struct S1 *l_1038 = (void*)0;
                struct S1 *l_1039[7] = {&g_723[1][0][2],&g_723[1][0][2],&g_723[1][0][2],&g_723[1][0][2],&g_723[1][0][2],&g_723[1][0][2],&g_723[1][0][2]};
                int32_t *l_1040 = &l_1031;
                uint32_t ****l_1046[4];
                uint32_t *****l_1047[6][1] = {{&l_1046[3]},{&l_1046[1]},{&l_1046[3]},{&l_1046[1]},{&l_1046[3]},{&l_1046[1]}};
                int8_t **l_1054 = &g_142;
                int32_t l_1055 = 0xBE9E0903L;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1046[i] = &l_1045;
                p_11 = p_11;
                (*l_1028) = l_1040;
                if ((((safe_add_func_int32_t_s_s(l_1043[1][0][6], (l_1044 == (g_1048[4][0][3] = l_1046[3])))) <= (+(safe_sub_func_int32_t_s_s(((*g_142) != l_1043[1][0][6]), ((***g_1049) <= ((l_1053 == l_1054) || (*l_1040))))))) , p_12.f1))
                { 
                    uint16_t l_1056 = 0x049BL;
                    l_1056++;
                    if (p_12.f3)
                        break;
                    (*l_1029) &= ((*l_1040) = l_1043[4][1][2]);
                    if ((**l_1028))
                        continue;
                }
                else
                { 
                    uint64_t l_1059 = 0x2A4FA00CFBB4FA45LL;
                    int32_t l_1077 = 0x5A82D10EL;
                    int32_t l_1078[1][5][5] = {{{0xB0AC62DEL,(-1L),0x4A3FFF3DL,(-1L),0xB0AC62DEL},{0x6162ADB2L,(-1L),1L,(-1L),0x6162ADB2L},{0xB0AC62DEL,(-1L),0x4A3FFF3DL,(-1L),0xB0AC62DEL},{0x6162ADB2L,(-1L),1L,(-1L),0x6162ADB2L},{0xB0AC62DEL,(-1L),0x4A3FFF3DL,(-1L),0xB0AC62DEL}}};
                    int i, j, k;
                    l_1059--;
                    (*l_1073) = ((((safe_mul_func_int8_t_s_s(((!p_11.f2) > (safe_sub_func_uint32_t_u_u(((l_1059 == (safe_mod_func_uint8_t_u_u((((*l_1015) = (0L && (safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(((l_1043[1][0][6] = 4294967295UL) | (0x5BAA899AL > (((l_1073 != (p_11.f2 , g_1075)) != l_1059) >= (*g_142)))), l_1076)) ^ p_11.f1), (*l_1040))))) >= 0x14BFL), p_12.f3))) || (**l_1028)), 4294967295UL))), p_12.f1)) ^ p_12.f4) != p_12.f4) , (*l_1073));
                    l_1079[4][1][2]--;
                    p_11.f4 = 0xD448E57DL;
                    if (l_1043[6][1][2])
                        break;
                }
                (*l_1028) = l_1030[5][0];
            }
            else
            { 
                int16_t l_1084[1];
                int32_t ***l_1095[7][4] = {{&l_1028,&g_108[5][1],&l_1028,&g_108[5][1]},{&g_108[5][1],&l_1028,&l_1028,&l_1028},{&l_1028,&l_1028,&g_108[5][1],&l_1028},{&l_1028,&l_1028,&l_1028,&g_108[5][1]},{&l_1028,&g_108[5][1],&g_108[5][1],&l_1028},{&l_1028,&g_108[5][1],&l_1028,&g_108[5][1]},{&g_108[5][1],&l_1028,&l_1028,&l_1028}};
                int32_t ****l_1097 = (void*)0;
                int32_t ****l_1098 = &l_1096[4][4][0];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1084[i] = 0xCB86L;
                p_11.f4 = ((g_50 , (safe_lshift_func_int16_t_s_s(((*l_1015) = ((((*g_213) > ((((l_1084[0] >= ((safe_div_func_uint8_t_u_u(((((**g_921) = (safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(l_1079[4][1][2], 4)), 0xA1E48D0EL))) == ((safe_sub_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((l_1095[5][3] != ((*l_1098) = l_1096[6][2][0])), l_1043[1][0][6])) && 0L) , g_47.f0), l_1079[3][0][3])) != p_12.f4)) > (**l_1028)), 0xC5L)) > p_12.f1)) >= 0x90B04A4D434735B5LL) , g_1099) == l_1101)) && p_12.f4) || (*g_922))), p_12.f4))) < l_1102[3]);
            }
            (*g_109) = ((++p_11.f0) < (l_1107 == &g_1049));
        }
        g_1115 = (g_1111 = l_1108[5]);
        if ((safe_div_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_u(((((*l_1124) |= (((((*g_142) = 0x87L) < ((&l_1044 != &l_1107) | 2UL)) == ((**g_212) ^= (safe_unary_minus_func_int8_t_s(((g_1005.f1 , l_1121) == l_1122))))) ^ 5UL)) ^ p_11.f2) >= (**l_1028)), l_1125)) == g_47.f0) && p_11.f2) || p_12.f0), (**l_1028))))
        { 
            uint32_t l_1128 = 0x7BFFC189L;
            uint16_t l_1137 = 65526UL;
            uint32_t l_1138 = 0xF9D1A64EL;
            (*l_1029) ^= ((safe_add_func_int16_t_s_s((l_1128 = p_11.f4), ((**l_1028) , (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((*g_922) = 0L), ((0UL ^ p_12.f0) <= ((((safe_mul_func_int8_t_s_s((p_11.f2 | p_11.f4), l_1137)) | l_1137) <= 0x92E6L) == 248UL)))), 1UL)), l_1138))))) ^ p_11.f0);
        }
        else
        { 
            int32_t l_1154 = 0xDC11BE3CL;
            int32_t l_1157 = 1L;
            uint8_t * const l_1168[5] = {&g_119.f1,&g_119.f1,&g_119.f1,&g_119.f1,&g_119.f1};
            int8_t **l_1172 = &g_192;
            uint16_t *l_1182[2];
            int32_t *l_1203 = &g_720[3];
            int32_t l_1214 = (-1L);
            uint32_t l_1224 = 1UL;
            int8_t ****l_1244 = &g_140[2];
            int16_t l_1288 = 0x8AA8L;
            int64_t l_1332[3];
            int64_t l_1333 = 0x516772784C4FDBD0LL;
            int32_t l_1342 = 0x06D84ED7L;
            int32_t l_1343[1];
            int8_t l_1348 = 0xF1L;
            uint8_t l_1349 = 2UL;
            int i;
            for (i = 0; i < 2; i++)
                l_1182[i] = &g_462.f0;
            for (i = 0; i < 3; i++)
                l_1332[i] = 0L;
            for (i = 0; i < 1; i++)
                l_1343[i] = 1L;
            l_1157 = (!(((safe_rshift_func_uint16_t_u_u(((*g_1099) == (void*)0), (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u(((safe_mod_func_uint16_t_u_u(0x2940L, ((((**l_1028) = p_11.f2) > p_12.f3) && (safe_add_func_int8_t_s_s((**l_1028), (((*l_1015) = (p_12.f0 , (-5L))) , (**l_1028))))))) && l_1154), p_12.f2)) >= g_1155), 0x07E6L)), p_12.f0)), 18446744073709551606UL)))) , 0xEC84DD0FL) , l_1156));
            for (g_50.f2 = 15; (g_50.f2 < 9); g_50.f2 = safe_sub_func_int16_t_s_s(g_50.f2, 4))
            { 
                int32_t l_1162 = 0xE1E878D7L;
                for (g_462.f3 = 12; (g_462.f3 >= 4); g_462.f3--)
                { 
                    l_1162 = (**l_1028);
                }
            }
            if ((safe_sub_func_int8_t_s_s(((*g_142) ^= (((safe_unary_minus_func_uint8_t_u(g_3)) == (safe_mul_func_int8_t_s_s((&l_1027 != l_1168[0]), (safe_unary_minus_func_uint64_t_u((safe_mul_func_uint8_t_u_u(p_12.f0, ((l_1157 = ((((*l_1029) = ((*g_109) = p_12.f2)) | (l_1173 ^= (g_720[2] , (l_1053 != l_1172)))) ^ g_73[0][1])) && 1L)))))))) && p_12.f3)), 0x98L)))
            { 
                uint16_t *l_1181[6] = {&l_1156,&g_462.f0,&l_1156,&l_1156,&g_462.f0,&l_1156};
                int32_t l_1198 = 1L;
                int32_t *l_1204 = &l_1026;
                int32_t l_1215 = (-1L);
                int32_t l_1216 = 0x471D1282L;
                uint16_t l_1218[4];
                int32_t l_1223 = (-1L);
                int i;
                for (i = 0; i < 4; i++)
                    l_1218[i] = 0xD376L;
                if (((**l_1028) = (safe_lshift_func_int8_t_s_u(((+(safe_rshift_func_int8_t_s_u(((((***g_1049) &= ((safe_add_func_uint16_t_u_u(((l_1182[0] = l_1181[3]) == ((safe_add_func_uint32_t_u_u(((p_12.f3 , (**l_1028)) || ((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s(l_1190)) <= (l_1157 = ((+(((safe_add_func_uint8_t_u_u((p_12.f3 != ((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(p_12.f1, g_1005.f0)), 2)) >= p_12.f3)), p_11.f2)) < 0x00C6A93BL) , p_11.f0)) != 4294967295UL))), l_1198)) < (**g_212))), (*g_109))) , (void*)0)), g_913)) | g_73[2][2])) & (-1L)) > 0x17C4L), l_1198))) != l_1199[0][3]), 3))))
                { 
                    uint8_t l_1200[7][7][5] = {{{8UL,251UL,0UL,1UL,0xC7L},{0UL,0UL,249UL,0xF1L,0xFBL},{8UL,249UL,0x64L,8UL,0xBBL},{255UL,0x8BL,0xFBL,0xCFL,0x9DL},{0xC5L,249UL,249UL,0xC5L,251UL},{255UL,0UL,1UL,0x74L,0xD6L},{249UL,0UL,0xC5L,0xC7L,8UL}},{{0UL,0x5DL,0x37L,0x74L,0UL},{6UL,0xBBL,0x6AL,0xC5L,0UL},{0x14L,0UL,0xB6L,0xCFL,255UL},{249UL,8UL,8UL,8UL,249UL},{0xD6L,0xB6L,0x8BL,0xF1L,249UL},{0x91L,0UL,255UL,1UL,0x4AL},{249UL,0xFBL,1UL,0xD6L,0xD0L}},{{0x6AL,8UL,9UL,251UL,0UL},{0xD0L,0UL,0xB6L,0x9DL,249UL},{8UL,0x70L,0xBBL,0xBBL,0x70L},{0x72L,0xE6L,255UL,0xFBL,0UL},{9UL,8UL,6UL,0xC7L,0UL},{9UL,1UL,0x9DL,0xF1L,0xCFL},{9UL,251UL,0x70L,1UL,6UL}},{{0x72L,255UL,0x37L,0UL,0UL},{8UL,0UL,246UL,255UL,246UL},{0xD0L,0xD0L,249UL,0xE6L,0UL},{0x6AL,9UL,0UL,0x53L,0x4AL},{249UL,0UL,248UL,249UL,0UL},{0x53L,9UL,0xC5L,9UL,0x6AL},{0xCFL,0xD0L,0UL,0xB6L,0x9DL}},{{0UL,0UL,255UL,0UL,0UL},{0UL,255UL,0UL,1UL,0x74L},{0xC5L,251UL,0x4AL,246UL,1UL},{0x8BL,1UL,0UL,0UL,0x72L},{1UL,8UL,0x4AL,1UL,255UL},{0x37L,0xE6L,0UL,0x8BL,0xD6L},{249UL,0x70L,255UL,9UL,249UL}},{{248UL,0UL,0UL,248UL,1UL},{3UL,8UL,0xC5L,255UL,255UL},{0xE6L,0xFBL,248UL,0x72L,0x8BL},{0UL,0UL,0UL,255UL,8UL},{255UL,0xD6L,249UL,248UL,9UL},{0x91L,0UL,246UL,9UL,0xC7L},{0UL,0x8BL,0x37L,0x8BL,0UL}},{{255UL,246UL,0x70L,1UL,0x4FL},{0xF1L,0x51L,0x9DL,0UL,0x5DL},{255UL,9UL,6UL,246UL,0x4FL},{0x74L,0UL,255UL,1UL,0UL},{0x4FL,0UL,0xBBL,0UL,0xC7L},{0UL,9UL,0xB6L,0xB6L,9UL},{0x4AL,1UL,9UL,9UL,8UL}}};
                    int i, j, k;
                    l_1200[1][3][1]--;
                    l_1203 = &l_1157;
                    l_1204 = func_34((*l_1028));
                }
                else
                { 
                    return g_1005;
                }
                for (g_411 = (-9); (g_411 > (-19)); --g_411)
                { 
                    int64_t l_1217[4];
                    int32_t *l_1221 = (void*)0;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1217[i] = (-1L);
                    (*l_1029) ^= ((g_119 , ((g_209 = (+(safe_div_func_uint16_t_u_u((g_723[1][0][2].f1 ^ ((p_11.f0 ^ 1L) , (p_11.f0 = (*l_1203)))), (safe_sub_func_int8_t_s_s((p_12.f1 <= (g_462.f1 = (g_723[1][0][2].f3++))), 0xA9L)))))) == g_462.f0)) , (*l_1203));
                    l_1218[2]--;
                    if (p_12.f2)
                        break;
                }
                --l_1224;
                (*g_109) &= ((safe_div_func_int8_t_s_s(((((safe_mod_func_uint64_t_u_u(0x9F75FD214589CE9ALL, ((*l_1203) | (safe_lshift_func_int16_t_s_s((-3L), (((safe_lshift_func_int8_t_s_u(p_11.f3, 2)) , (*l_1203)) == (((safe_mod_func_uint32_t_u_u(4294967295UL, (((((safe_add_func_uint8_t_u_u((~(safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((((*l_1203) >= 0x5BL) & (-6L)) <= p_12.f0), 7L)), 4294967293UL))), g_723[1][0][2].f0)) || 9UL) & (*l_1029)) || p_11.f0) , (*g_341)))) , (void*)0) != (void*)0))))))) , l_1244) != (void*)0) , p_12.f0), p_11.f2)) || 0UL);
                for (p_11.f2 = 21; (p_11.f2 != 6); p_11.f2 = safe_sub_func_int32_t_s_s(p_11.f2, 5))
                { 
                    int32_t *l_1247 = (void*)0;
                    int32_t l_1248 = 0x0FAE309AL;
                    (*l_1028) = l_1247;
                    (*l_1029) ^= l_1248;
                    if ((*l_1203))
                        continue;
                    (*l_1029) ^= (safe_rshift_func_int16_t_s_u(g_119.f3, 12));
                }
            }
            else
            { 
                int16_t l_1254 = 6L;
                int32_t l_1255 = 0x8D6796B2L;
                int32_t l_1256 = 0xF24F928AL;
                union U2 l_1279 = {0xC39545D4L};
                int8_t *****l_1286[3];
                uint64_t ****l_1308[5][2] = {{&g_211[2],&g_211[2]},{&g_211[2],&g_211[2]},{&g_211[2],&g_211[2]},{&g_211[2],&g_211[2]},{&g_211[2],&g_211[2]}};
                uint64_t *****l_1307 = &l_1308[0][1];
                int32_t l_1344 = 0L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1286[i] = &l_1244;
                if (g_1005.f3)
                    goto lbl_1251;
                for (l_1076 = (-13); (l_1076 >= 19); l_1076 = safe_add_func_uint32_t_u_u(l_1076, 3))
                { 
                    uint64_t l_1257 = 0UL;
                    l_1257++;
                    if ((**l_1028))
                        continue;
                }
                if (p_12.f3)
                { 
                    return l_1260[0][0][0];
                }
                else
                { 
                    int32_t l_1278 = (-7L);
                    int8_t *****l_1287 = (void*)0;
                    l_1255 |= ((--(*g_341)) ^ (safe_sub_func_uint16_t_u_u((((p_11.f2 != l_1267) > (((~(&g_921 == l_1269[1][3][2])) || (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u(((**l_1028) = g_50.f1), 6)) <= 0x30FBC090L), (safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((p_11.f3 <= (*l_1203)) , g_26), g_3)), p_11.f4))))) >= (*l_1203))) & l_1278), g_462.f2)));
                    l_1278 ^= (l_1279 , (l_1279.f0 == (0xBAL | ((safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((((*l_1015) = ((((((****l_1107)++) > ((l_1287 = l_1286[0]) != &g_1112)) , (**l_1028)) && (**l_1028)) >= l_1279.f3)) && (**l_1028)), p_12.f3)), 1L)) != l_1288))));
                }
                (*l_1028) = ((safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((((safe_mod_func_int8_t_s_s((p_12.f3 & (safe_mul_func_uint8_t_u_u(p_11.f2, (((((~(**l_1028)) > (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(g_74, (l_1302 , 0xDE0FL))), (safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(((((*l_1307) = &g_211[0]) != &g_444) | 0x0D409A1BF25A267DLL), 9)), (*l_1203)))))) && (**l_1028)) , 18446744073709551615UL) , (*l_1203))))), (*g_142))) && p_11.f4) , (**g_212)), 0UL)), l_1279.f0)) , (void*)0);
                for (g_209 = 7; (g_209 > (-3)); g_209 = safe_sub_func_uint16_t_u_u(g_209, 1))
                { 
                    int64_t l_1331[6] = {0L,0L,(-7L),(-7L),0L,(-7L)};
                    int32_t l_1339 = 0x71F1E357L;
                    int32_t l_1340[3][5][3] = {{{0x1B9D3377L,1L,0L},{0x1B9D3377L,7L,(-5L)},{0xF1D9F3F0L,1L,(-5L)},{(-5L),(-1L),0L},{0xF1D9F3F0L,(-1L),0xF1D9F3F0L}},{{0x1B9D3377L,1L,0L},{0x1B9D3377L,7L,(-5L)},{0xF1D9F3F0L,1L,(-5L)},{(-5L),(-1L),0L},{0xF1D9F3F0L,(-1L),0xF1D9F3F0L}},{{0x1B9D3377L,1L,0L},{0x1B9D3377L,7L,(-5L)},{0xF1D9F3F0L,1L,(-5L)},{(-5L),(-1L),0L},{0xF1D9F3F0L,(-1L),0xF1D9F3F0L}}};
                    uint64_t l_1345[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1345[i] = 18446744073709551607UL;
                    p_11.f4 |= (*l_1203);
                    (*l_1029) ^= ((((safe_sub_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(((((!((safe_sub_func_uint16_t_u_u((((p_11.f4 & g_3) , (((safe_div_func_int32_t_s_s(((((((safe_rshift_func_uint16_t_u_u(5UL, (((**g_141) = ((safe_lshift_func_int8_t_s_s(((p_11.f0 = 0xAF13L) , (+(p_12.f2 > ((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_1331[5], p_11.f0)), l_1332[1])) <= 1L)))), p_12.f4)) ^ 0xB824L)) && 0xF5L))) , 0x48C7943FL) & l_1279.f0) < (***g_1049)) > l_1279.f0) & (*l_1203)), 0x7EA08940L)) > 0UL) >= p_12.f2)) || p_11.f3), l_1331[5])) | p_12.f1)) > p_11.f3) || l_1331[5]) && (*l_1203)), p_11.f3)) != l_1255) | g_1005.f1), l_1333)) <= l_1334) || 0xC3B7L) == p_12.f0);
                    (*l_1029) = ((safe_lshift_func_int8_t_s_u(((0x4C25A988L > (*g_341)) != (l_1331[3] == (*l_1029))), ((g_1155 ^= 0xE247L) | ((*l_1203) = g_47.f3)))) || (safe_div_func_uint64_t_u_u((p_12.f0 = ((*l_1203) == g_411)), (*g_922))));
                    l_1345[0]--;
                    --l_1349;
                }
            }
        }
    }
    else
    { 
        struct S1 l_1352 = {0x363BL,0x9CL,18446744073709551615UL,1UL,0xEE71F637L};
        (**l_1101) = l_1352;
    }
    return g_119;
}



static struct S1  func_13(int64_t  p_14, uint32_t  p_15)
{ 
    int32_t l_396 = 0x67EE8542L;
    int16_t *l_398 = &g_209;
    int32_t l_401 = (-1L);
    int32_t l_403 = 0xBB4C3228L;
    int32_t l_408 = 0L;
    int32_t l_409[3];
    uint64_t l_433 = 0x3E4DCCE7CC49C910LL;
    struct S1 *l_450 = &g_50;
    struct S1 **l_449 = &l_450;
    uint32_t l_456[6] = {0xE7017572L,0x6CBC35E8L,0xE7017572L,0xE7017572L,0x6CBC35E8L,0xE7017572L};
    int16_t l_535 = (-1L);
    int32_t l_538 = 6L;
    uint32_t l_539[7][6][6] = {{{5UL,0xE7246724L,4294967295UL,4294967295UL,0xDE652834L,4294967291UL},{0xD18FB334L,0x42430F28L,4294967292UL,4294967295UL,4294967293UL,0xE246B9FAL},{1UL,1UL,0xAA2EBA06L,4294967295UL,4294967293UL,4294967292UL},{0xDE652834L,0x42430F28L,5UL,0x42430F28L,0xDE652834L,4294967295UL},{0xAA2EBA06L,0xE7246724L,0x0838D977L,4294967291UL,5UL,0UL},{0x0838D977L,8UL,0xDE652834L,0xE7246724L,0UL,0UL}},{{0x7B036447L,4294967292UL,0x0838D977L,0x1375A92CL,0x3045BCB3L,4294967295UL},{0UL,4294967295UL,5UL,0x5759A992L,0xAA2EBA06L,4294967292UL},{0xEBEF5EBBL,0x6A194E26L,0xAA2EBA06L,0x36E31872L,1UL,0xE246B9FAL},{0xEBEF5EBBL,4294967291UL,4294967292UL,0x5759A992L,4294967292UL,4294967291UL},{0UL,0x127874EFL,4294967295UL,0x1375A92CL,0x6C2C8947L,4294967295UL},{0x7B036447L,3UL,4294967293UL,0xE7246724L,1UL,0x36E31872L}},{{0x0838D977L,3UL,0xE560529EL,4294967291UL,0x6C2C8947L,8UL},{0xAA2EBA06L,0x127874EFL,0xD18FB334L,0x42430F28L,4294967292UL,4294967295UL},{0xDE652834L,4294967291UL,0xE487F7E6L,4294967295UL,1UL,3UL},{1UL,0x6A194E26L,0xE487F7E6L,4294967295UL,0xAA2EBA06L,4294967295UL},{0xD18FB334L,4294967295UL,0xD18FB334L,4294967295UL,0x3045BCB3L,8UL},{5UL,4294967292UL,0xE560529EL,1UL,0UL,0x36E31872L}},{{0x0805F7B6L,8UL,4294967293UL,1UL,5UL,4294967295UL},{5UL,0xE7246724L,4294967295UL,4294967295UL,0xDE652834L,4294967291UL},{0xD18FB334L,0x42430F28L,4294967292UL,4294967295UL,4294967293UL,0xE246B9FAL},{1UL,1UL,0xAA2EBA06L,4294967295UL,4294967293UL,4294967292UL},{0xDE652834L,0x42430F28L,5UL,0xE7246724L,0x0805F7B6L,0x5759A992L},{1UL,0x127874EFL,5UL,0x36E31872L,0xD18FB334L,0UL}},{{5UL,4294967295UL,0x0805F7B6L,0x127874EFL,0x6C2C8947L,0UL},{4294967293UL,1UL,5UL,4294967295UL,1UL,0x5759A992L},{0x6C2C8947L,8UL,0xD18FB334L,0x1375A92CL,1UL,1UL},{0xE560529EL,0x42430F28L,1UL,0x6A194E26L,0xE487F7E6L,4294967295UL},{0xE560529EL,0x36E31872L,0xDE652834L,0x1375A92CL,0xDE652834L,0x36E31872L},{0x6C2C8947L,0UL,0xAA2EBA06L,4294967295UL,4294967292UL,3UL}},{{4294967293UL,4294967295UL,0x0838D977L,0x127874EFL,1UL,0x6A194E26L},{5UL,4294967295UL,0x7B036447L,0x36E31872L,4294967292UL,4294967295UL},{1UL,0UL,0UL,0xE7246724L,0xDE652834L,8UL},{0x0805F7B6L,0x36E31872L,0xEBEF5EBBL,0x5759A992L,0xE487F7E6L,4294967295UL},{1UL,0x42430F28L,0xEBEF5EBBL,8UL,1UL,8UL},{0UL,8UL,0UL,3UL,1UL,4294967295UL}},{{0xD18FB334L,1UL,0x7B036447L,0xE246B9FAL,0x6C2C8947L,0x6A194E26L},{4294967295UL,4294967295UL,0x0838D977L,0xE246B9FAL,0xD18FB334L,3UL},{0xD18FB334L,0x127874EFL,0xAA2EBA06L,3UL,0x0805F7B6L,0x36E31872L},{0UL,0xE7246724L,0xDE652834L,8UL,0x0838D977L,4294967295UL},{1UL,0xE246B9FAL,1UL,0x5759A992L,0x0838D977L,1UL},{0x0805F7B6L,0xE7246724L,0xD18FB334L,0xE7246724L,0x0805F7B6L,0x5759A992L}}};
    int32_t l_585 = 0xB4741AC7L;
    int32_t l_586[7][5][3] = {{{1L,(-5L),1L},{0x5C09C347L,0xE7097235L,(-1L)},{1L,(-1L),0x3A854AE1L},{3L,0x5C09C347L,(-1L)},{1L,1L,1L}},{{4L,3L,0x50749110L},{0x43170C07L,0L,(-6L)},{0xB3E959C3L,0x8384DE8DL,0xA07E585BL},{(-6L),1L,0xB1F291D3L},{0x78224DA8L,0x8384DE8DL,0x1C313F0CL}},{{6L,0L,6L},{0x8384DE8DL,3L,0x5C09C347L},{(-5L),1L,0xEF7DC86EL},{0x1C313F0CL,0x5C09C347L,2L},{(-1L),(-1L),1L}},{{0x1C313F0CL,0xE7097235L,3L},{(-5L),(-5L),0L},{0x8384DE8DL,(-1L),0xAA89EB60L},{6L,0x8AB9ABC7L,(-5L)},{0x78224DA8L,0x1F1BAFF2L,0L}},{{(-6L),6L,(-5L)},{0xB3E959C3L,0xAA89EB60L,0xAA89EB60L},{0x43170C07L,(-1L),0L},{4L,0x50749110L,3L},{1L,1L,1L}},{{3L,0xE7097235L,0L},{0x8AB9ABC7L,1L,6L},{0x092659ADL,0x1F1BAFF2L,0x092659ADL},{1L,1L,(-1L)},{3L,2L,0x5C09C347L}},{{6L,(-1L),0x3A854AE1L},{0xB3E959C3L,0x78224DA8L,0x8384DE8DL},{6L,(-5L),(-1L)},{3L,3L,0x1F1BAFF2L},{1L,(-6L),0xB1F291D3L}}};
    uint32_t l_607 = 0UL;
    int8_t **l_614[7] = {&g_142,&g_142,&g_142,&g_142,&g_142,&g_142,&g_142};
    const uint64_t **l_619 = (void*)0;
    int32_t ***l_685[3];
    uint32_t ***l_737 = &g_340[3][1];
    int16_t l_778 = 0x338BL;
    int32_t l_829[1];
    uint32_t l_839 = 0UL;
    uint16_t l_854 = 0xCF0DL;
    int32_t l_877 = (-1L);
    uint8_t l_878 = 1UL;
    uint8_t l_879 = 9UL;
    uint32_t *l_880 = &l_539[2][3][0];
    int64_t *l_899 = &g_73[0][1];
    union U2 l_901[4][7] = {{{-1L},{1L},{-1L},{0xF3360F87L},{-1L},{-1L},{0xF3360F87L}},{{-9L},{0x17C452E0L},{-9L},{-1L},{0xF3360F87L},{-1L},{1L}},{{-1L},{1L},{-1L},{-1L},{-1L},{1L},{-1L}},{{1L},{0xD1D0DFBDL},{1L},{0xF3360F87L},{0x94F42317L},{-1L},{0x94F42317L}}};
    int16_t l_909 = 0x6043L;
    uint64_t l_997 = 4UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_409[i] = 3L;
    for (i = 0; i < 3; i++)
        l_685[i] = &g_108[6][2];
    for (i = 0; i < 1; i++)
        l_829[i] = 0x3B594F4BL;
lbl_497:
    for (g_50.f4 = 0; (g_50.f4 >= 8); g_50.f4++)
    { 
        int16_t *l_399 = &g_209;
        int32_t l_402 = (-8L);
        int32_t l_404 = 1L;
        int32_t l_405 = 0x802E3AF6L;
        int32_t l_406 = 0x8A6BC78BL;
        int32_t l_407 = 0x6A7DEAFAL;
        int32_t l_410 = (-1L);
        int32_t l_412 = 0L;
        int32_t l_413 = 0x7443F8EBL;
        int32_t l_414[4][5];
        int16_t l_415[1][2];
        uint64_t l_416[2];
        uint32_t l_419[2];
        struct S0 l_428 = {1UL,0xB6L,0L,9UL,-8L};
        int32_t **l_432 = &g_109;
        int32_t ***l_431 = &l_432;
        int32_t *l_434 = &l_412;
        uint64_t * const l_443[3] = {(void*)0,(void*)0,(void*)0};
        uint64_t * const *l_442 = &l_443[2];
        uint64_t * const **l_441 = &l_442;
        struct S1 **l_451 = &l_450;
        int32_t *l_454 = &g_411;
        int32_t *l_455[1][4][7] = {{{&l_412,&l_408,&l_403,&l_401,&l_414[1][4],&l_408,&l_408},{&l_403,&l_408,&l_412,&l_408,&l_403,&l_401,&l_414[1][4]},{&l_404,&l_409[1],&l_408,&l_401,&l_409[0],&l_401,&l_408},{&l_414[1][4],&l_414[1][4],&l_410,&l_412,&l_409[1],&l_408,&l_404}}};
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_414[i][j] = 0x3EEA5904L;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_415[i][j] = (-7L);
        }
        for (i = 0; i < 2; i++)
            l_416[i] = 18446744073709551615UL;
        for (i = 0; i < 2; i++)
            l_419[i] = 1UL;
        for (g_384.f3 = 0; (g_384.f3 == 3); g_384.f3 = safe_add_func_int16_t_s_s(g_384.f3, 6))
        { 
            int32_t *l_397 = &g_26;
            int32_t *l_400[2][5];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_400[i][j] = &g_26;
            }
            (*l_397) ^= l_396;
            (*l_397) ^= (l_398 == l_399);
            --l_416[1];
            l_419[1]--;
        }
        if ((safe_div_func_uint64_t_u_u(18446744073709551615UL, (safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((**g_212), (((*l_434) = (l_428 , ((((((g_384 , ((safe_div_func_uint64_t_u_u(l_401, (((g_108[5][1] = &g_109) != ((*l_431) = &g_109)) , l_433))) || (-2L))) , p_14) && p_14) <= p_15) & g_47.f2) <= p_15))) ^ 0xD5B5AC59L))), 3)))))
        { 
            uint64_t * const *l_440 = &g_213;
            uint64_t * const **l_439 = &l_440;
            const uint64_t ****l_446 = &g_444;
            (*l_434) = ((((((***l_439) = (2UL && (safe_div_func_int8_t_s_s(((18446744073709551615UL & (safe_sub_func_uint32_t_u_u(9UL, ((p_14 == (0x954689DDL <= ((l_441 = l_439) != ((*l_446) = g_444)))) || p_14)))) & 0x8ED2L), 247UL)))) && l_401) , 0x4F5B647A3EA6D4CDLL) >= p_15) == 4UL);
        }
        else
        { 
            for (g_47.f3 = 2; (g_47.f3 == 56); g_47.f3++)
            { 
                (*l_434) |= (l_449 == l_451);
            }
        }
        for (g_74 = 23; (g_74 == (-1)); g_74 = safe_sub_func_uint16_t_u_u(g_74, 4))
        { 
            return g_50;
        }
        --l_456[1];
        for (l_413 = 0; (l_413 == 0); l_413++)
        { 
            struct S1 *l_461 = &g_462;
            (*l_461) = g_50;
        }
    }
    for (g_74 = 0; (g_74 == (-24)); g_74--)
    { 
        int8_t **l_466 = &g_192;
        int32_t l_478[1][3][6] = {{{0x6C0F78F8L,2L,2L,0x6C0F78F8L,0x6C0F78F8L,2L},{0x6C0F78F8L,0x6C0F78F8L,2L,2L,0x6C0F78F8L,0x6C0F78F8L},{0x6C0F78F8L,2L,2L,0x6C0F78F8L,0x6C0F78F8L,2L}}};
        int32_t l_531[6][2][7] = {{{0x27F95D25L,0x6999CB3EL,0x27F95D25L,0x27F95D25L,0x6999CB3EL,0x27F95D25L,0x27F95D25L},{0x85CC2D09L,0x9F302C0DL,7L,0x9F302C0DL,0x85CC2D09L,(-1L),0x85CC2D09L}},{{0x6999CB3EL,0x27F95D25L,0x27F95D25L,0x6999CB3EL,0x27F95D25L,0x27F95D25L,0x6999CB3EL},{0x0A104614L,0x9F302C0DL,0x0A104614L,0x61A89A33L,0x85CC2D09L,0x61A89A33L,0x0A104614L}},{{0x6999CB3EL,0x6999CB3EL,0xFDBA518FL,0x6999CB3EL,0x6999CB3EL,0xFDBA518FL,0x6999CB3EL},{0x85CC2D09L,0x61A89A33L,0x0A104614L,0x9F302C0DL,0x0A104614L,0x61A89A33L,0x85CC2D09L}},{{0x27F95D25L,0x6999CB3EL,0x27F95D25L,0x27F95D25L,0x6999CB3EL,0x27F95D25L,0x27F95D25L},{0x85CC2D09L,0x9F302C0DL,7L,0x9F302C0DL,0x85CC2D09L,(-1L),0x85CC2D09L}},{{0x6999CB3EL,0x27F95D25L,0x27F95D25L,0x6999CB3EL,0x27F95D25L,0x27F95D25L,0x6999CB3EL},{0x0A104614L,0x9F302C0DL,0x0A104614L,0x61A89A33L,0x85CC2D09L,0x61A89A33L,0x0A104614L}},{{0x6999CB3EL,0x6999CB3EL,0xFDBA518FL,0x6999CB3EL,0x6999CB3EL,0x6999CB3EL,0x27F95D25L},{0x0A104614L,(-1L),7L,0x61A89A33L,7L,(-1L),0x0A104614L}}};
        uint8_t *l_547 = (void*)0;
        int i, j, k;
        l_409[2] = (-8L);
        for (g_31 = 0; (g_31 <= 1); g_31 += 1)
        { 
            union U2 l_465 = {0x295ACDAAL};
            int32_t **l_467 = &g_109;
            int32_t l_496[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
            union U2 *l_503 = &g_384;
            uint32_t l_509 = 0xB4713335L;
            int32_t *l_532 = (void*)0;
            int32_t *l_533 = &l_409[0];
            int32_t *l_534[4];
            int64_t l_536[6];
            int8_t l_537 = (-1L);
            struct S0 l_542 = {0xE6A28EFDB7C8F3D0LL,0xEEL,0xE02B9F2492573088LL,9UL,0x87L};
            const int8_t *l_609 = &l_537;
            const int8_t **l_608 = &l_609;
            const struct S1 * const l_611[3][2] = {{&g_50,(void*)0},{&g_50,&g_50},{(void*)0,&g_50}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_534[i] = (void*)0;
            for (i = 0; i < 6; i++)
                l_536[i] = (-1L);
            (*l_467) = (((l_465 , l_466) == (void*)0) , &l_401);
            for (g_119.f1 = 0; (g_119.f1 <= 1); g_119.f1 += 1)
            { 
                int8_t l_468[4][5][5] = {{{0x81L,(-1L),0L,0xA5L,0x00L},{(-1L),(-5L),0xA5L,0x23L,8L},{8L,0x0CL,3L,(-1L),0x00L},{0L,0x23L,0x23L,0L,0x0CL},{0x00L,0x23L,0x0FL,0x62L,0L}},{{(-1L),0x0CL,0x00L,(-8L),0xF9L},{0x0FL,(-5L),0x94L,0x62L,0x62L},{(-5L),(-1L),(-5L),0L,1L},{(-5L),0L,(-8L),(-1L),0xA5L},{0x0FL,0x94L,0x0CL,0x23L,0x81L}},{{(-1L),0x62L,(-8L),0xA5L,(-8L)},{0x00L,0x00L,(-5L),0L,(-8L)},{0L,1L,0x94L,0xF9L,0x81L},{8L,0xF9L,0x00L,(-1L),0xA5L},{(-1L),1L,0x0FL,0x0FL,1L}},{{0x81L,0x00L,0x23L,0x0FL,0x62L},{0x0CL,0x62L,3L,(-1L),0xF9L},{0L,0x94L,0xA5L,0xF9L,0L},{0x0CL,0L,0L,0L,0x0CL},{0x81L,(-1L),0L,0xA5L,0x00L}}};
                int32_t *l_477[1][7];
                uint16_t *l_505[4];
                int8_t l_524 = (-1L);
                uint8_t *l_529 = &g_50.f1;
                uint32_t l_530 = 1UL;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_477[i][j] = &g_462.f4;
                }
                for (i = 0; i < 4; i++)
                    l_505[i] = &g_462.f0;
                if ((*g_109))
                { 
                    int32_t *l_476[3];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_476[i] = &g_26;
                    if (l_468[0][3][4])
                        break;
                    l_401 ^= ((~p_15) , (safe_sub_func_uint8_t_u_u(p_15, (1L != ((l_478[0][1][2] = (safe_add_func_int16_t_s_s(l_468[2][1][4], ((safe_add_func_int16_t_s_s(((*l_398) = (((*g_341) = 1UL) , (l_476[0] == ((*l_467) = l_477[0][0])))), 0L)) | p_14)))) & p_15)))));
                }
                else
                { 
                    uint16_t l_479 = 4UL;
                    --l_479;
                    (*l_449) = (g_47 , &g_462);
                    l_496[2] &= (safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((1UL > ((((**l_467) , l_479) , (l_479 ^ l_409[0])) > (((safe_lshift_func_int8_t_s_u(7L, ((safe_mod_func_int8_t_s_s((p_15 , p_15), g_26)) , p_14))) >= p_15) && l_479))) , l_478[0][0][3]), p_14)), l_409[0])), g_462.f2)) == p_15) || (*g_341)), l_403)), 0xE50BL));
                }
                if (l_465.f0)
                    goto lbl_497;
                l_478[0][1][2] = (safe_rshift_func_uint16_t_u_s(((**l_467) = ((((!(l_478[0][2][3] & 6L)) & ((g_74 | ((safe_div_func_uint32_t_u_u(p_14, (**l_467))) == (((*l_398) = ((void*)0 == l_503)) > 0x70F6L))) | g_504)) == 255UL) ^ 0x8A7C6BF5DFE2C9A7LL)), 5));
                l_531[4][1][6] |= ((safe_unary_minus_func_int64_t_s(((safe_mul_func_int16_t_s_s(((l_509 || (safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((((**l_467) = (safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((p_15 , (safe_add_func_uint64_t_u_u(18446744073709551615UL, ((0xC7L >= (safe_mul_func_uint8_t_u_u(l_524, l_478[0][1][2]))) <= (safe_rshift_func_uint8_t_u_s(((*l_529) &= (safe_div_func_uint64_t_u_u((((p_15 <= 0x45L) != 0x04L) , (**l_467)), g_462.f0))), 2)))))), l_403)), 0x7CL))) || 0x648A88C6L), 0xD49BC28FL)), p_15)), p_15))) < l_456[1]), 0x9C82L)) <= l_530))) <= p_15);
            }
            ++l_539[1][1][0];
        }
        if (p_15)
            continue;
    }
    if ((l_614[6] != l_614[1]))
    { 
        uint64_t **l_620 = &g_213;
        int32_t l_625 = 0xFBAC284CL;
        int32_t l_631[6] = {1L,1L,1L,1L,1L,1L};
        struct S1 l_632 = {0xC951L,1UL,7UL,0x4EL,0x05E53BEFL};
        uint32_t l_662 = 0x168DAC04L;
        int8_t ***l_663[5] = {&g_141,&g_141,&g_141,&g_141,&g_141};
        union U2 l_700 = {1L};
        uint8_t *l_719 = &l_632.f1;
        uint32_t l_730 = 0x7F4D46DBL;
        int64_t l_732 = (-1L);
        const uint64_t ****l_782 = &g_444;
        int32_t l_793[3];
        int32_t *l_843 = &l_409[0];
        uint32_t l_848[3][1];
        int i, j;
        for (i = 0; i < 3; i++)
            l_793[i] = 0L;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_848[i][j] = 0x992B7210L;
        }
        if (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_619 != l_620), ((p_15 >= ((safe_sub_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(l_625, (p_14 && (safe_mul_func_uint16_t_u_u(p_15, (safe_div_func_int8_t_s_s(((!l_631[4]) <= p_15), g_384.f3))))))) != 0x46L), l_539[1][1][0])) == p_15)) != g_209))), 1)) <= 4L))
        { 
            return l_632;
        }
        else
        { 
            int64_t *l_657 = &g_73[1][0];
            int64_t *l_658 = &g_119.f2;
            int64_t *l_659 = (void*)0;
            int64_t *l_660 = &g_661;
            int32_t l_679 = 0xA7F5BDA0L;
            int32_t l_680[4];
            int32_t l_695 = 0x8BC47FDBL;
            int32_t *l_801 = &g_462.f4;
            int32_t *l_802[1];
            int8_t l_809 = 1L;
            int i;
            for (i = 0; i < 4; i++)
                l_680[i] = 1L;
            for (i = 0; i < 1; i++)
                l_802[i] = &l_408;
            if ((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_409[0], (safe_mul_func_uint16_t_u_u((!(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((*l_660) = ((safe_sub_func_uint64_t_u_u((p_14 < p_14), ((*l_658) &= ((*l_657) &= (safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((0x2F8FL && ((safe_rshift_func_uint8_t_u_s(0x59L, 3)) & (safe_mul_func_uint16_t_u_u(l_632.f4, (+(0x06L ^ p_14)))))) >= p_15), p_15)), g_462.f2)))))) < p_14)) == l_662), p_14)), 1)) , (void*)0) == l_663[0])), 0x1F54L)))), l_631[5])), p_14)))
            { 
                uint8_t l_668 = 0xD3L;
                int32_t l_676[5][6][5] = {{{0x5E90A852L,0x7A2B9A08L,0L,0x77033FC7L,0x8FA9DAC3L},{(-3L),1L,(-9L),0x1F1C7AF9L,0xA7579F20L},{(-3L),1L,0xD6DB0659L,(-6L),0x625D69FCL},{0x5E90A852L,0x5D89F1A2L,0x02AB1F62L,4L,0x1F1C7AF9L},{(-7L),(-9L),(-6L),(-9L),(-7L)},{0xB6FB0689L,0xA7579F20L,0xCF9009B2L,(-2L),0x02AB1F62L}},{{8L,0x10B1027DL,(-6L),0xBE9F3098L,0x5E90A852L},{0L,(-1L),0xFF64207AL,0xA7579F20L,0x02AB1F62L},{0xFED6B403L,0xBE9F3098L,0L,0x686D005EL,(-7L)},{0x02AB1F62L,(-9L),0L,0xFF64207AL,0x1F1C7AF9L},{0x686D005EL,(-8L),0x7A2B9A08L,(-9L),0x625D69FCL},{0xBE9F3098L,0xB6FB0689L,0x5E90A852L,1L,0xA7579F20L}},{{0xD6DB0659L,0x625D69FCL,0x686D005EL,1L,0xFF64207AL},{0x5E046C84L,0xC779059DL,(-9L),0xBE9F3098L,4L},{(-8L),0x77033FC7L,0x02AB1F62L,2L,2L},{0xC779059DL,0L,0xC779059DL,0L,0L},{4L,0x02AB1F62L,0x5D89F1A2L,0x5E90A852L,1L},{0x02AB1F62L,(-6L),0L,0xB6FB0689L,(-1L)}},{{1L,(-6L),0x5D89F1A2L,1L,0x7A2B9A08L},{4L,4L,0xC779059DL,0x8FA9DAC3L,0x15CA763FL},{(-1L),8L,0x02AB1F62L,0x5E046C84L,(-1L)},{0xBE9F3098L,4L,(-9L),0x686D005EL,0L},{1L,(-1L),0x686D005EL,0L,0x8458F0B7L},{0xFF64207AL,(-1L),0L,0xAF167B02L,0x5E046C84L}},{{0xCF9009B2L,4L,0L,0xD6DB0659L,(-8L)},{0x6124FC4DL,8L,0L,0L,8L},{(-1L),4L,0L,0x77033FC7L,(-7L)},{0xFED6B403L,(-6L),2L,(-9L),0L},{2L,(-6L),(-9L),0xFED6B403L,0xBE9F3098L},{0xFED6B403L,0x02AB1F62L,0xD6DB0659L,(-10L),(-6L)}}};
                int32_t l_681 = 0xDC9469ADL;
                int32_t l_682 = (-9L);
                int i, j, k;
                for (g_47.f2 = 14; (g_47.f2 == (-19)); --g_47.f2)
                { 
                    int32_t *l_666 = (void*)0;
                    int32_t *l_667[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_667[i] = &g_411;
                    l_668 ^= (*g_109);
                }
                l_632.f4 = ((!(safe_mul_func_uint16_t_u_u((l_682 = ((l_681 = (((1UL <= (-1L)) <= (safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((l_396 , 0L) == ((((*l_398) = (((l_680[3] ^= ((((l_676[1][3][1] = l_409[0]) , ((-9L) != (safe_rshift_func_int8_t_s_u(l_676[3][2][1], l_586[3][2][0])))) >= l_679) > l_668)) < 8L) , 1L)) < p_15) ^ l_631[4])), (*g_341))), l_632.f4))) >= 0x1AF4L)) > g_73[0][1])), p_14))) || 0xFC7899D8L);
            }
            else
            { 
                uint32_t l_687 = 2UL;
                uint32_t l_694 = 0x1A3FF1BDL;
                int8_t ****l_698[7] = {(void*)0,&g_140[1],&g_140[1],(void*)0,&g_140[1],&g_140[1],(void*)0};
                union U2 **l_729[7][2][5] = {{{(void*)0,&g_727,(void*)0,&g_727,&g_727},{&g_727,&g_727,&g_727,&g_727,&g_727}},{{&g_727,&g_727,(void*)0,&g_727,(void*)0},{&g_727,&g_727,(void*)0,&g_727,(void*)0}},{{&g_727,&g_727,&g_727,(void*)0,&g_727},{&g_727,(void*)0,&g_727,&g_727,&g_727}},{{&g_727,&g_727,&g_727,&g_727,&g_727},{&g_727,&g_727,&g_727,&g_727,&g_727}},{{&g_727,&g_727,&g_727,&g_727,(void*)0},{&g_727,&g_727,&g_727,(void*)0,&g_727}},{{&g_727,&g_727,&g_727,&g_727,&g_727},{&g_727,&g_727,&g_727,&g_727,&g_727}},{{&g_727,(void*)0,&g_727,&g_727,&g_727},{&g_727,&g_727,&g_727,&g_727,&g_727}}};
                union U2 ***l_728 = &l_729[1][1][0];
                int i, j, k;
                for (p_15 = 0; (p_15 > 50); p_15 = safe_add_func_uint64_t_u_u(p_15, 9))
                { 
                    const int32_t ***l_686 = (void*)0;
                    int8_t *****l_699 = &l_698[5];
                    uint8_t *l_718 = &g_462.f3;
                    int8_t ****l_722[5][7] = {{&g_140[0],(void*)0,&g_140[0],(void*)0,&g_140[0],(void*)0,&g_140[0]},{&g_140[0],&g_140[0],&g_140[0],&g_140[0],&g_140[0],&g_140[0],&g_140[0]},{&g_140[0],(void*)0,&g_140[0],(void*)0,&g_140[0],(void*)0,&g_140[0]},{&g_140[0],&g_140[0],&g_140[0],&g_140[0],&g_140[0],&g_140[0],&g_140[0]},{&g_140[0],(void*)0,&g_140[0],(void*)0,&g_140[0],(void*)0,&g_140[0]}};
                    int8_t *****l_721 = &l_722[1][4];
                    int i, j;
                    l_632.f4 |= ((((*l_660) |= ((l_685[2] != (g_462 , l_686)) < (l_687 == (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(0UL, 3)), ((safe_div_func_int64_t_s_s((g_384 , g_73[1][0]), (-1L))) || l_694)))))) != g_50.f2) | l_679);
                    if (l_695)
                        break;
                    g_723[1][0][2] = ((((safe_lshift_func_uint16_t_u_s((((((*g_341) != p_14) > (((*l_657) = (((*l_699) = (g_384 , l_698[6])) != (l_700 , ((*l_721) = ((safe_sub_func_int64_t_s_s(((safe_add_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((g_50.f0 = (safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_uint64_t_u(((((*g_109) = (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(((*l_718) &= l_687), ((l_695 , l_719) == l_719))), 2)), p_14)), g_720[3]))) == p_15) , p_15))) != l_632.f1), p_15))), 1)) | 8L) ^ l_687), 0xE3FAL)) ^ p_15), p_15)) , (void*)0))))) & p_15)) , g_3) , l_631[0]), 6)) != l_631[3]) >= 0UL) , l_632);
                    l_625 ^= (safe_mod_func_int64_t_s_s(p_14, p_14));
                    if ((*g_109))
                        break;
                }
                (*l_728) = g_726[3];
            }
            l_679 |= (l_730 >= (0x18FFL > (((~l_732) < (l_625 |= (l_632.f4 ^= ((*g_109) &= l_680[3])))) || (~p_14))));
            (*g_109) = l_680[0];
            for (g_462.f1 = 1; (g_462.f1 <= 4); g_462.f1 += 1)
            { 
                return g_462;
            }
            if (((safe_unary_minus_func_int8_t_s(((((l_632.f4 ^= 0x127799366B221229LL) , 0xF7E3126DL) == (((((safe_add_func_int32_t_s_s((l_737 == ((safe_sub_func_uint32_t_u_u((((safe_div_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((*l_398) = l_680[1]), 0)), ((*g_142) = 0x0EL))) && (safe_sub_func_uint8_t_u_u(((*l_719) = 0UL), (p_14 && l_662)))), 4294967295UL)) ^ 1UL) <= 7L), p_15)) , &g_340[3][1])), 0x78C6DC40L)) | l_662) || p_15) < g_154) , p_14)) == l_631[4]))) == l_662))
            { 
                uint32_t l_755 = 0x39B38FD8L;
                uint64_t ****l_776 = &g_211[0];
                uint64_t *****l_777 = &l_776;
                union U2 l_779 = {-1L};
                int32_t l_792 = (-3L);
                int32_t l_795 = 0xA0873D05L;
                l_778 &= (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((~(safe_rshift_func_int8_t_s_u((l_755 , (((*g_109) |= (safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(0L, ((((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(0x7F25L, (safe_div_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(0xC1C816BA0AA7EB13LL, ((g_723[1][0][2].f0 , ((safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((&g_211[0] == ((*l_777) = l_776)), 0x0FA954BBA74225CFLL)), l_632.f0)) , p_15)) == g_209))), 0xDA2BL)) & p_15) ^ 65535UL), 0x98L)))), 0x46207F2BL)), 5)) <= 0xF974L) == g_384.f3) & p_15))) >= 1L), p_14))) > p_15)), p_14))), 7)) & 0L), l_680[0]));
                (*g_109) &= (l_779 , (safe_div_func_uint64_t_u_u(((void*)0 != l_782), (p_14 = ((*l_657) = (safe_add_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(((-1L) < 0x05L), g_723[1][0][2].f1)) && (((**g_141) >= 0xBDL) ^ p_15)), 0x12C3L)) < 1UL) ^ 0L) & p_14), 3L)))))));
                if (p_15)
                { 
                    return l_632;
                }
                else
                { 
                    int16_t l_791 = 0x979FL;
                    int32_t l_794 = 0x934DAEAEL;
                    int32_t l_796 = 4L;
                    uint16_t l_797[4][1];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_797[i][j] = 1UL;
                    }
                    ++l_797[0][0];
                }
                for (l_700.f3 = 0; (l_700.f3 <= 5); l_700.f3 += 1)
                { 
                    struct S1 l_800 = {1UL,0x65L,18446744073709551613UL,0x1CL,0xCAEA59F1L};
                    if (l_779.f0)
                        break;
                    return l_800;
                }
                l_802[0] = (l_801 = &l_792);
            }
            else
            { 
                int16_t l_810 = 4L;
                for (l_401 = 2; (l_401 >= 0); l_401 -= 1)
                { 
                    int i;
                    l_793[l_401] = (0x981120553BD14068LL <= (g_73[0][1] &= ((l_793[l_401] & (safe_unary_minus_func_uint64_t_u((((*g_727) = (((((void*)0 != &g_727) | (((safe_sub_func_int32_t_s_s((l_632 , 0x9E0A47BFL), p_14)) || g_3) >= 0x183AL)) && g_384.f0) , l_700)) , l_809)))) != l_810)));
                    if (l_810)
                        continue;
                    (*l_801) ^= p_14;
                    (*l_801) &= (safe_mod_func_int32_t_s_s(((void*)0 == (*l_620)), (*g_341)));
                    l_802[0] = &l_793[0];
                }
            }
        }
        for (l_700.f0 = 0; (l_700.f0 <= 3); l_700.f0 += 1)
        { 
            struct S1 l_830 = {65527UL,249UL,0xF2F7B499L,2UL,1L};
            int i;
            (*l_450) = (*l_450);
            return l_830;
        }
        (*l_450) = func_36(&l_793[0], (*l_450), (((((safe_div_func_int32_t_s_s((l_632.f4 = ((safe_mod_func_int32_t_s_s(l_700.f0, ((((((safe_sub_func_uint8_t_u_u(((((p_15 == (safe_sub_func_int8_t_s_s(0xCDL, 1L))) , p_15) <= 0UL) , p_14), l_839)) | g_411) <= 0x60365471L) || p_14) > p_14) || p_15))) >= p_15)), p_15)) & 1UL) <= p_15) , (-2L)) , l_700.f0), l_793[0]);
        for (l_700.f3 = 0; (l_700.f3 == 54); l_700.f3 = safe_add_func_uint8_t_u_u(l_700.f3, 8))
        { 
            int32_t *l_842 = &l_409[1];
            int32_t l_844 = 1L;
            int32_t l_845 = 1L;
            int32_t l_846 = 0x9B9CBB5DL;
            int32_t l_847[1];
            union U2 **l_851 = (void*)0;
            union U2 **l_852 = &g_727;
            int32_t l_853[3][2] = {{1L,1L},{1L,1L},{1L,1L}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_847[i] = 0x7223B3C5L;
            l_843 = l_842;
            l_848[2][0]++;
            if ((*l_842))
                break;
            (*l_852) = &l_700;
            --l_854;
        }
        (*l_450) = (**l_449);
    }
    else
    { 
        int32_t l_857 = 0xB0E7E38DL;
        uint8_t *l_858 = &g_462.f3;
        const uint64_t *l_859 = &g_119.f0;
        int32_t *l_860 = &l_408;
        int32_t *l_863 = &g_723[1][0][2].f4;
        if ((((((&g_341 != ((*l_737) = &g_341)) ^ (1L == l_857)) & (((*l_858) = p_15) != 0x13L)) ^ ((l_859 != l_859) < 0x1ACCEDC4L)) , 1L))
        { 
            int32_t *l_861 = &g_411;
            l_863 = (g_862 = (l_861 = l_860));
        }
        else
        { 
            struct S1 l_864 = {0xE7F1L,0x0EL,18446744073709551615UL,3UL,-2L};
            return l_864;
        }
        return (**l_449);
    }
    if ((safe_div_func_uint8_t_u_u(((&l_619 != &l_619) , (safe_rshift_func_uint16_t_u_u((p_15 && ((safe_rshift_func_int16_t_s_u((((*l_880) = ((***l_737) = ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_462.f2, ((((*g_213) = (((safe_add_func_uint8_t_u_u(l_877, ((g_73[2][2] = p_14) && (g_119 , l_878)))) < g_26) | p_15)) & l_879) != p_14))), p_15)) >= 0x018EL))) , p_15), 12)) >= p_15)), 8))), (*g_142))))
    { 
        int64_t l_888 = 0x8CB2C70962DD58A9LL;
        int32_t l_900 = 1L;
        int64_t **l_902 = &l_899;
        int64_t ***l_903 = &l_902;
        int32_t l_908[3];
        struct S1 l_918 = {0x328EL,2UL,18446744073709551614UL,0x09L,0xA1356290L};
        int i;
        for (i = 0; i < 3; i++)
            l_908[i] = (-4L);
        (*l_903) = ((+((safe_add_func_uint16_t_u_u(((!(((+0x6FD2798858086632LL) || (((safe_sub_func_uint64_t_u_u((g_49 == (l_888 = 8L)), (safe_mod_func_int8_t_s_s(((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((((*g_109) = ((*g_862) = (*g_109))) >= ((((safe_div_func_uint16_t_u_u(((((((p_14 != (p_15 & (((void*)0 == l_899) | l_900))) ^ p_14) , l_901[0][1]) , l_900) ^ 0L) != p_14), p_15)) > p_15) ^ l_900) , 0x333F74D0L)), (*g_341))), 7)), p_15)) || 0xE47AL) >= l_900) == 7UL), 0x93L)))) != 0x26L) < 0xFD82L)) ^ p_14)) >= p_14), 0x2372L)) <= g_31)) , l_902);
        for (g_47.f2 = (-30); (g_47.f2 < (-29)); ++g_47.f2)
        { 
            int8_t l_906 = (-8L);
            int32_t l_907 = 0x4EFB3EE0L;
            int32_t l_910 = 8L;
            int32_t l_911 = 0L;
            int32_t l_912 = 0x16F3F4CDL;
            int32_t l_914 = 5L;
            uint16_t l_915[4] = {65535UL,65535UL,65535UL,65535UL};
            int i;
            l_915[3]--;
            l_918 = g_723[1][0][2];
            (*l_449) = &g_50;
        }
    }
    else
    { 
        uint32_t l_928[6][1] = {{0UL},{0UL},{1UL},{0UL},{0UL},{1UL}};
        int16_t *l_929 = &l_909;
        int i, j;
        (*g_109) ^= ((((safe_mod_func_int16_t_s_s(((&l_899 != g_921) | (p_15 == p_14)), ((safe_mod_func_uint64_t_u_u((0x11D9L | (safe_mod_func_uint16_t_u_u((1L | (+0x9B629485L)), p_15))), l_928[1][0])) , p_15))) , l_929) != &l_535) , p_15);
        for (g_119.f0 = 0; (g_119.f0 <= 0); g_119.f0 += 1)
        { 
            int32_t *l_930[2][2];
            uint32_t ***l_935[5][5][3] = {{{&g_340[1][1],&g_340[3][1],&g_340[3][1]},{&g_340[0][0],&g_340[3][1],(void*)0},{&g_340[1][1],&g_340[1][1],(void*)0},{&g_340[3][1],&g_340[0][0],&g_340[3][1]},{&g_340[3][1],&g_340[1][1],&g_340[3][1]}},{{&g_340[3][1],&g_340[3][1],&g_340[2][0]},{&g_340[3][1],&g_340[3][1],&g_340[3][1]},{&g_340[1][1],&g_340[3][1],&g_340[3][1]},{&g_340[0][0],&g_340[3][1],(void*)0},{&g_340[1][1],&g_340[1][1],(void*)0}},{{&g_340[3][1],&g_340[0][0],&g_340[3][1]},{&g_340[3][1],&g_340[1][1],&g_340[3][1]},{&g_340[3][1],&g_340[3][1],&g_340[2][0]},{&g_340[3][1],&g_340[3][1],&g_340[3][1]},{&g_340[1][1],&g_340[3][1],&g_340[3][1]}},{{&g_340[0][0],&g_340[3][1],(void*)0},{&g_340[1][1],&g_340[1][1],(void*)0},{&g_340[3][1],&g_340[0][0],&g_340[3][1]},{&g_340[3][1],&g_340[1][1],&g_340[3][1]},{&g_340[3][1],&g_340[3][1],&g_340[2][0]}},{{&g_340[3][1],&g_340[3][1],&g_340[3][1]},{&g_340[1][1],&g_340[3][1],&g_340[3][1]},{&g_340[0][0],&g_340[3][1],(void*)0},{&g_340[1][1],&g_340[1][1],(void*)0},{&g_340[3][1],&g_340[0][0],&g_340[3][1]}}};
            uint32_t l_952 = 5UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_930[i][j] = &g_3;
            }
            l_930[1][0] = l_930[1][0];
            for (l_401 = 0; (l_401 <= 0); l_401 += 1)
            { 
                int8_t ****l_934 = (void*)0;
                int8_t *****l_933 = &l_934;
                uint32_t ****l_936 = &l_737;
                int32_t *l_954[5] = {&l_401,&l_401,&l_401,&l_401,&l_401};
                int i, j;
                (*g_862) = (safe_sub_func_uint16_t_u_u((l_933 == (void*)0), l_928[(g_119.f0 + 4)][l_401]));
                if (l_928[(g_119.f0 + 3)][l_401])
                    continue;
                if (((((l_935[4][1][0] != &g_340[3][1]) < (&g_340[0][1] == ((*l_936) = &g_340[3][1]))) ^ (((safe_mul_func_uint8_t_u_u(((+(safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(0x6D7A1F3D6EC8C4A0LL, l_928[2][0])), 12))) | (l_930[0][0] == l_930[1][0])), p_14)) ^ l_928[(g_119.f0 + 4)][l_401]) <= (**g_921))) == 0xD6E932C8L))
                { 
                    int16_t l_946[2][5][4] = {{{(-1L),0L,(-1L),(-1L)},{0L,0L,0xB0A0L,0L},{0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L)},{0L,0L,0xB0A0L,0L}},{{0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L)},{0L,0L,0xB0A0L,0L},{0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L)}}};
                    int32_t l_953 = 7L;
                    int i, j, k;
                    l_953 = ((*g_862) |= (((((*g_922) = (((safe_mul_func_uint16_t_u_u(3UL, (l_928[(g_119.f0 + 3)][l_401] & 0x8DB1L))) >= (((l_946[0][2][1] <= (safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((((((+0x4FL) , g_913) > 250UL) > p_15) >= 6UL), 0x743AL)), 13))) & 0x74L) | 0x6BE1L)) , p_14)) , (-8L)) < 5L) , l_952));
                    l_930[1][0] = l_954[2];
                }
                else
                { 
                    int32_t l_955 = 0xAC18E2C9L;
                    (*g_862) |= 0xA1DE41C9L;
                    (*g_862) ^= l_955;
                    if ((*g_862))
                        break;
                    if (p_15)
                        continue;
                }
                (*g_862) = p_15;
            }
        }
        return (**l_449);
    }
    if (p_15)
    { 
        int32_t *l_956 = &g_3;
        int32_t l_957 = 5L;
        int32_t l_958 = 1L;
        int32_t l_959 = 0x2DCE51AAL;
        uint16_t l_960 = 65535UL;
        l_956 = l_956;
        l_960++;
        return (**l_449);
    }
    else
    { 
        int16_t l_963[6][2][2] = {{{(-2L),0x8138L},{5L,0x5D28L}},{{(-4L),(-2L)},{0x3C7DL,(-4L)}},{{0x1299L,0xD86FL},{0x1299L,(-4L)}},{{0x3C7DL,(-2L)},{(-4L),0x5D28L}},{{5L,0x8138L},{(-2L),(-4L)}},{{(-4L),(-4L)},{(-2L),0x8138L}}};
        int32_t *l_964 = &g_50.f4;
        uint64_t l_972 = 1UL;
        int32_t l_989 = (-10L);
        int32_t l_991 = 0L;
        int32_t l_992 = (-4L);
        int32_t l_993[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_993[i] = 0L;
        l_963[3][1][1] |= p_14;
        l_964 = func_34(l_964);
        for (g_913 = (-7); (g_913 < 7); g_913 = safe_add_func_uint32_t_u_u(g_913, 5))
        { 
            return g_462;
        }
        for (g_209 = (-27); (g_209 >= (-6)); ++g_209)
        { 
            int16_t *l_969 = (void*)0;
            int16_t *l_970 = &l_535;
            struct S0 l_971 = {0x1A92DC48FAC5A37ELL,1UL,0xDE5B68D1E379D6FCLL,255UL,0xA5L};
            uint8_t *l_973[3][2][2] = {{{&g_723[1][0][2].f1,&g_723[1][0][2].f1},{&g_723[1][0][2].f1,&g_723[1][0][2].f1}},{{&g_723[1][0][2].f1,&g_723[1][0][2].f1},{&g_723[1][0][2].f1,&g_723[1][0][2].f1}},{{&g_723[1][0][2].f1,&g_723[1][0][2].f1},{&g_723[1][0][2].f1,&g_723[1][0][2].f1}}};
            uint32_t l_974[7] = {0x09B8D2E9L,0x09B8D2E9L,0x09B8D2E9L,0x09B8D2E9L,0x09B8D2E9L,0x09B8D2E9L,0x09B8D2E9L};
            int32_t l_986 = 0x6F9713A7L;
            const int64_t l_987 = 1L;
            int8_t * const ***l_1004 = (void*)0;
            int i, j, k;
            if (((p_14 , (*g_341)) & ((*l_880) = (((*l_970) = g_384.f0) | (l_971 , (l_971.f3 <= ((l_974[4] &= (g_720[0] >= (0UL || l_972))) & g_73[0][1])))))))
            { 
                int32_t l_995 = (-5L);
                for (g_47.f1 = 27; (g_47.f1 > 47); g_47.f1++)
                { 
                    int8_t l_983 = 1L;
                    int32_t l_988 = 0xA5FDC8C8L;
                    int32_t l_990 = (-6L);
                    int32_t l_994 = 0xCDFC8271L;
                    int32_t l_996 = 0L;
                    (*g_862) |= (safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint16_t_u_s(p_14, 15)) && ((void*)0 != &p_15)) != 0x9C92L), (safe_add_func_int16_t_s_s(l_974[4], ((((l_983 ^ (l_986 = (safe_sub_func_uint32_t_u_u(4294967294UL, p_15)))) >= p_14) && l_987) , g_720[0])))));
                    l_997--;
                }
                (*g_862) = (9UL < (0x80L <= (safe_div_func_int64_t_s_s((l_995 = (0xDFC6L && 0x34A1L)), p_15))));
            }
            else
            { 
                int8_t **** const l_1002 = (void*)0;
                int32_t l_1003 = 9L;
                l_986 |= (l_1002 == (l_1003 , l_1004));
            }
        }
    }
    return (*l_450);
}



static uint32_t  func_16(int32_t * p_17, int8_t  p_18, int32_t * p_19, int32_t  p_20)
{ 
    int8_t **l_389[6][3] = {{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142},{&g_142,&g_142,&g_142}};
    int8_t ***l_390 = &l_389[1][2];
    uint8_t l_391 = 255UL;
    int i, j;
    (*g_109) ^= (safe_add_func_uint64_t_u_u((*g_213), ((((*l_390) = l_389[3][2]) != (*g_190)) < 0x8977L)));
    return l_391;
}



static int32_t * func_21(int32_t * p_22)
{ 
    int32_t l_23 = (-1L);
    int32_t *l_24 = (void*)0;
    int32_t *l_25 = &g_26;
    int32_t *l_27 = &g_26;
    int32_t *l_28 = &g_26;
    int32_t *l_29[1][6] = {{&g_3,(void*)0,(void*)0,&g_3,(void*)0,(void*)0}};
    int64_t l_30 = 0x947E29AC92D14B43LL;
    int32_t **l_375 = &l_28;
    int i, j;
    ++g_31;
    (*l_375) = func_34(l_24);
    return p_22;
}



static int32_t * func_34(int32_t * p_35)
{ 
    int32_t *l_41 = &g_3;
    int32_t **l_42 = &l_41;
    struct S1 l_45 = {0xD464L,0x9EL,0x321248C3L,255UL,0L};
    int32_t *l_46[1];
    int8_t *l_48[3][3];
    struct S1 *l_180 = &g_50;
    uint16_t *l_236 = &l_45.f0;
    const int64_t l_254 = 0x10B791D43E445ACCLL;
    uint32_t *l_265 = &g_154;
    int16_t l_310 = 0x49C9L;
    uint32_t l_311 = 0xB19BEA26L;
    uint8_t *l_371 = &g_119.f1;
    uint64_t l_372 = 0x2E6F69B1E8802A9FLL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_46[i] = &g_26;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_48[i][j] = &g_49;
    }
    (*l_180) = func_36(((*l_42) = l_41), ((safe_lshift_func_uint16_t_u_u(0xE132L, 1)) , l_45), ((g_26 &= g_31) , (0xFEL != (g_47 , (g_49 |= (((g_31 , &l_46[0]) != (void*)0) < 0x9FA6B86D5672FEE6LL))))), g_47.f3);
    for (l_45.f0 = 22; (l_45.f0 >= 12); l_45.f0 = safe_sub_func_uint16_t_u_u(l_45.f0, 8))
    { 
        int8_t ***l_185[6][1];
        union U2 *l_194 = (void*)0;
        int32_t l_198 = 4L;
        uint32_t l_221[4][5] = {{0x196D43CEL,0x196D43CEL,0xCF2CA303L,0xBC9FA815L,0xCF2CA303L},{0x196D43CEL,0x196D43CEL,0xCF2CA303L,0xBC9FA815L,0xCF2CA303L},{0x196D43CEL,0x196D43CEL,0xCF2CA303L,0xBC9FA815L,0xCF2CA303L},{0x196D43CEL,0x196D43CEL,0xCF2CA303L,0xBC9FA815L,0xCF2CA303L}};
        uint16_t *l_233 = (void*)0;
        int32_t l_243 = 0x666C9231L;
        int32_t l_244 = 0xD1DA3EC7L;
        uint32_t *l_263 = &g_154;
        uint32_t *l_264 = &g_154;
        union U2 l_268 = {0x507D8DE4L};
        const struct S1 l_274 = {0x5F62L,0x81L,18446744073709551612UL,252UL,0L};
        int32_t l_280[2][4] = {{0xA3448AE4L,0xA3448AE4L,1L,0xA3448AE4L},{0xA3448AE4L,0x34795880L,0x34795880L,0xA3448AE4L}};
        int8_t l_309[5];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_185[i][j] = &g_141;
        }
        for (i = 0; i < 5; i++)
            l_309[i] = (-6L);
        for (g_50.f1 = 0; (g_50.f1 > 23); g_50.f1 = safe_add_func_int8_t_s_s(g_50.f1, 9))
        { 
            int8_t ** const **l_186 = (void*)0;
            int8_t ** const l_189 = (void*)0;
            int8_t ** const *l_188 = &l_189;
            int8_t ** const **l_187[3];
            struct S1 l_193 = {0x74BEL,0x56L,0x1FD3FFD6L,0x52L,-5L};
            uint8_t l_201 = 0x31L;
            int32_t *l_219 = (void*)0;
            uint16_t **l_234 = &l_233;
            uint16_t **l_237 = &l_236;
            const struct S1 l_242 = {0x7D5AL,0x5BL,0xCB29808CL,0x30L,-1L};
            int64_t *l_255 = &g_73[1][0];
            uint16_t l_258 = 65533UL;
            uint32_t *l_262 = (void*)0;
            uint32_t **l_261[6] = {&l_262,&l_262,&l_262,&l_262,&l_262,&l_262};
            int32_t l_278[4] = {(-9L),(-9L),(-9L),(-9L)};
            uint32_t ***l_342 = (void*)0;
            uint32_t ***l_343 = &l_261[4];
            int16_t *l_346 = &l_310;
            int16_t *l_347 = &g_209;
            int i;
            for (i = 0; i < 3; i++)
                l_187[i] = &l_188;
            if ((((((g_50.f0 , l_185[1][0]) == (g_190 = &g_141)) && g_50.f4) > (((l_193 , l_194) == l_194) > l_193.f0)) == g_26))
            { 
                int16_t *l_208 = &g_209;
                int32_t l_210 = 0L;
                (*g_109) = ((safe_sub_func_uint64_t_u_u((!0x59B54C13L), l_198)) ^ (safe_mod_func_int64_t_s_s(((l_201 < (+(g_47 , ((*g_109) >= (*g_109))))) > ((((safe_rshift_func_int16_t_s_s(((*l_208) ^= (~((safe_mod_func_int8_t_s_s(((***g_190) = ((l_198 && g_49) == g_119.f2)), 0x53L)) > 0x3064252A57B08C67LL))), 5)) , l_210) , g_211[0]) != &g_212)), l_210)));
            }
            else
            { 
                if ((**l_42))
                    break;
                for (l_193.f2 = (-5); (l_193.f2 <= 14); ++l_193.f2)
                { 
                    int32_t *l_216 = &g_50.f4;
                    return l_216;
                }
                l_193.f4 &= (safe_sub_func_int8_t_s_s(l_193.f0, g_50.f2));
                if (l_193.f2)
                    break;
                return l_219;
            }
            if (((~((l_221[0][1] < (safe_mod_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((((((safe_lshift_func_int16_t_s_u(((g_235 = ((*l_234) = l_233)) == ((*l_237) = l_236)), (safe_div_func_int32_t_s_s(l_221[0][1], (*g_109))))) | (safe_rshift_func_uint16_t_u_s(((g_50 , (l_242 , l_221[0][0])) >= (*l_41)), (*l_41)))) || (**l_42)) <= l_198) == l_242.f0))), 6)), 0L)) & l_198), (-10L))) != g_209) ^ 0xC53AL) > l_198), 4L))) , 0x723CL)) == 0x3705BE9AF0AF18DELL))
            { 
                uint8_t l_245 = 1UL;
                ++l_245;
            }
            else
            { 
                if (l_243)
                    break;
                return p_35;
            }
            (*g_109) = (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(l_243, ((((safe_div_func_int32_t_s_s(0x2D8D6A7CL, l_254)) <= 7UL) , ((*l_255) = 0xD8C01150D4B102D3LL)) <= ((safe_sub_func_int16_t_s_s((g_209 = g_74), l_244)) | (*g_109))))) <= l_258), g_26));
            if (((*g_109) = (safe_sub_func_int16_t_s_s(((**l_42) , ((l_265 = (l_264 = (l_263 = (void*)0))) != p_35)), ((safe_add_func_int32_t_s_s((l_268 , ((g_154 = l_244) == (safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_uint64_t_u((safe_sub_func_int16_t_s_s((l_274 , (safe_sub_func_uint64_t_u_u(((*g_213) = (&l_242 != &g_50)), (-1L)))), (**l_42))))) , l_268.f0), l_274.f0)))), g_73[0][1])) >= (**l_42))))))
            { 
                int32_t l_277 = (-1L);
                int32_t l_279[1][5];
                uint32_t l_281 = 0x33E59246L;
                uint64_t l_294 = 18446744073709551615UL;
                uint8_t *l_305 = &l_193.f3;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_279[i][j] = 0xDA5712E0L;
                }
                --l_281;
                for (l_45.f3 = 3; (l_45.f3 != 3); l_45.f3++)
                { 
                    uint64_t ****l_287 = &g_211[1];
                    uint64_t *****l_286 = &l_287;
                    int32_t *l_288 = &l_198;
                    (*l_286) = &g_211[2];
                    l_288 = l_288;
                }
                for (g_49 = 3; (g_49 >= 17); ++g_49)
                { 
                    uint64_t l_291 = 0xA40A1BE3DCF11F39LL;
                    ++l_291;
                }
                l_294++;
                (*g_109) |= (safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_119.f4, 15)), (--(*l_305)))), (l_278[2] , 0x7CL))), 0xBB49L));
            }
            else
            { 
                int32_t l_308[4];
                struct S1 **l_332 = (void*)0;
                struct S1 **l_333 = &l_180;
                int i;
                for (i = 0; i < 4; i++)
                    l_308[i] = 0xCF45E54CL;
                ++l_311;
                for (l_45.f1 = (-14); (l_45.f1 > 50); l_45.f1++)
                { 
                    uint32_t l_331 = 7UL;
                    l_331 = (safe_div_func_int32_t_s_s((l_243 |= (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((((~(safe_sub_func_uint64_t_u_u((safe_div_func_int64_t_s_s((-7L), (safe_mod_func_int8_t_s_s(l_193.f1, g_47.f3)))), (**g_212)))) <= (l_198 = (--g_50.f0))) & g_3) & l_274.f2), ((((*l_255) = (&g_154 == &g_154)) <= (**g_212)) || (**g_212)))), 0x1775L))), 0x0E94818AL));
                }
                (*l_333) = &g_50;
            }
        }
    }
    (*g_109) = (g_31 && ((*l_371) = 0x43L));
    ++l_372;
    return p_35;
}



static struct S1  func_36(int32_t * p_37, struct S1  p_38, uint64_t  p_39, int16_t  p_40)
{ 
    uint64_t l_64 = 0x7C1F666C839C7238LL;
    int32_t l_76 = 0x2E325606L;
    uint32_t l_95 = 0UL;
    int32_t *l_102 = &g_26;
    uint32_t l_151[5] = {0xFF0F84FEL,0xFF0F84FEL,0xFF0F84FEL,0xFF0F84FEL,0xFF0F84FEL};
    int8_t ***l_152[6][7][6] = {{{&g_141,(void*)0,&g_141,&g_141,&g_141,&g_141},{&g_141,(void*)0,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,(void*)0,(void*)0,&g_141,&g_141},{&g_141,&g_141,(void*)0,&g_141,(void*)0,&g_141},{&g_141,(void*)0,&g_141,&g_141,(void*)0,&g_141},{&g_141,(void*)0,&g_141,&g_141,&g_141,(void*)0},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141}},{{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,(void*)0,&g_141,(void*)0,(void*)0},{&g_141,&g_141,&g_141,(void*)0,(void*)0,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,(void*)0},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{(void*)0,(void*)0,&g_141,&g_141,(void*)0,(void*)0}},{{&g_141,(void*)0,&g_141,&g_141,(void*)0,&g_141},{&g_141,&g_141,&g_141,(void*)0,&g_141,(void*)0},{&g_141,&g_141,(void*)0,&g_141,&g_141,&g_141},{&g_141,(void*)0,&g_141,&g_141,&g_141,&g_141},{(void*)0,(void*)0,&g_141,&g_141,&g_141,(void*)0},{&g_141,(void*)0,&g_141,&g_141,&g_141,&g_141},{&g_141,(void*)0,&g_141,&g_141,&g_141,&g_141}},{{(void*)0,(void*)0,(void*)0,&g_141,(void*)0,&g_141},{&g_141,&g_141,(void*)0,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,(void*)0},{&g_141,(void*)0,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,(void*)0,&g_141,&g_141,(void*)0}},{{&g_141,(void*)0,&g_141,&g_141,&g_141,(void*)0},{(void*)0,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,(void*)0,(void*)0,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,(void*)0},{&g_141,&g_141,&g_141,(void*)0,(void*)0,(void*)0}},{{&g_141,(void*)0,(void*)0,&g_141,&g_141,&g_141},{&g_141,&g_141,&g_141,&g_141,(void*)0,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,(void*)0},{&g_141,&g_141,&g_141,&g_141,(void*)0,&g_141},{&g_141,&g_141,&g_141,&g_141,&g_141,&g_141},{(void*)0,(void*)0,(void*)0,&g_141,(void*)0,&g_141},{&g_141,&g_141,(void*)0,&g_141,&g_141,&g_141}}};
    union U2 *l_155[2][4][7] = {{{&g_47,&g_47,&g_47,&g_47,(void*)0,&g_47,&g_47},{&g_47,(void*)0,(void*)0,(void*)0,&g_47,&g_47,(void*)0},{&g_47,&g_47,&g_47,(void*)0,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47}},{{&g_47,(void*)0,&g_47,&g_47,&g_47,&g_47,(void*)0},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,(void*)0,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,(void*)0,(void*)0,&g_47,&g_47}}};
    int32_t *l_170 = (void*)0;
    int32_t *l_171 = (void*)0;
    int32_t *l_172 = &l_76;
    int32_t *l_173 = &l_76;
    int32_t *l_174 = &g_26;
    int32_t *l_175[1];
    uint32_t l_176 = 4UL;
    struct S1 l_179 = {0UL,3UL,18446744073709551615UL,0UL,0x3DD3D9F1L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_175[i] = &g_50.f4;
    if ((g_47.f3 != 0xC8D6L))
    { 
        int16_t l_69 = 0x5C6DL;
        struct S1 l_77 = {0xE7DFL,3UL,0x0D74AE62L,0xE3L,1L};
        int64_t *l_90 = (void*)0;
        uint64_t *l_91 = &l_64;
        int16_t *l_92 = &l_69;
        const uint32_t l_93 = 9UL;
        uint16_t *l_94 = &g_50.f0;
        int8_t *l_97 = &g_49;
        int8_t ** const l_96 = &l_97;
        const int32_t *l_105[1];
        const int32_t **l_104 = &l_105[0];
        uint32_t l_129[1][2][2];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_105[i] = (void*)0;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_129[i][j][k] = 1UL;
            }
        }
        if ((((g_50 , 18446744073709551607UL) == ((p_38.f0 | g_50.f1) || 0x3003L)) < (((safe_add_func_uint32_t_u_u(g_47.f0, g_31)) <= g_31) >= 18446744073709551609UL)))
        { 
            int32_t *l_67 = (void*)0;
            int32_t *l_68 = &g_50.f4;
            int8_t *l_70 = &g_49;
            int64_t *l_71 = (void*)0;
            int64_t *l_72[7] = {&g_73[0][1],&g_73[0][1],&g_73[0][1],&g_73[0][1],&g_73[0][1],&g_73[0][1],&g_73[0][1]};
            int32_t *l_75[7][3][6] = {{{&g_3,&g_26,&g_3,&g_3,&g_3,(void*)0},{(void*)0,(void*)0,&g_26,&g_3,&g_26,&g_3},{&g_3,&g_3,&g_3,&g_26,&g_26,&g_3}},{{&g_26,(void*)0,(void*)0,&g_3,&g_3,(void*)0},{&g_3,&g_26,&g_3,&g_3,(void*)0,&g_26},{&g_26,(void*)0,&g_3,&g_26,&g_26,&g_3}},{{&g_3,&g_3,&g_3,&g_3,&g_26,&g_26},{(void*)0,&g_26,&g_3,&g_3,&g_26,(void*)0},{&g_3,&g_26,(void*)0,&g_3,&g_26,&g_3}},{{&g_3,&g_3,&g_3,&g_26,&g_26,&g_3},{&g_3,(void*)0,&g_26,&g_3,(void*)0,(void*)0},{&g_3,&g_26,&g_3,&g_3,&g_3,(void*)0}},{{(void*)0,(void*)0,&g_26,&g_3,&g_26,&g_3},{&g_3,&g_3,&g_3,&g_26,&g_26,&g_3},{&g_26,(void*)0,(void*)0,&g_3,&g_3,(void*)0}},{{&g_3,&g_26,&g_3,&g_3,(void*)0,&g_26},{&g_26,(void*)0,&g_3,&g_26,&g_26,&g_3},{&g_3,&g_3,&g_3,&g_3,&g_26,&g_26}},{{(void*)0,&g_26,&g_3,&g_3,&g_26,(void*)0},{&g_3,&g_26,(void*)0,&g_3,&g_26,&g_3},{&g_3,&g_3,&g_3,&g_26,&g_26,&g_3}}};
            int i, j, k;
            l_76 = ((safe_rshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s((g_74 = (g_73[2][1] ^= (safe_mul_func_int8_t_s_s(p_38.f0, ((((*l_70) = (safe_sub_func_uint16_t_u_u(0x7BE8L, (safe_mul_func_int8_t_s_s(((g_26 | (+(l_64 < ((*l_68) ^= (1L == ((((((safe_mul_func_int8_t_s_s((((void*)0 != &p_37) != l_64), g_31)) && 1L) & l_64) ^ g_50.f1) != g_3) <= 0x07E0L)))))) | g_49), l_69))))) , (void*)0) != &p_37))))), p_38.f4)), 6)) & l_64);
        }
        else
        { 
            return l_77;
        }
        if ((l_95 = (safe_add_func_uint16_t_u_u(((*l_94) = ((safe_mod_func_uint64_t_u_u((p_38.f4 && g_47.f3), (((*l_92) = (safe_mul_func_int8_t_s_s((((4L || (((safe_mul_func_int16_t_s_s(p_40, ((((*l_91) &= ((safe_mod_func_int64_t_s_s((g_73[2][2] = (&g_73[0][2] != ((safe_mul_func_int8_t_s_s(0xF2L, g_50.f0)) , &g_73[0][1]))), l_76)) && g_50.f0)) ^ 0xD9FC0A4C35ED1F7FLL) , p_38.f1))) | g_50.f3) > l_77.f4)) != 0x8DL) >= 0x8298C980L), p_38.f0))) && l_93))) < 65528UL)), g_50.f1))))
        { 
            int8_t **l_99 = &l_97;
            int8_t ***l_98[1][6][4] = {{{&l_99,&l_99,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99},{&l_99,&l_99,&l_99,&l_99}}};
            int8_t ***l_100[1];
            int8_t ***l_101 = &l_99;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_100[i] = (void*)0;
            (*l_101) = l_96;
        }
        else
        { 
            int32_t **l_103 = &l_102;
            int16_t l_130 = 0xD414L;
            l_102 = (void*)0;
            if ((((*l_103) = p_37) != p_37))
            { 
                int32_t ***l_110 = &l_103;
                union U2 l_126 = {1L};
                uint32_t l_131 = 0xC52D1EABL;
                uint32_t *l_150 = &l_131;
                uint32_t *l_153 = &g_154;
                (*g_109) = (l_104 == ((((safe_mul_func_int8_t_s_s((((&l_105[0] == ((*l_110) = g_108[5][1])) ^ (((*l_91) &= ((((safe_rshift_func_int8_t_s_u((((safe_mul_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(0xB4L, (safe_mul_func_int16_t_s_s((g_119 , ((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((l_126 , (safe_mod_func_int16_t_s_s((*l_102), 6UL))), l_129[0][1][1])), 6)), p_40)) == g_119.f0)), 0x79B2L)))) < 18446744073709551614UL) ^ l_130), (-1L))) == p_39) | p_38.f4), 1)) ^ (-1L)) > l_131) || (*l_102))) | g_50.f1)) || (*l_102)), 254UL)) >= 0xC6856C27L) , 0xC963L) , (*l_110)));
                l_155[0][2][5] = ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((*l_153) = (safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((l_77 , g_140[0]) == (((safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((g_74 ^ (safe_div_func_int64_t_s_s((g_73[0][1] ^= (*l_102)), 3UL))), (safe_unary_minus_func_uint32_t_u(((*l_150) = (*l_102)))))), l_151[2])) >= (*l_102)) , l_152[0][4][1])), 0x744F0CC1L)), 14))) , g_3) || 0x109EAC8149AEB805LL), p_38.f1)), p_38.f1)) , &g_47);
                for (g_50.f2 = 0; (g_50.f2 <= 24); g_50.f2 = safe_add_func_uint16_t_u_u(g_50.f2, 1))
                { 
                    union U2 *l_158 = &g_47;
                    (*g_109) ^= (*p_37);
                    l_158 = (void*)0;
                }
            }
            else
            { 
                (*l_103) = (*l_103);
            }
        }
        for (p_39 = 0; (p_39 >= 53); p_39 = safe_add_func_int8_t_s_s(p_39, 7))
        { 
            uint32_t l_165 = 0xD0B9B82EL;
            for (g_47.f1 = 6; (g_47.f1 > 39); g_47.f1 = safe_add_func_int64_t_s_s(g_47.f1, 8))
            { 
                (*g_109) &= (((*l_92) = (safe_mod_func_uint32_t_u_u((l_165 , (+(g_31 , 0xB375L))), 0x7F4EF603L))) && 65529UL);
                (*g_109) &= (*p_37);
            }
        }
    }
    else
    { 
        uint64_t *l_169[6] = {&l_64,&l_64,&l_64,&l_64,&l_64,&l_64};
        uint64_t **l_168 = &l_169[3];
        uint64_t ***l_167 = &l_168;
        int i;
        (*l_102) ^= (-4L);
        (*l_167) = (void*)0;
    }
    l_176++;
    return l_179;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_47.f2, "g_47.f2", print_hash_value);
    transparent_crc(g_47.f3, "g_47.f3", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_50.f1, "g_50.f1", print_hash_value);
    transparent_crc(g_50.f2, "g_50.f2", print_hash_value);
    transparent_crc(g_50.f3, "g_50.f3", print_hash_value);
    transparent_crc(g_50.f4, "g_50.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_73[i][j], "g_73[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_119.f2, "g_119.f2", print_hash_value);
    transparent_crc(g_119.f3, "g_119.f3", print_hash_value);
    transparent_crc(g_119.f4, "g_119.f4", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_384.f0, "g_384.f0", print_hash_value);
    transparent_crc(g_384.f2, "g_384.f2", print_hash_value);
    transparent_crc(g_384.f3, "g_384.f3", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_462.f0, "g_462.f0", print_hash_value);
    transparent_crc(g_462.f1, "g_462.f1", print_hash_value);
    transparent_crc(g_462.f2, "g_462.f2", print_hash_value);
    transparent_crc(g_462.f3, "g_462.f3", print_hash_value);
    transparent_crc(g_462.f4, "g_462.f4", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_720[i], "g_720[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_723[i][j][k].f0, "g_723[i][j][k].f0", print_hash_value);
                transparent_crc(g_723[i][j][k].f1, "g_723[i][j][k].f1", print_hash_value);
                transparent_crc(g_723[i][j][k].f2, "g_723[i][j][k].f2", print_hash_value);
                transparent_crc(g_723[i][j][k].f3, "g_723[i][j][k].f3", print_hash_value);
                transparent_crc(g_723[i][j][k].f4, "g_723[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_913, "g_913", print_hash_value);
    transparent_crc(g_1005.f0, "g_1005.f0", print_hash_value);
    transparent_crc(g_1005.f1, "g_1005.f1", print_hash_value);
    transparent_crc(g_1005.f2, "g_1005.f2", print_hash_value);
    transparent_crc(g_1005.f3, "g_1005.f3", print_hash_value);
    transparent_crc(g_1005.f4, "g_1005.f4", print_hash_value);
    transparent_crc(g_1025, "g_1025", print_hash_value);
    transparent_crc(g_1155, "g_1155", print_hash_value);
    transparent_crc(g_1388, "g_1388", print_hash_value);
    transparent_crc(g_1477, "g_1477", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1517[i][j][k], "g_1517[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1602, "g_1602", print_hash_value);
    transparent_crc(g_1614.f0, "g_1614.f0", print_hash_value);
    transparent_crc(g_1614.f1, "g_1614.f1", print_hash_value);
    transparent_crc(g_1614.f2, "g_1614.f2", print_hash_value);
    transparent_crc(g_1614.f3, "g_1614.f3", print_hash_value);
    transparent_crc(g_1614.f4, "g_1614.f4", print_hash_value);
    transparent_crc(g_1651, "g_1651", print_hash_value);
    transparent_crc(g_1665, "g_1665", print_hash_value);
    transparent_crc(g_1726, "g_1726", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
