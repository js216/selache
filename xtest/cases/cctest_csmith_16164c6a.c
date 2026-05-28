// SPDX-License-Identifier: MIT
// cctest_csmith_16164c6a.c --- cctest case csmith_16164c6a (csmith seed 370560106)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x70b618ac */
/* @exp_ticks 0x1ac9b */

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

// Options:   -s 370560106 -o /tmp/csmith_gen_y_6r5xp4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint64_t  f1;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
   struct S0  f1;
   const uint8_t  f2;
};

union U2 {
   struct S1  f0;
   int32_t  f1;
   const int64_t  f2;
   int32_t  f3;
};


static uint64_t g_2 = 18446744073709551615UL;
static uint8_t g_3 = 1UL;
static uint8_t g_27 = 0UL;
static uint64_t g_30 = 2UL;
static struct S1 g_34 = {0x56CD219FL,{0x4A603D2CL,0x3E4C996E1580EB60LL},0x9AL};
static int32_t g_36 = 4L;
static uint64_t g_37 = 4UL;
static uint32_t g_48[5] = {0x1E161E41L,0x1E161E41L,0x1E161E41L,0x1E161E41L,0x1E161E41L};
static uint32_t g_63 = 0x0197F5CEL;
static int32_t g_78 = 0xA6C3C0C8L;
static uint64_t g_86 = 0x30BE999AA20CFB03LL;
static int16_t g_165[2][1][2] = {{{0xCF93L,0xCF93L}},{{0xCF93L,0xCF93L}}};
static uint32_t g_166 = 4294967290UL;
static uint64_t g_181 = 18446744073709551615UL;
static uint32_t g_206 = 0xBC4FE304L;
static uint16_t g_243[1][2][5] = {{{65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL}}};
static int32_t g_284[5][3] = {{5L,5L,5L},{5L,5L,5L},{5L,5L,5L},{5L,5L,5L},{5L,5L,5L}};
static int32_t g_285 = 3L;
static int16_t g_288 = 0x0B3DL;
static int32_t g_290 = 0xC06C30A7L;
static uint64_t g_292 = 18446744073709551614UL;
static uint32_t g_308 = 0x2F34E296L;
static uint64_t g_310[1] = {18446744073709551612UL};
static int16_t g_337 = 0x3A54L;
static uint32_t g_338 = 18446744073709551614UL;
static int8_t g_339 = 0L;
static int16_t g_355 = 1L;
static uint8_t g_356 = 0x8DL;



static const uint16_t  func_1(void);
static int16_t  func_11(const int64_t  p_12, const uint8_t  p_13, int64_t  p_14, uint16_t  p_15, int32_t  p_16);
static struct S1  func_18(struct S0  p_19, uint32_t  p_20, int32_t  p_21);
static int32_t  func_44(int8_t  p_45);




static const uint16_t  func_1(void)
{ 
    int32_t l_23 = 0xAE735984L;
    int32_t l_242[1][4] = {{0x36862238L,0x36862238L,0x36862238L,0x36862238L}};
    struct S0 l_250 = {18446744073709551611UL,3UL};
    int8_t l_307 = 0xB4L;
    union U2 l_363 = {{1UL,{0x6D81FED2L,0UL},0x18L}};
    int16_t l_371 = (-1L);
    int i, j;
    if (g_2)
    { 
        const uint64_t l_17 = 0x12D2C87A7525D2D9LL;
        --g_3;
        for (g_3 = 20; (g_3 < 52); g_3 = safe_add_func_uint32_t_u_u(g_3, 1))
        { 
            int32_t l_8 = 1L;
            int32_t l_241 = (-6L);
            if (l_8)
            { 
                struct S0 l_22 = {18446744073709551615UL,0xEBDA18461E707165LL};
                l_241 = (safe_rshift_func_int16_t_s_s(func_11(l_17, g_2, ((func_18(l_22, l_8, l_23) , 0x5BB1E24EB764FAD6LL) && 0x0E9DD37137C2AE6BLL), g_2, g_34.f2), g_2));
            }
            else
            { 
                if (l_17)
                    break;
            }
            --g_243[0][1][3];
        }
        g_78 = (((safe_add_func_uint32_t_u_u(((l_23 != (((l_242[0][3] = (safe_div_func_int8_t_s_s(((g_34.f2 , l_250) , (((safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((1L < l_242[0][1]), l_17)), g_3)) > l_17) != g_30)), l_17))) || l_17) <= l_23)) <= 4294967295UL), l_250.f1)) && g_243[0][0][3]) | l_17);
    }
    else
    { 
        uint16_t l_269[2][4] = {{0x8216L,0x8216L,0x8216L,0x8216L},{0x8216L,0x8216L,0x8216L,0x8216L}};
        int64_t l_270 = 0L;
        int32_t l_309 = 0xA0ADB7E7L;
        int32_t l_353 = (-1L);
        int32_t l_354 = 0xAD6298BAL;
        int i, j;
        if (((safe_lshift_func_uint16_t_u_s((g_243[0][1][3] = (safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_242[0][1], (((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(0x961AL, (safe_mul_func_uint8_t_u_u((g_34.f1.f0 || (g_34.f1 , l_269[0][1])), l_270)))), g_34.f1.f1)) ^ l_242[0][2]), 2)) <= 1UL) > 0xE3BBL))), 254UL))), g_37)) < l_269[0][3]))
        { 
            union U2 l_276 = {{1UL,{0x4D287EBBL,18446744073709551614UL},5UL}};
            int32_t l_289 = 0L;
            int32_t l_291 = 0x4248502BL;
            for (g_37 = (-9); (g_37 < 44); g_37++)
            { 
                int16_t l_275 = (-6L);
                uint8_t l_286 = 0x91L;
                int32_t l_287[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_287[i] = 0L;
                g_34.f1 = l_250;
                l_286 = (safe_div_func_int8_t_s_s((l_275 | (g_285 = (g_284[2][1] = ((g_166 = (l_276 , (!(safe_rshift_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u(0L, 14)) < (safe_mul_func_uint8_t_u_u(251UL, l_269[0][1]))) < g_27), 0))))) , g_48[3])))), g_27));
                g_292++;
            }
            if ((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u(((g_63 <= l_269[1][2]) <= (safe_add_func_uint8_t_u_u(255UL, (g_308 |= ((l_307 = (g_288 = ((safe_rshift_func_uint8_t_u_u((g_34.f2 | l_276.f0.f1.f0), 7)) | (-1L)))) < 8UL))))), 0x2166L)), 0x82L)), g_3)), 0x92F58A89B0824381LL)))
            { 
                ++g_310[0];
            }
            else
            { 
                l_309 = (((l_276 , ((((safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_int64_t_s(0xA07003B070FD17ADLL)) == (!l_276.f0.f0)), ((((((g_310[0] , 0x1396696816D0B2B6LL) >= g_34.f1.f1) ^ 0x8545L) && g_30) ^ g_2) , 0L))) <= l_276.f0.f0) && 4294967286UL) & 0xA16B741FL)) ^ g_284[2][2]) ^ 6UL);
                g_78 |= (((safe_div_func_int32_t_s_s((((g_63 || g_165[0][0][1]) <= 2L) <= ((l_309 |= (safe_mul_func_int16_t_s_s(g_243[0][1][3], l_289))) != 0xBE98L)), g_34.f1.f1)) & 0x9ECE6E98DB74E30DLL) , 0x376F33A5L);
            }
            if (((safe_sub_func_int8_t_s_s((l_309 = (safe_sub_func_uint64_t_u_u((0xE4L >= (safe_div_func_int16_t_s_s(g_290, ((((g_285 |= (safe_add_func_uint16_t_u_u((g_37 ^ (g_339 |= ((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((g_338 = (safe_rshift_func_uint8_t_u_u(0xB3L, g_337))), g_243[0][1][3])), l_269[0][0])) , 65527UL))), g_284[2][1]))) >= l_309) || l_270) | l_276.f0.f1.f1)))), 0x27A0DF3C2A6CF9FALL))), l_276.f0.f1.f0)) >= l_269[0][0]))
            { 
                uint64_t l_350[4];
                int32_t l_351 = 0x3DDFA3CCL;
                int i;
                for (i = 0; i < 4; i++)
                    l_350[i] = 0x42449FA879EB5DBALL;
                g_285 ^= (l_242[0][1] ^= (safe_lshift_func_uint8_t_u_u((((((l_351 |= ((l_276.f0.f1.f0 != l_270) <= (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(l_291, ((safe_mul_func_uint8_t_u_u(1UL, g_292)) || g_78))), 5UL)) > l_350[0]) == l_309), 0x61L)))) != g_338) , (-3L)) || g_310[0]) || 0UL), g_181)));
                return l_276.f0.f1.f0;
            }
            else
            { 
                int64_t l_352 = 0L;
                --g_356;
                g_285 = (0xD4629021L <= (safe_add_func_int8_t_s_s(g_166, (safe_mul_func_uint8_t_u_u((l_352 && (l_363 , g_30)), g_243[0][0][1])))));
            }
        }
        else
        { 
            uint8_t l_368 = 255UL;
            g_78 ^= l_270;
            for (l_363.f0.f0 = 11; (l_363.f0.f0 == 12); l_363.f0.f0 = safe_add_func_uint32_t_u_u(l_363.f0.f0, 1))
            { 
                int8_t l_366 = 0x84L;
                int32_t l_367 = (-4L);
                l_367 = (l_366 = l_354);
                l_368--;
                l_242[0][2] = g_339;
            }
        }
        g_78 = (-9L);
    }
    l_371 = l_250.f1;
    return g_34.f2;
}



static int16_t  func_11(const int64_t  p_12, const uint8_t  p_13, int64_t  p_14, uint16_t  p_15, int32_t  p_16)
{ 
    int8_t l_89 = 0xD1L;
    int32_t l_112 = 0xDA5B0066L;
    uint32_t l_144 = 0UL;
    int32_t l_155 = 0xFEE76F71L;
    struct S0 l_210 = {0xB3F0A276L,18446744073709551611UL};
    int64_t l_222 = (-1L);
lbl_81:
    g_78 = (safe_div_func_int64_t_s_s(p_13, (safe_add_func_uint32_t_u_u(p_14, (safe_sub_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((g_63 > ((safe_sub_func_uint64_t_u_u(0x037A9E214278D6BFLL, p_14)) | 0x161CL)), 2)), g_34.f1.f0)) >= g_34.f0), p_16))))));
lbl_227:
    for (g_27 = (-29); (g_27 < 56); g_27 = safe_add_func_int64_t_s_s(g_27, 8))
    { 
        const uint32_t l_100 = 0x983F5D6BL;
        uint16_t l_113 = 1UL;
        if (g_34.f0)
            goto lbl_81;
        for (g_37 = 0; (g_37 != 35); g_37++)
        { 
            int64_t l_99 = 0xA82D269A62DAC39FLL;
            for (g_36 = 0; (g_36 < 2); g_36 = safe_add_func_int32_t_s_s(g_36, 1))
            { 
                g_86++;
                if (l_89)
                    continue;
                g_78 = (((safe_rshift_func_uint16_t_u_u(1UL, 7)) & (((+((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(g_34.f1.f0, (safe_rshift_func_uint16_t_u_s(0x9BD4L, 7)))) == (-4L)), 15)) < l_99)) ^ l_100) >= g_34.f2)) , (-1L));
            }
            g_78 = p_12;
        }
        g_78 |= (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s((((+(0xDEL ^ (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_16, (safe_div_func_uint32_t_u_u((l_100 <= (l_112 = 255UL)), l_113)))), p_16)))) < 0UL) && 0x014B0E7A36831ADELL), l_113)) , p_12), l_89));
    }
    if ((l_112 < (safe_lshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s((-3L), (((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(g_34.f1.f0, 2)) <= (((((safe_lshift_func_uint8_t_u_u((g_27 = (safe_rshift_func_uint16_t_u_s(g_36, g_48[3]))), 6)) && 0x65A9757DL) ^ p_12) <= g_37) <= l_89)) || l_89), l_89)), g_37)) != 0x9B0828E8L) != p_12))) , 0x5A07L) & l_112) <= 4294967294UL), p_12)), p_14)) , 0xC7F9B13EL) && g_34.f1.f0), p_16))))
    { 
        int16_t l_143 = 0x3F68L;
        int32_t l_152[1];
        int32_t l_153 = 0x12EA93CCL;
        const struct S0 l_209 = {2UL,0x62E04F2ECF321D07LL};
        int i;
        for (i = 0; i < 1; i++)
            l_152[i] = 0x84452C2EL;
        if (p_13)
        { 
            uint16_t l_156 = 1UL;
            for (g_34.f0 = 0; (g_34.f0 != 0); g_34.f0 = safe_add_func_uint16_t_u_u(g_34.f0, 9))
            { 
                int8_t l_151 = 0x97L;
                int32_t l_154 = 0xEA340A37L;
                l_154 = ((!(safe_add_func_uint32_t_u_u((((((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((l_112 == ((safe_rshift_func_int8_t_s_u(g_34.f2, 7)) , ((l_144--) & (l_153 = (l_152[0] = (safe_mul_func_int16_t_s_s(l_143, (safe_rshift_func_uint8_t_u_u(0UL, l_151))))))))), 4294967290UL)), 7)) < 0xEF2BL) && 0x86L) | 1L) == l_143), 1UL))) , 0x1A4155BCL);
                --l_156;
            }
            l_155 |= 0xDF7CCAC8L;
            g_78 = ((safe_div_func_uint32_t_u_u(g_34.f0, (l_152[0] = (g_27 , ((safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint16_t_u_u((--g_166), (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((-1L), (g_181--))) & (g_30 ^= (safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((~0x508D56E007783C7BLL), l_112)), 1L)), 1)))), l_143)), 0L)) , l_156) == 7UL), l_112)), 0x7B03L)), 0xD8L)))) | p_15) < l_144), p_14)) ^ p_16))))) , g_2);
        }
        else
        { 
            int64_t l_205[3];
            int i;
            for (i = 0; i < 3; i++)
                l_205[i] = 0L;
            for (g_27 = (-25); (g_27 < 15); ++g_27)
            { 
                int32_t l_195 = 1L;
                l_153 = (safe_lshift_func_uint8_t_u_s((l_195 >= (safe_div_func_int8_t_s_s((+(safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((((g_166 & ((g_165[0][0][1] ^= (((g_34.f1.f1 < ((((safe_mul_func_uint16_t_u_u((p_15 = l_205[1]), p_16)) >= 0x8E7FL) , l_112) ^ 0xE0A3195BL)) == g_34.f1.f0) ^ (-7L))) ^ 0xA6EFL)) > p_16) & 0x91E9D71703F9351ELL) > l_144) ^ l_195), 0x1900L)), 7))), p_16))), l_205[1]));
                g_206++;
            }
        }
        l_210 = l_209;
    }
    else
    { 
        int16_t l_223[3][5];
        int32_t l_224 = 0x82C662BAL;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
                l_223[i][j] = 0L;
        }
        for (g_27 = 0; (g_27 == 6); g_27 = safe_add_func_int16_t_s_s(g_27, 3))
        { 
            uint32_t l_217[3];
            uint16_t l_239 = 1UL;
            int32_t l_240 = 0L;
            int i;
            for (i = 0; i < 3; i++)
                l_217[i] = 0x6C76D569L;
            for (g_34.f1.f1 = 0; (g_34.f1.f1 <= 0); g_34.f1.f1 += 1)
            { 
                g_78 = (((((l_224 = ((safe_mod_func_int8_t_s_s((((((((safe_add_func_int64_t_s_s((-1L), (((((g_34.f2 , (0x1F5407840EC18300LL < (++l_217[0]))) > (safe_add_func_int8_t_s_s((g_34 , 7L), l_155))) ^ 255UL) != p_13) , g_36))) , 0x9EL) < 0x81L) != g_3) >= l_222) < g_86) == p_14), p_15)) || l_223[2][2])) == l_223[0][0]) >= 0x332AL) , 0x5CF2B212L) ^ 0x7642EFCBL);
            }
            if (g_181)
                continue;
            for (l_112 = 0; (l_112 < 2); l_112 = safe_add_func_int16_t_s_s(l_112, 3))
            { 
                uint8_t l_228 = 0x47L;
                if (g_206)
                    goto lbl_227;
                l_240 &= (((++l_228) , (safe_mod_func_int64_t_s_s(l_155, (safe_rshift_func_uint16_t_u_s((((((safe_rshift_func_uint16_t_u_s((~(safe_unary_minus_func_uint8_t_u(0x45L))), (l_210.f0 != (l_223[0][0] <= l_239)))) , 0x5E34AC4052702D28LL) | g_37) , g_34) , l_224), 12))))) != p_14);
            }
        }
    }
    return p_14;
}



static struct S1  func_18(struct S0  p_19, uint32_t  p_20, int32_t  p_21)
{ 
    int64_t l_26[4];
    int32_t l_35 = 0x9139F480L;
    struct S1 l_65 = {0x4895D34BL,{0x28601094L,0xB0CEC93CBC91981FLL},255UL};
    int i;
    for (i = 0; i < 4; i++)
        l_26[i] = 0x1B870004DDC87778LL;
    for (p_21 = 0; (p_21 <= 14); p_21++)
    { 
        union U2 l_33 = {{0xA0435E45L,{0xB0FF846CL,0xC5CECCE005AB1361LL},0x31L}};
        int32_t l_40 = 0L;
        for (p_20 = 0; (p_20 <= 3); p_20 += 1)
        { 
            for (p_19.f1 = 0; (p_19.f1 <= 3); p_19.f1 += 1)
            { 
                g_27--;
                --g_30;
            }
        }
        if (p_20)
            continue;
        if ((l_33 , 0x4F9A325CL))
        { 
            for (p_20 = 0; (p_20 <= 3); p_20 += 1)
            { 
                return g_34;
            }
            l_35 = p_19.f1;
        }
        else
        { 
            uint64_t l_41 = 0x64F6128B293C34F9LL;
            if (p_20)
                break;
            if ((l_35 = (g_36 ^= g_34.f0)))
            { 
                g_37++;
                ++l_41;
            }
            else
            { 
                int64_t l_64 = 0xB9BE056EFF5237AELL;
                l_40 = g_34.f1.f1;
                l_64 |= (func_44(g_30) || ((((g_63 = g_34.f1.f0) , g_34.f1.f1) < 2L) & 255UL));
            }
        }
    }
    return l_65;
}



static int32_t  func_44(int8_t  p_45)
{ 
    uint8_t l_56 = 0x68L;
lbl_62:
    for (g_30 = 0; (g_30 > 44); g_30++)
    { 
        uint32_t l_49 = 0x941993E3L;
        struct S0 l_50[4][1][3] = {{{{6UL,0x9AED293E35F2012CLL},{0x11012106L,0xF3F1863D476FC58ALL},{6UL,0x9AED293E35F2012CLL}}},{{{0x879B6842L,7UL},{0x879B6842L,7UL},{0x879B6842L,7UL}}},{{{6UL,0x9AED293E35F2012CLL},{0x11012106L,0xF3F1863D476FC58ALL},{6UL,0x9AED293E35F2012CLL}}},{{{0x879B6842L,7UL},{0x879B6842L,7UL},{0x879B6842L,7UL}}}};
        const uint32_t l_57[5] = {0x14C53FB5L,0x14C53FB5L,0x14C53FB5L,0x14C53FB5L,0x14C53FB5L};
        int i, j, k;
        for (g_36 = 4; (g_36 >= 0); g_36 -= 1)
        { 
            l_49 ^= 0x37144DB2L;
            g_34.f1 = l_50[3][0][0];
            for (g_27 = 0; (g_27 <= 4); g_27 += 1)
            { 
                l_56 = (252UL == (safe_mod_func_int16_t_s_s(p_45, (safe_unary_minus_func_int64_t_s((((safe_mul_func_uint16_t_u_u(((0x7A760F2FL <= 0x0B9C45D1L) >= 0x9701L), 0L)) ^ g_2) < 0x0AL))))));
            }
        }
        if (l_57[0])
            continue;
    }
    for (g_30 = 28; (g_30 >= 10); g_30 = safe_sub_func_uint64_t_u_u(g_30, 3))
    { 
        for (g_37 = 0; (g_37 == 57); ++g_37)
        { 
            if (g_2)
                goto lbl_62;
        }
        for (g_34.f1.f0 = 0; (g_34.f1.f0 <= 4); g_34.f1.f0 += 1)
        { 
            int i;
            return g_48[g_34.f1.f0];
        }
    }
    return l_56;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1.f0, "g_34.f1.f0", print_hash_value);
    transparent_crc(g_34.f1.f1, "g_34.f1.f1", print_hash_value);
    transparent_crc(g_34.f2, "g_34.f2", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_48[i], "g_48[i]", print_hash_value);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_165[i][j][k], "g_165[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_243[i][j][k], "g_243[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_284[i][j], "g_284[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_310[i], "g_310[i]", print_hash_value);

    }
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
