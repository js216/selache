// SPDX-License-Identifier: MIT
// cctest_csmith_62ef46f8.c --- cctest case csmith_62ef46f8 (csmith seed 1659848440)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x43f0b9c5 */
/* @exp_ticks 0x4870 */

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

// Options:   -s 1659848440 -o /tmp/csmith_gen_5ae4wjla/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int8_t  f0;
   int64_t  f1;
   int16_t  f2;
};
#pragma pack(pop)

union U1 {
   const struct S0  f0;
   const uint32_t  f1;
   uint8_t  f2;
};

union U2 {
   int16_t  f0;
   int32_t  f1;
   const int8_t  f2;
   uint64_t  f3;
};

union U3 {
   int64_t  f0;
};

union U4 {
   int32_t  f0;
   uint8_t  f1;
};

union U5 {
   const int8_t  f0;
   uint16_t  f1;
   int32_t  f2;
};


static int32_t g_2 = 7L;
static int32_t g_6 = 0x4C8F0D07L;
static int32_t g_7 = 0x184DCC80L;
static uint8_t g_28 = 255UL;
static int8_t g_35[2][1] = {{0x09L},{0x09L}};
static uint16_t g_56 = 0x696BL;
static uint32_t g_57 = 0x24FF2426L;
static uint64_t g_77 = 0xFBD26DA6125F8973LL;
static uint8_t g_124 = 250UL;
static uint16_t g_141 = 3UL;
static uint32_t g_167 = 18446744073709551607UL;
static int32_t g_177 = 0x5464F811L;
static int32_t g_179 = 0L;
static union U1 g_211 = {{0x35L,-4L,0x31D6L}};
static int32_t g_250[1] = {1L};
static int32_t g_268 = 7L;
static uint32_t g_279 = 2UL;
static int32_t g_309 = (-1L);
static union U4 g_324 = {1L};
static int32_t g_439 = (-7L);
static union U3 g_465 = {0xDA9F7B7DE32D582BLL};
static union U5 g_478 = {0xB8L};
static int64_t g_505 = 0x2C23461518967487LL;
static int32_t g_526 = 0L;
static union U2 g_540 = {-6L};
static int32_t g_580[5][4][3] = {{{0x153D8A28L,0x714A2C60L,0x153D8A28L},{1L,0x1EF4C16CL,0x5343D123L},{1L,1L,0x1EF4C16CL},{0x153D8A28L,0x1EF4C16CL,0x1EF4C16CL}},{{0x1EF4C16CL,0x714A2C60L,0x5343D123L},{0x153D8A28L,0x714A2C60L,0x153D8A28L},{1L,0x1EF4C16CL,0x5343D123L},{1L,1L,0x1EF4C16CL}},{{0x153D8A28L,0x1EF4C16CL,0x1EF4C16CL},{0x1EF4C16CL,0x714A2C60L,0x5343D123L},{0x153D8A28L,0x714A2C60L,0x153D8A28L},{1L,0x1EF4C16CL,0x5343D123L}},{{1L,1L,0x1EF4C16CL},{0x153D8A28L,0x1EF4C16CL,0x1EF4C16CL},{0x1EF4C16CL,1L,0x714A2C60L},{0x5343D123L,1L,0x5343D123L}},{{0x1EF4C16CL,0x153D8A28L,0x714A2C60L},{0x1EF4C16CL,0x1EF4C16CL,0x153D8A28L},{0x5343D123L,0x153D8A28L,0x153D8A28L},{0x153D8A28L,1L,0x714A2C60L}}};



static int32_t  func_1(void);
static int16_t  func_12(uint8_t  p_13, uint16_t  p_14, int8_t  p_15, uint8_t  p_16, const uint32_t  p_17);
static int8_t  func_20(uint32_t  p_21, const struct S0  p_22, const int32_t  p_23, uint32_t  p_24);
static uint32_t  func_26(uint32_t  p_27);




static int32_t  func_1(void)
{ 
    int64_t l_5[3];
    const struct S0 l_25 = {9L,0xDAA08BBD18838009LL,-8L};
    uint32_t l_225 = 1UL;
    int32_t l_415 = 1L;
    int32_t l_440 = 1L;
    struct S0 l_530[1][3] = {{{0x53L,0xF4C52F5D6356D9F5LL,-1L},{0x53L,0xF4C52F5D6356D9F5LL,-1L},{0x53L,0xF4C52F5D6356D9F5LL,-1L}}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_5[i] = 0x95AE649F6D4A0D46LL;
    for (g_2 = 5; (g_2 >= (-30)); --g_2)
    { 
        uint32_t l_416 = 0xB897F4ECL;
        for (g_6 = 2; (g_6 >= 0); g_6 -= 1)
        { 
            uint32_t l_226[3];
            int i;
            for (i = 0; i < 3; i++)
                l_226[i] = 0x4FDB9DDAL;
            for (g_7 = 2; (g_7 >= 0); g_7 -= 1)
            { 
                int i;
                return l_5[g_6];
            }
            g_250[0] = (safe_mod_func_uint32_t_u_u((((safe_div_func_int16_t_s_s(func_12(((safe_lshift_func_uint16_t_u_u((func_20(g_6, l_25, (func_26((--g_28)) && ((safe_sub_func_uint32_t_u_u(0xFE07384CL, l_5[0])) == g_28)), g_2) == g_211.f2), l_225)) != l_226[0]), g_211.f2, l_225, g_211.f0.f0, l_25.f1), g_211.f0.f2)) | 1UL) || g_268), l_225));
            ++l_416;
        }
    }
    if (l_225)
    { 
        uint16_t l_427 = 0xFBA5L;
        int32_t l_449 = 0L;
        l_440 = ((safe_lshift_func_uint8_t_u_s((~(safe_div_func_int16_t_s_s(((~(safe_div_func_int32_t_s_s(l_427, (safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_25.f0, (((((((l_415 = (safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((g_439 = (~(g_28 == ((((0x8096DA20L & 0UL) | 255UL) != l_5[0]) <= 0x6490L)))), 0xA25FL)), g_211.f1)), 0x86L))) || l_427) | l_5[1]) | 0L) | g_56) < g_167) > l_427))), 1))))) > g_211.f0.f0), 65532UL))), 6)) | 65535UL);
        g_250[0] = (safe_unary_minus_func_int16_t_s((safe_add_func_int16_t_s_s(((l_427 , (!(l_449 = (safe_div_func_int32_t_s_s((g_6 = 0x23B7BDE4L), ((safe_add_func_uint64_t_u_u(g_7, (l_440 = l_427))) || (-1L))))))) , 0L), g_77))));
        for (g_141 = 0; (g_141 <= 47); g_141 = safe_add_func_uint16_t_u_u(g_141, 3))
        { 
            int16_t l_452 = 0xDF10L;
            l_440 = (l_452 = 0x9532293BL);
        }
    }
    else
    { 
        const int16_t l_467 = 0x0DC7L;
        union U2 l_472 = {0xCBA9L};
        int32_t l_475 = 6L;
        for (g_179 = 0; (g_179 < (-22)); g_179--)
        { 
            uint32_t l_466 = 0x58F6FA15L;
            g_250[0] = (0x7397L != (safe_add_func_uint64_t_u_u((g_77 = (((g_177 | ((safe_mod_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((((safe_div_func_uint32_t_u_u((((safe_div_func_uint64_t_u_u(((0x930AC77B25053CB1LL | (g_465 , g_309)) <= 0x81L), l_25.f0)) , 65535UL) && g_465.f0), 0x8309ED0CL)) || g_211.f2) , g_279), l_466)) != l_467), 0xA7C4L)) > g_124)) | g_57) | g_279)), g_167)));
            if (l_466)
                continue;
        }
        g_6 = (g_141 && ((safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((l_440 ^= ((l_475 = (l_472 , (g_465.f0 = (((((safe_add_func_uint64_t_u_u((g_28 >= ((l_467 >= g_124) != l_467)), g_124)) != g_324.f1) || 1UL) , 18446744073709551610UL) || g_6)))) & g_56)), l_467)), 4)) && g_35[0][0]));
        for (g_179 = 0; g_179 < 1; g_179 += 1)
        {
            g_250[g_179] = 6L;
        }
    }
    if ((safe_lshift_func_uint8_t_u_u((g_478 , g_141), (safe_rshift_func_int8_t_s_u((((((5UL > (safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(0xFAL, 6)), 0L)), g_211.f0.f2)), g_309))) <= 0x65L) < l_25.f0) == g_211.f0.f1) <= g_211.f2), l_415)))))
    { 
        int16_t l_504[3];
        int32_t l_507 = 0xBD7AADFBL;
        uint16_t l_586 = 0xB6BEL;
        int i;
        for (i = 0; i < 3; i++)
            l_504[i] = 1L;
        for (g_177 = 0; (g_177 < 29); g_177 = safe_add_func_uint8_t_u_u(g_177, 8))
        { 
            if (g_141)
                break;
        }
        for (g_268 = 0; (g_268 < (-28)); --g_268)
        { 
            uint8_t l_503 = 0xC9L;
            int32_t l_506 = 0x104DD7D9L;
            l_507 = (l_506 = ((safe_sub_func_uint32_t_u_u(0xDEF3ACD9L, (safe_lshift_func_int16_t_s_s((g_505 |= ((safe_sub_func_uint64_t_u_u(g_268, ((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s(0L, (((((l_503 != 0x9E0BF1E8D471A9AALL) & l_25.f0) , 0xAC0322A8959AB813LL) , 1L) , g_279))), g_211.f1)) != g_7))) != l_504[2])), 13)))) != 0xB742L));
            for (g_167 = 0; (g_167 == 50); ++g_167)
            { 
                int32_t l_527[4] = {0x0D64F735L,0x0D64F735L,0x0D64F735L,0x0D64F735L};
                int i;
                l_506 = (((safe_mod_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u(((((safe_add_func_int16_t_s_s(g_211.f0.f1, (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((g_526 = ((l_225 && (safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(3L, (safe_lshift_func_uint8_t_u_u(3UL, 5)))), l_506))) || l_25.f0)), l_503)), (-10L))))) == g_35[1][0]) != g_35[0][0]) != g_177), g_268)) && l_527[2]) && g_250[0]), l_527[2])) != g_177) || g_279);
                if (g_211.f2)
                    break;
            }
            for (g_28 = 9; (g_28 > 5); g_28--)
            { 
                return l_25.f1;
            }
        }
        if ((l_530[0][0] , l_25.f1))
        { 
            uint32_t l_533 = 4294967294UL;
            int32_t l_538 = 0x55465E16L;
            int32_t l_541[2][5][4] = {{{0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L},{0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L},{0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L},{0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L},{0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L}},{{0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L},{0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L},{0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L},{0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L},{0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L,0xA6AD1D73L}}};
            int i, j, k;
            l_415 = ((((safe_mod_func_int16_t_s_s(l_533, (-3L))) || (safe_add_func_uint16_t_u_u((l_533 & (safe_add_func_uint32_t_u_u(0x981BDBA1L, 0x2A946E74L))), l_538))) && g_279) != 0x45L);
            l_507 = ((((+0x9FL) | (((g_540 , l_538) | g_465.f0) <= 0xC5CC1F07B9D86AEELL)) != g_211.f2) <= l_541[1][2][2]);
        }
        else
        { 
            int32_t l_549[5][1];
            uint32_t l_585 = 1UL;
            int32_t l_587 = 1L;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_549[i][j] = 0xDE78D617L;
            }
            if (((((l_415 = (safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((g_439 && (g_6 | (safe_mul_func_int32_t_s_s(0xB9BFE017L, ((g_505 &= (((safe_unary_minus_func_int32_t_s(l_549[0][0])) > g_77) > 1L)) != 0UL))))), g_211.f0.f1)), l_549[0][0]))) & g_250[0]) , g_211.f0.f0) < 0x5DL))
            { 
                int32_t l_564[5][2] = {{1L,1L},{1L,1L},{1L,1L},{1L,1L},{1L,1L}};
                int i, j;
                g_250[0] = (safe_sub_func_uint64_t_u_u(((l_507 = l_530[0][0].f2) > 3UL), 0x828AEB0BBA03617FLL));
                l_507 = (((safe_lshift_func_int8_t_s_s(0x15L, (((safe_sub_func_uint16_t_u_u((l_549[2][0] != (safe_add_func_int8_t_s_s(((((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(l_25.f1, 0x13L)), 0)), g_324.f1)) , l_549[0][0]) != 0xD12BL) & l_564[3][1]), l_225))), g_35[0][0])) | l_549[1][0]) <= g_250[0]))) <= 0x06L) ^ 0L);
            }
            else
            { 
                int16_t l_579 = 0xD983L;
                l_587 ^= (((safe_mod_func_uint16_t_u_u((l_507 = (safe_mod_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((0x7356551CF85484A3LL || (((safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((g_35[0][0] = (safe_mod_func_uint32_t_u_u((((l_579 != (((g_580[4][2][1] = (g_540.f0 = g_268)) | (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(l_25.f1, 14)), 0))) || 4294967295UL)) == l_504[2]) > g_250[0]), l_549[0][0]))), l_579)), l_440)) || l_549[4][0]) , 1L)) && g_211.f0.f1), 1L)), l_585)), 0x3E94A5BCL))), g_250[0])) , l_586) == l_530[0][0].f1);
            }
        }
    }
    else
    { 
        uint16_t l_588 = 0x4FC2L;
        int8_t l_602 = 0x15L;
        --l_588;
        g_580[4][1][1] = (((safe_rshift_func_int8_t_s_u(0x02L, (g_211.f0 , (((+(0x39D80E39L && l_588)) == g_141) <= g_211.f0.f0)))) > g_324.f0) != 0x9653L);
        g_7 ^= ((safe_mod_func_uint16_t_u_u(((g_56 = l_5[0]) | l_588), (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((l_602 = (((safe_mod_func_int8_t_s_s(((g_35[0][0] = g_439) <= (g_211.f0.f1 > g_478.f0)), g_141)) , l_25.f1) & g_124)) & g_309), 0x2C7FL)), g_309)))) , 0xC1FFC74EL);
    }
    return g_179;
}



static int16_t  func_12(uint8_t  p_13, uint16_t  p_14, int8_t  p_15, uint8_t  p_16, const uint32_t  p_17)
{ 
    int32_t l_231 = 0L;
    int32_t l_232[5][3] = {{(-6L),(-6L),(-6L)},{(-7L),(-7L),(-7L)},{(-6L),(-6L),(-6L)},{(-7L),(-7L),(-7L)},{(-6L),(-6L),(-6L)}};
    union U3 l_248 = {0x17036850D544D09DLL};
    int32_t l_269 = 0xA6A9CAEAL;
    int32_t l_318 = 0x351D3947L;
    int64_t l_319 = 0x5DDF7B942CA0AF4ELL;
    int i, j;
    return l_269;
}



static int8_t  func_20(uint32_t  p_21, const struct S0  p_22, const int32_t  p_23, uint32_t  p_24)
{ 
    const uint32_t l_72 = 2UL;
    int32_t l_73[3];
    union U1 l_82 = {{0x7EL,-1L,0x2915L}};
    int64_t l_123 = 0L;
    uint16_t l_162[2][4][1] = {{{0x6B94L},{9UL},{0x6B94L},{9UL}},{{0x6B94L},{9UL},{0x6B94L},{9UL}}};
    const union U5 l_168 = {1L};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_73[i] = (-10L);
    l_73[2] = l_72;
    if (g_35[0][0])
    { 
        int32_t l_74 = 0L;
        int32_t l_75 = 0xBDACABD1L;
        int32_t l_76 = 1L;
        union U3 l_91 = {5L};
        int32_t l_99 = 0xA71D4F06L;
        if ((((g_77++) != (safe_mul_func_int8_t_s_s(g_57, (l_82 , g_57)))) , ((((safe_mod_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s(0L, 4)) != l_82.f0.f2) && g_56) == p_22.f0), 1UL)) & g_2) && 8UL) || l_74)))
        { 
            uint32_t l_102 = 0x3647B8CEL;
            l_99 ^= (safe_mul_func_int8_t_s_s((0L <= ((safe_sub_func_int8_t_s_s(6L, (l_91 , ((l_75 = ((((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((~(l_73[2] = p_23)), p_22.f0)), p_22.f2)), 0)) > (-1L)) != 0x92L) || l_91.f0)) & l_76)))) & g_77)), g_6));
            for (p_24 = 0; (p_24 != 58); p_24 = safe_add_func_int64_t_s_s(p_24, 1))
            { 
                l_102 = (p_23 >= (0x5AEFL > 0x3576L));
            }
        }
        else
        { 
            uint64_t l_118[5][2] = {{0UL,18446744073709551615UL},{0UL,18446744073709551615UL},{0UL,18446744073709551615UL},{0UL,18446744073709551615UL},{0UL,18446744073709551615UL}};
            int i, j;
            for (g_57 = 0; (g_57 >= 4); g_57 = safe_add_func_uint8_t_u_u(g_57, 5))
            { 
                return l_72;
            }
            for (g_56 = 0; (g_56 != 32); g_56 = safe_add_func_uint64_t_u_u(g_56, 8))
            { 
                return g_56;
            }
            if (l_82.f0.f1)
            { 
                struct S0 l_109 = {0x62L,0xAE825D0D30074181LL,6L};
                l_99 = (65527UL ^ p_24);
                l_73[2] = (safe_sub_func_int16_t_s_s(g_6, (l_109 , 0xA476L)));
            }
            else
            { 
                l_73[2] = (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(((l_118[3][0] &= ((p_21 >= (safe_div_func_uint8_t_u_u(((l_99 = g_35[0][0]) ^ (safe_div_func_uint32_t_u_u(g_7, 1L))), l_73[2]))) == g_77)) || 0xD934L), 5)), 3));
            }
        }
        l_99 = (((l_75 = g_57) | (p_22.f2 >= (safe_div_func_uint64_t_u_u((g_77 &= 0xEF4A51DBEEE9A188LL), (safe_mul_func_int8_t_s_s(((p_22.f0 & 1L) == p_21), (-7L))))))) ^ g_7);
        g_124++;
    }
    else
    { 
        uint32_t l_127 = 6UL;
        int32_t l_146[3];
        int i;
        for (i = 0; i < 3; i++)
            l_146[i] = 0L;
lbl_140:
        l_127 = 0x6E85BCF7L;
        for (p_24 = 5; (p_24 <= 3); --p_24)
        { 
            int16_t l_138[1];
            int32_t l_139 = 1L;
            int i;
            for (i = 0; i < 1; i++)
                l_138[i] = 0x552CL;
            for (g_124 = 0; (g_124 >= 13); g_124 = safe_add_func_uint16_t_u_u(g_124, 1))
            { 
                l_139 = (safe_sub_func_uint32_t_u_u(((!p_24) || (g_124 ^ (!(l_73[2] ^= ((g_35[0][0] || (safe_sub_func_uint16_t_u_u((l_138[0] = (l_127 < g_35[0][0])), l_127))) && 0x09CE0600665BEC77LL))))), p_22.f0));
                if (l_127)
                    goto lbl_140;
            }
        }
        if (p_24)
        { 
lbl_147:
            --g_141;
            l_146[0] = (safe_mul_func_int16_t_s_s(0x9730L, 65535UL));
        }
        else
        { 
            if (p_21)
                goto lbl_147;
        }
    }
    if (p_22.f1)
    { 
        uint32_t l_148[4];
        int32_t l_166 = 0x66E0B1FDL;
        int i;
        for (i = 0; i < 4; i++)
            l_148[i] = 4294967295UL;
        l_148[2] = (-1L);
        for (l_123 = (-14); (l_123 <= 1); ++l_123)
        { 
            for (g_124 = 0; (g_124 >= 7); g_124++)
            { 
                int16_t l_153[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_153[i] = 0x310DL;
                l_153[1] = g_6;
                return p_22.f2;
            }
        }
        for (p_24 = 0; (p_24 <= 3); p_24 += 1)
        { 
            uint32_t l_180[2][4][1] = {{{1UL},{8UL},{1UL},{8UL}},{{1UL},{8UL},{1UL},{8UL}}};
            int i, j, k;
            l_162[0][3][0] = (safe_mul_func_int8_t_s_s(((((!65535UL) > (safe_add_func_uint8_t_u_u((((~0x8A4A7E50L) < (safe_add_func_uint64_t_u_u(p_22.f1, p_22.f2))) > (-1L)), g_141))) ^ 0x799C725F5692BD29LL) < l_82.f2), p_22.f0));
            for (g_77 = 0; (g_77 <= 3); g_77 += 1)
            { 
                uint32_t l_165 = 4294967295UL;
                int i;
                g_7 = (l_82.f0 , 0x1382D961L);
                l_166 &= (safe_rshift_func_uint16_t_u_u((g_7 , 0x114CL), l_165));
                g_167 = (g_7 ^= ((l_148[g_77] &= p_22.f0) && (l_82.f0.f2 && g_56)));
            }
            if ((l_168 , l_148[2]))
            { 
                l_166 = (0xC643L & ((safe_add_func_int32_t_s_s((-5L), g_6)) != (((safe_mod_func_uint32_t_u_u((((l_148[3] == 1UL) <= (-1L)) < p_22.f0), l_162[1][1][0])) > p_24) || p_22.f1)));
                g_7 = (safe_mod_func_int16_t_s_s(p_22.f0, (g_177 = l_166)));
            }
            else
            { 
                int64_t l_178 = 1L;
                l_180[1][1][0]--;
            }
            for (g_177 = 0; (g_177 >= 0); g_177 -= 1)
            { 
                int i;
                if (l_73[(g_177 + 1)])
                    break;
            }
        }
    }
    else
    { 
        int32_t l_185 = 0x21E97B72L;
        int32_t l_187 = 1L;
        int32_t l_224 = 0xF1057C5AL;
        for (g_57 = 0; (g_57 == 52); g_57++)
        { 
            int32_t l_186[1][4] = {{0xCFA5E242L,0xCFA5E242L,0xCFA5E242L,0xCFA5E242L}};
            int32_t l_198 = 0x820D8B5BL;
            int i, j;
            l_185 = 0xA72EEF0EL;
            l_187 &= l_186[0][3];
            if (p_22.f0)
            { 
                l_198 |= (safe_sub_func_uint64_t_u_u(g_167, (0UL == ((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s(g_77, (((g_35[0][0] , 0xA5L) != (-2L)) ^ (-6L)))) && (-1L)), g_56)), g_167)), l_186[0][3])) || g_179))));
                return g_179;
            }
            else
            { 
                l_186[0][3] |= 5L;
                g_7 = ((safe_rshift_func_uint16_t_u_u(p_24, 14)) || ((-8L) || g_57));
            }
        }
        for (g_77 = 0; (g_77 < 60); ++g_77)
        { 
            l_224 = (((safe_rshift_func_int16_t_s_u((l_73[2] = (safe_div_func_uint64_t_u_u(((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((p_22 , ((g_177 , g_211) , (safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((l_187 = ((safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((g_56++) & 1UL), l_185)) | p_21), g_211.f0.f0)) && (-1L))), l_73[1])) == 255UL), 0x0F1BL)) == g_77), 249UL)))), p_22.f0)) & g_177), 0x642DL)) == g_179), p_22.f0))), p_23)) & 0x7507154B7D523876LL) ^ 0xC07F36C1BE63813ALL);
        }
        l_73[0] &= p_21;
    }
    return p_23;
}



static uint32_t  func_26(uint32_t  p_27)
{ 
    int8_t l_34 = (-3L);
    struct S0 l_38 = {7L,-8L,0L};
    int32_t l_39 = 9L;
    int32_t l_40 = 1L;
    if ((safe_div_func_int8_t_s_s(((safe_unary_minus_func_int64_t_s(l_34)) == ((g_35[0][0] = g_28) != 0x402BL)), ((l_40 = (l_39 = (safe_mul_func_uint8_t_u_u(((l_38 , g_2) , 0x21L), p_27)))) ^ 18446744073709551611UL))))
    { 
        int8_t l_45 = 6L;
        int32_t l_48 = 0L;
lbl_41:
        g_7 ^= p_27;
        for (l_39 = 0; (l_39 <= 0); l_39 += 1)
        { 
            union U5 l_53 = {0x40L};
            if (g_2)
                goto lbl_41;
            for (g_28 = 0; (g_28 <= 0); g_28 += 1)
            { 
                int i, j;
                l_48 ^= (((+(safe_rshift_func_int8_t_s_s(g_35[(l_39 + 1)][l_39], 0))) , (((l_45 == (safe_sub_func_uint16_t_u_u(p_27, (g_35[0][0] >= p_27)))) ^ g_35[0][0]) < 0x0EB6BA8AL)) ^ g_7);
                g_7 = (safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u((l_53 , l_53.f0), ((safe_mod_func_int64_t_s_s(((g_57 = (g_56 = p_27)) > (0xA5F036206CBC8CA9LL < 0xEFCF39588DFEF28ELL)), p_27)) , 0xAB70486DL))), 0x4114L));
            }
        }
    }
    else
    { 
        uint64_t l_60 = 0x579AB67338D581CALL;
        for (g_56 = 10; (g_56 != 4); g_56--)
        { 
            --l_60;
            if (p_27)
                break;
        }
        for (l_38.f2 = 0; (l_38.f2 >= (-17)); l_38.f2 = safe_sub_func_uint8_t_u_u(l_38.f2, 6))
        { 
            uint8_t l_65 = 255UL;
            ++l_65;
            l_40 &= ((l_60 , 0x79B1000BL) >= (safe_rshift_func_int16_t_s_u(l_38.f0, ((g_28 && p_27) , p_27))));
        }
    }
    return p_27;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_35[i][j], "g_35[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_211.f0.f0, "g_211.f0.f0", print_hash_value);
    transparent_crc(g_211.f0.f1, "g_211.f0.f1", print_hash_value);
    transparent_crc(g_211.f0.f2, "g_211.f0.f2", print_hash_value);
    transparent_crc(g_211.f1, "g_211.f1", print_hash_value);
    transparent_crc(g_211.f2, "g_211.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_250[i], "g_250[i]", print_hash_value);

    }
    transparent_crc(g_268, "g_268", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_324.f0, "g_324.f0", print_hash_value);
    transparent_crc(g_324.f1, "g_324.f1", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_465.f0, "g_465.f0", print_hash_value);
    transparent_crc(g_478.f0, "g_478.f0", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_540.f0, "g_540.f0", print_hash_value);
    transparent_crc(g_540.f2, "g_540.f2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_580[i][j][k], "g_580[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
