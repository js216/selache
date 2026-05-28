// SPDX-License-Identifier: MIT
// cctest_csmith_b4e0b286.c --- cctest case csmith_b4e0b286 (csmith seed 3034624646)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x25344ecc */
/* @exp_ticks 0x3607 */

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

// Options:   -s 3034624646 -o /tmp/csmith_gen_wkqcrlva/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   int16_t  f1;
};
#pragma pack(pop)

union U1 {
   const uint16_t  f0;
   const uint16_t  f1;
   const uint64_t  f2;
};

union U2 {
   struct S0  f0;
};


static uint8_t g_2 = 0x14L;
static int32_t g_31 = 0x88B9ABC1L;
static int8_t g_47 = 0x8CL;
static struct S0 g_63 = {6UL,1L};
static union U1 g_64 = {65526UL};
static uint64_t g_72 = 0xC1B93FB8B7E04BE0LL;
static int16_t g_114[5] = {0x00D3L,0x00D3L,0x00D3L,0x00D3L,0x00D3L};
static int64_t g_116 = 5L;
static int16_t g_117 = 0L;
static uint32_t g_118 = 4294967287UL;
static union U2 g_144 = {{1UL,0L}};
static uint32_t g_146 = 0x60F080F8L;
static int64_t g_161 = 0xD266C56F7F9ADAB8LL;
static int16_t g_181[3] = {0x9DDBL,0x9DDBL,0x9DDBL};
static int64_t g_182 = 0x8EEB3F8241A347C5LL;
static int64_t g_183 = 0xC2BE0499F85C49E2LL;
static uint8_t g_184 = 0UL;
static int64_t g_210 = 2L;



static uint32_t  func_1(void);
static const int64_t  func_12(struct S0  p_13, int8_t  p_14, union U1  p_15, const int32_t  p_16, uint32_t  p_17);
static struct S0  func_18(uint32_t  p_19);
static struct S0  func_21(int8_t  p_22);




static uint32_t  func_1(void)
{ 
    int32_t l_121 = 0x7268510EL;
    struct S0 l_129 = {18446744073709551613UL,0x48F1L};
    int32_t l_179 = 0xE2C18053L;
    int32_t l_180[2];
    uint32_t l_209 = 18446744073709551614UL;
    int64_t l_211 = 2L;
    int i;
    for (i = 0; i < 2; i++)
        l_180[i] = 1L;
    if (g_2)
    { 
        struct S0 l_3[5][5] = {{{4UL,1L},{0x5B7CEFA9L,-9L},{0x5B7CEFA9L,-9L},{4UL,1L},{4UL,1L}},{{18446744073709551608UL,0x8195L},{0xF38C0887L,0xFA4AL},{18446744073709551608UL,0x8195L},{0xF38C0887L,0xFA4AL},{18446744073709551608UL,0x8195L}},{{4UL,1L},{4UL,1L},{0x5B7CEFA9L,-9L},{0x5B7CEFA9L,-9L},{4UL,1L}},{{0xE34B64B5L,-1L},{0xF38C0887L,0xFA4AL},{0xE34B64B5L,-1L},{0xF38C0887L,0xFA4AL},{0xE34B64B5L,-1L}},{{4UL,1L},{0x5B7CEFA9L,-9L},{0x5B7CEFA9L,-9L},{4UL,1L},{4UL,1L}}};
        int32_t l_4 = 0x04272BA7L;
        uint64_t l_122 = 0x109203CF1BE4320ELL;
        union U2 l_123 = {{18446744073709551611UL,0xC69AL}};
        int32_t l_177 = (-1L);
        int i, j;
        for (g_2 = 0; (g_2 <= 4); g_2 += 1)
        { 
            uint16_t l_11 = 0xADCAL;
            if (l_4)
                break;
            l_122 = (safe_lshift_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_2, 0x63L)), 4)) & l_11) > ((((((((func_12(func_18(g_2), g_64.f0, g_64, l_11, g_64.f0) , 0x6D9707E2L) | g_117) , (-9L)) || l_4) || g_116) <= l_11) || l_121) || 5UL)), 14));
            for (g_47 = 0; (g_47 <= 4); g_47 += 1)
            { 
                int32_t l_130 = (-1L);
                int i, j;
                l_129 = (((g_31 = ((l_123 , (g_63.f1 < (safe_add_func_uint16_t_u_u((65535UL <= (+(safe_div_func_uint32_t_u_u((l_3[g_47][g_2] , l_3[g_47][g_2].f1), l_3[g_47][g_2].f0)))), g_72)))) || 0x2D87D777L)) , g_64.f1) , g_63);
                l_3[g_47][g_2] = l_3[4][3];
                l_130 = l_3[g_47][g_2].f1;
            }
        }
        for (l_122 = 0; (l_122 > 27); ++l_122)
        { 
            uint32_t l_145[2];
            const union U2 l_173 = {{18446744073709551612UL,1L}};
            uint64_t l_176[3];
            int i;
            for (i = 0; i < 2; i++)
                l_145[i] = 0UL;
            for (i = 0; i < 3; i++)
                l_176[i] = 0xBD94EE24373CAA1ALL;
            for (g_47 = 0; (g_47 != 19); g_47++)
            { 
                uint32_t l_141[5] = {0x10F9C02EL,0x10F9C02EL,0x10F9C02EL,0x10F9C02EL,0x10F9C02EL};
                int i;
                g_146 ^= (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(3UL, (((((((safe_sub_func_uint8_t_u_u((18446744073709551615UL ^ l_141[3]), (safe_add_func_uint32_t_u_u((g_144 , l_145[1]), l_145[1])))) & g_64.f0) & g_63.f0) > g_31) | l_145[1]) & l_145[1]) || l_129.f1))) || l_141[3]), 0));
                l_121 ^= (g_63.f1 && ((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u((l_141[2] & ((safe_add_func_uint32_t_u_u(0x6163BBE5L, (safe_lshift_func_int8_t_s_u((g_161 = (safe_mod_func_int64_t_s_s(g_144.f0.f0, 1UL))), 0)))) , g_146)), l_145[0])) >= 0x7831412115AF14B1LL), 0)) , l_145[1]) || l_145[0]), l_123.f0.f1)), l_122)) , g_63.f0));
            }
            l_177 = (((safe_rshift_func_uint16_t_u_u((l_4 = 0x7073L), (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((0xBCL || (+(safe_lshift_func_uint16_t_u_s(((((safe_div_func_int32_t_s_s(((l_173 , (((safe_mod_func_int8_t_s_s((l_123 , l_129.f0), 0x06L)) & 0x756157937C942014LL) ^ 65531UL)) , 0x097D27A3L), l_176[1])) > g_144.f0.f1) & 0x4EA75E2C04EAD8C2LL) ^ 0x52L), 5)))), l_129.f0)), l_173.f0.f0)))) ^ g_144.f0.f1) <= 0L);
        }
        g_144.f0 = l_129;
    }
    else
    { 
        struct S0 l_178 = {18446744073709551615UL,0xFDC4L};
        l_178 = l_129;
    }
    ++g_184;
    l_211 = (g_210 = (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((((safe_sub_func_int8_t_s_s(1L, (l_209 ^= (!(((0xF2L < (safe_sub_func_int32_t_s_s((g_31 = ((safe_lshift_func_int16_t_s_u((safe_div_func_int8_t_s_s((!((safe_div_func_int64_t_s_s(8L, (safe_mod_func_int64_t_s_s((l_180[1] ^= (g_72 & g_64.f0)), l_121)))) , g_72)), l_129.f1)), 0)) , g_183)), 0L))) , l_180[1]) , 1UL))))) != 0x973C7F1BL) & g_183), l_129.f0)), g_184)), 6)) < l_121), g_2)));
    return g_116;
}



static const int64_t  func_12(struct S0  p_13, int8_t  p_14, union U1  p_15, const int32_t  p_16, uint32_t  p_17)
{ 
    struct S0 l_78[1] = {{7UL,0x369EL}};
    const int32_t l_81 = 0xB18E11B1L;
    int32_t l_94 = 0xF0579679L;
    int32_t l_115[3][4] = {{0x970CE46CL,0x95449CDFL,0x970CE46CL,0x970CE46CL},{0x95449CDFL,0x95449CDFL,0x3692C56CL,0x970CE46CL},{0x970CE46CL,0x3692C56CL,0x3692C56CL,0x970CE46CL}};
    int i, j;
    for (g_31 = (-4); (g_31 == (-24)); g_31 = safe_sub_func_uint8_t_u_u(g_31, 1))
    { 
        for (p_14 = 0; (p_14 >= 0); p_14 -= 1)
        { 
            return p_13.f1;
        }
    }
    for (g_72 = 0; (g_72 <= 3); g_72++)
    { 
        uint32_t l_84 = 0xE3606EC1L;
        int32_t l_93[4];
        uint8_t l_113 = 0x6EL;
        int i;
        for (i = 0; i < 4; i++)
            l_93[i] = 1L;
        if ((l_94 ^= ((l_93[0] = (l_81 < (safe_add_func_int8_t_s_s(l_84, (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s(l_81, (safe_add_func_int64_t_s_s(g_64.f1, l_84)))) | p_13.f0), (-1L))), 8)))))) && p_13.f0)))
        { 
            for (l_94 = 3; (l_94 >= 0); l_94 -= 1)
            { 
                int i;
                return l_93[l_94];
            }
        }
        else
        { 
            const uint32_t l_104 = 1UL;
            for (g_63.f0 = 0; (g_63.f0 >= 19); g_63.f0 = safe_add_func_uint64_t_u_u(g_63.f0, 2))
            { 
                uint16_t l_97 = 65530UL;
                l_97++;
                l_93[0] = (safe_div_func_int32_t_s_s(((0x6864248A5E38B96ELL & g_47) < (safe_rshift_func_int16_t_s_s(((l_93[0] != (0xE7L & p_13.f1)) ^ l_104), 1))), 0x3F78960EL));
            }
            p_13 = (((0xA3D1CE2EL > 4294967295UL) & (6UL < (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(l_81, 12)), g_47)), l_113)))) , g_63);
        }
        ++g_118;
        return p_15.f1;
    }
    return p_13.f0;
}



static struct S0  func_18(uint32_t  p_19)
{ 
    uint16_t l_20[4][2][4] = {{{0x3C3AL,0x14D2L,0x3C3AL,0UL},{8UL,0x14D2L,0UL,0x14D2L}},{{8UL,0UL,0x3C3AL,0x14D2L},{0x3C3AL,0x14D2L,0x3C3AL,0UL}},{{8UL,0x14D2L,0UL,0x14D2L},{8UL,0UL,0x3C3AL,0x14D2L}},{{0x3C3AL,0x14D2L,0x3C3AL,0UL},{8UL,0x14D2L,0UL,0x14D2L}}};
    int32_t l_26 = 0xEB4983CAL;
    int32_t l_27 = 0xE9B8A514L;
    struct S0 l_75[1] = {{0xB58F18CAL,-1L}};
    int i, j, k;
    for (p_19 = 0; (p_19 <= 1); p_19 += 1)
    { 
        int64_t l_25 = (-8L);
        int32_t l_28[4];
        int i;
        for (i = 0; i < 4; i++)
            l_28[i] = 0x00858698L;
        g_63 = func_21((((g_2 , (l_28[2] = (safe_mod_func_uint32_t_u_u((l_25 = p_19), (((l_27 = ((l_26 = g_2) , 1L)) , g_2) ^ (-2L)))))) >= p_19) , g_2));
        for (l_25 = 1; (l_25 >= 0); l_25 -= 1)
        { 
            struct S0 l_65[5][4] = {{{0xAF129277L,0L},{18446744073709551607UL,0x5737L},{0xAF129277L,0L},{0xAF129277L,0L}},{{18446744073709551607UL,0x5737L},{18446744073709551607UL,0x5737L},{7UL,0x1586L},{18446744073709551607UL,0x5737L}},{{18446744073709551607UL,0x5737L},{0xAF129277L,0L},{0xAF129277L,0L},{18446744073709551607UL,0x5737L}},{{0xAF129277L,0L},{18446744073709551607UL,0x5737L},{0xAF129277L,0L},{0xAF129277L,0L}},{{18446744073709551607UL,0x5737L},{18446744073709551607UL,0x5737L},{7UL,0x1586L},{18446744073709551607UL,0x5737L}}};
            struct S0 l_66 = {0x1949225DL,-1L};
            int32_t l_71[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_71[i] = 0x5BC5B369L;
            for (l_26 = 0; (l_26 <= 1); l_26 += 1)
            { 
                int i, j, k;
                if (l_20[(l_26 + 1)][l_26][l_26])
                    break;
            }
            g_31 = (-1L);
            l_66 = (l_65[0][2] = (g_64 , g_63));
            for (l_27 = 0; (l_27 <= 1); l_27 += 1)
            { 
                l_28[3] ^= ((0x8441L && (((g_31 == ((safe_rshift_func_int8_t_s_s(p_19, 6)) == ((safe_rshift_func_uint16_t_u_s(p_19, 2)) || p_19))) < l_66.f0) & 9UL)) > g_64.f0);
                ++g_72;
            }
        }
    }
    return l_75[0];
}



static struct S0  func_21(int8_t  p_22)
{ 
    union U2 l_46[5] = {{{18446744073709551615UL,0x40E8L}},{{18446744073709551615UL,0x40E8L}},{{18446744073709551615UL,0x40E8L}},{{18446744073709551615UL,0x40E8L}},{{18446744073709551615UL,0x40E8L}}};
    int i;
    for (p_22 = 25; (p_22 > 1); --p_22)
    { 
        int32_t l_52 = 1L;
        uint32_t l_61 = 4294967295UL;
        struct S0 l_62[1][5][2] = {{{{0x0FACFA70L,-4L},{0x0FACFA70L,-4L}},{{0x0FACFA70L,-4L},{0x0FACFA70L,-4L}},{{0x0FACFA70L,-4L},{0x0FACFA70L,-4L}},{{0x0FACFA70L,-4L},{0x0FACFA70L,-4L}},{{0x0FACFA70L,-4L},{0x0FACFA70L,-4L}}}};
        int i, j, k;
        for (g_31 = 16; (g_31 > 26); g_31 = safe_add_func_int64_t_s_s(g_31, 1))
        { 
            struct S0 l_48 = {0xB5F277F1L,-2L};
            int32_t l_60 = (-7L);
            if (g_31)
                break;
            if ((p_22 == ((safe_rshift_func_int16_t_s_u((-1L), (safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_22, ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(((g_47 &= (safe_mod_func_uint64_t_u_u((l_46[0] , g_31), p_22))) != p_22), 3)), 0)) && 0xCF4275799D45EB44LL))) >= p_22), 15)))) , l_46[0].f0.f0)))
            { 
                return l_48;
            }
            else
            { 
                uint32_t l_59 = 0xA086CC6BL;
                l_60 = (0UL != (l_52 = (safe_add_func_int64_t_s_s((((1UL > (~l_52)) | (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((8L >= g_2) > p_22), 12)), p_22)), l_59))) ^ 0x8D9F6C8506302082LL), l_52))));
                if (g_31)
                    break;
                l_52 = l_61;
            }
        }
        l_62[0][0][1] = l_46[0].f0;
        return g_63;
    }
    return g_63;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_63.f0, "g_63.f0", print_hash_value);
    transparent_crc(g_63.f1, "g_63.f1", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_114[i], "g_114[i]", print_hash_value);

    }
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_144.f0.f0, "g_144.f0.f0", print_hash_value);
    transparent_crc(g_144.f0.f1, "g_144.f0.f1", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_181[i], "g_181[i]", print_hash_value);

    }
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
