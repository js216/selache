// SPDX-License-Identifier: MIT
// cctest_csmith_85e2a483.c --- cctest case csmith_85e2a483 (csmith seed 2246222979)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2c17f86c */
/* @exp_ticks 0x3c62 */

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

// Options:   -s 2246222979 -o /tmp/csmith_gen_qr2vht7b/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int32_t  f1;
   uint64_t  f2;
   int32_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   uint32_t  f1;
   uint16_t  f2;
   struct S0  f3;
};

union U3 {
   int8_t  f0;
   struct S0  f1;
};


static int32_t g_3 = 0xBA1A4D63L;
static int32_t g_6 = 0x1E9C96C7L;
static uint8_t g_11 = 0x69L;
static int16_t g_18 = 0x27F0L;
static int8_t g_21 = 0x08L;
static int32_t g_23[4][4] = {{0x1BB35B68L,0x1BB35B68L,0x1BB35B68L,0x1BB35B68L},{0x1BB35B68L,0x1BB35B68L,0x1BB35B68L,0x1BB35B68L},{0x1BB35B68L,0x1BB35B68L,0x1BB35B68L,0x1BB35B68L},{0x1BB35B68L,0x1BB35B68L,0x1BB35B68L,0x1BB35B68L}};
static int8_t g_26 = 0L;
static uint32_t g_27[3][2] = {{0x88FED6C3L,0x88FED6C3L},{0x2B000250L,0x88FED6C3L},{0x88FED6C3L,0x2B000250L}};
static union U1 g_51 = {{65526UL,0xD96456CFL,0x4FF2D4E203D7E6DELL,-5L,-1L}};
static union U3 g_53[3][1][4] = {{{{1L},{1L},{3L},{1L}}},{{{1L},{0L},{0L},{1L}}},{{{0L},{1L},{0L},{0L}}}};



static int32_t  func_1(void);
static uint64_t  func_32(const uint32_t  p_33, struct S0  p_34, uint32_t  p_35, int64_t  p_36);
static int32_t  func_38(union U1  p_39, union U3  p_40, union U3  p_41, uint32_t  p_42, int64_t  p_43);
static union U1  func_44(int64_t  p_45, int32_t  p_46, union U3  p_47, uint32_t  p_48, union U1  p_49);




static int32_t  func_1(void)
{ 
    const int32_t l_2[1][5] = {{0x64F14790L,0x64F14790L,0x64F14790L,0x64F14790L,0x64F14790L}};
    int32_t l_10 = 6L;
    union U3 l_50 = {0x15L};
    const int32_t l_76 = (-1L);
    uint32_t l_84 = 18446744073709551607UL;
    uint64_t l_111 = 2UL;
    int i, j;
    if ((l_2[0][2] , l_2[0][3]))
    { 
        const uint16_t l_9 = 0xB2C5L;
        int32_t l_15 = 0L;
        int32_t l_16 = 0xBF68593FL;
        int32_t l_22 = (-1L);
        int32_t l_24 = 0xAA3E8F08L;
        int32_t l_25 = (-9L);
        for (g_3 = 18; (g_3 < (-18)); --g_3)
        { 
            uint16_t l_14[1][3];
            int32_t l_17 = 0xC37FC054L;
            int32_t l_19 = (-1L);
            int32_t l_20[4];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_14[i][j] = 3UL;
            }
            for (i = 0; i < 4; i++)
                l_20[i] = 0x9D2E819DL;
            for (g_6 = 0; (g_6 <= (-27)); g_6--)
            { 
                if (l_9)
                    break;
                ++g_11;
            }
            l_14[0][2] = g_3;
            ++g_27[1][0];
        }
    }
    else
    { 
        struct S0 l_37 = {0x2A60L,0x4E023024L,0x1329794902820A3DLL,0x7638FF43L,0x93911E74L};
        int32_t l_94 = (-8L);
        for (g_6 = 1; (g_6 >= 0); g_6 -= 1)
        { 
            uint16_t l_77[5];
            int32_t l_78 = (-2L);
            int32_t l_108 = (-1L);
            int32_t l_109[1];
            uint64_t l_110 = 0x0BB767B376A3B401LL;
            int i;
            for (i = 0; i < 5; i++)
                l_77[i] = 0x11A9L;
            for (i = 0; i < 1; i++)
                l_109[i] = 0xE89F23B6L;
            if (((safe_rshift_func_uint16_t_u_s(((((((func_32((0L ^ 0x22L), l_37, ((func_38(func_44(g_21, g_23[3][2], l_50, l_37.f2, g_51), g_53[2][0][2], g_53[2][0][2], l_50.f0, g_21) == g_21) > l_50.f0), g_18) & (-4L)) ^ l_76) & 1UL) ^ l_77[4]) & l_2[0][0]) && l_2[0][2]), 14)) ^ l_37.f3))
            { 
                uint8_t l_92[2];
                int32_t l_93[4][1][2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_92[i] = 0UL;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_93[i][j][k] = 0xF5C60D0FL;
                    }
                }
                g_51.f0.f1 &= (((l_78 ^= 0xF7E1E514L) || ((safe_mod_func_uint32_t_u_u((g_27[0][1] |= (safe_mul_func_int16_t_s_s((((~l_77[2]) && g_26) && (l_84 < 0x98CB2CABL)), 0xE7F8L))), 0x24DA47CCL)) < g_23[3][2])) == l_37.f2);
                l_94 &= (g_51.f1 || (((safe_mod_func_int8_t_s_s((8L < ((l_37.f1 = (g_51.f0.f3 ^ (+(l_93[0][0][1] &= ((((safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s((l_50.f1.f1 = (g_18 |= g_51.f1)), l_92[0])) && 7L), 0x39CA810DL)) || l_92[1]) && g_11) && g_6))))) == l_92[0])), l_77[3])) > l_37.f4) & g_51.f1));
                l_109[0] = (+((safe_mod_func_uint16_t_u_u((l_78 = l_78), ((((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_84, g_27[1][0])), (safe_sub_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((l_10 = ((l_108 = (safe_mul_func_int8_t_s_s((l_77[4] , g_27[2][0]), 9L))) == 0L)), g_26)), 0xAEL)))) ^ 65527UL) & 0xFBC0B842L) , l_77[2]))) , l_2[0][0]));
            }
            else
            { 
                if (g_51.f0.f2)
                    break;
                l_110 = l_50.f0;
                return l_84;
            }
            for (g_51.f0.f2 = 0; (g_51.f0.f2 <= 1); g_51.f0.f2 += 1)
            { 
                int i, j;
                g_53[2][0][2].f1.f1 = g_27[g_6][g_51.f0.f2];
                if (g_27[(g_51.f0.f2 + 1)][g_6])
                    break;
            }
        }
        l_37 = l_37;
    }
    g_6 |= (l_76 , 4L);
    return l_111;
}



static uint64_t  func_32(const uint32_t  p_33, struct S0  p_34, uint32_t  p_35, int64_t  p_36)
{ 
    int8_t l_75 = 0xEBL;
    for (g_51.f0.f2 = 20; (g_51.f0.f2 >= 36); g_51.f0.f2++)
    { 
        return l_75;
    }
    for (g_51.f1 = 0; g_51.f1 < 3; g_51.f1 += 1)
    {
        for (g_26 = 0; g_26 < 2; g_26 += 1)
        {
            g_27[g_51.f1][g_26] = 0x4DC86549L;
        }
    }
    g_51.f3.f1 |= p_36;
    return l_75;
}



static int32_t  func_38(union U1  p_39, union U3  p_40, union U3  p_41, uint32_t  p_42, int64_t  p_43)
{ 
    int64_t l_65 = 1L;
    uint8_t l_66 = 255UL;
    int32_t l_68 = 1L;
    int32_t l_69 = 0x56384447L;
    uint64_t l_72[4] = {0xDD1EB1080E253E14LL,0xDD1EB1080E253E14LL,0xDD1EB1080E253E14LL,0xDD1EB1080E253E14LL};
    int i;
    for (p_40.f1.f0 = (-14); (p_40.f1.f0 == 10); ++p_40.f1.f0)
    { 
        const int32_t l_67[4] = {2L,2L,2L,2L};
        int i;
        g_3 &= (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((l_69 = (safe_lshift_func_int8_t_s_u((0xF9L < ((l_65 <= (l_68 ^= (g_11 >= (l_66 <= l_67[2])))) | l_67[2])), 2))), p_39.f3.f0)) < (-4L)), p_39.f3.f4)) < p_39.f2), g_51.f1))));
        p_39.f3.f1 ^= g_53[2][0][2].f0;
    }
    for (l_65 = 0; (l_65 == (-14)); l_65--)
    { 
        if (l_72[1])
            break;
        return g_3;
    }
    return g_26;
}



static union U1  func_44(int64_t  p_45, int32_t  p_46, union U3  p_47, uint32_t  p_48, union U1  p_49)
{ 
    union U1 l_52 = {{65531UL,0x5344FFA2L,9UL,0x1485A0FFL,0x149088B5L}};
    g_51.f0.f1 = g_18;
    return l_52;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_23[i][j], "g_23[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_27[i][j], "g_27[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_51.f0.f0, "g_51.f0.f0", print_hash_value);
    transparent_crc(g_51.f0.f1, "g_51.f0.f1", print_hash_value);
    transparent_crc(g_51.f0.f2, "g_51.f0.f2", print_hash_value);
    transparent_crc(g_51.f0.f3, "g_51.f0.f3", print_hash_value);
    transparent_crc(g_51.f0.f4, "g_51.f0.f4", print_hash_value);
    transparent_crc(g_51.f1, "g_51.f1", print_hash_value);
    transparent_crc(g_51.f2, "g_51.f2", print_hash_value);
    transparent_crc(g_51.f3.f0, "g_51.f3.f0", print_hash_value);
    transparent_crc(g_51.f3.f1, "g_51.f3.f1", print_hash_value);
    transparent_crc(g_51.f3.f2, "g_51.f3.f2", print_hash_value);
    transparent_crc(g_51.f3.f3, "g_51.f3.f3", print_hash_value);
    transparent_crc(g_51.f3.f4, "g_51.f3.f4", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_53[i][j][k].f0, "g_53[i][j][k].f0", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
