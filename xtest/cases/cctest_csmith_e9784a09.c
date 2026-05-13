// SPDX-License-Identifier: MIT
// cctest_csmith_e9784a09.c --- cctest case csmith_e9784a09 (csmith seed 3916974601)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x41e31e */

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

// Options:   -s 3916974601 -o /tmp/csmith_gen_vocjk9zi/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int32_t  f1;
   int32_t  f2;
   uint64_t  f3;
   const uint32_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

struct S1 {
   int16_t  f0;
   int32_t  f1;
   int32_t  f2;
   int32_t  f3;
   uint32_t  f4;
};

union U2 {
   int32_t  f0;
};


static int32_t g_2 = 0x1651328FL;
static int32_t g_5 = 0x41FC9A57L;
static int8_t g_11 = (-9L);
static const struct S0 g_19 = {1UL,7L,9L,0UL,5UL,0xB243E5ECL};
static int64_t g_33 = 1L;
static uint16_t g_36 = 0x5FCAL;
static union U2 g_40 = {-1L};
static uint32_t g_61 = 7UL;
static int8_t g_64[4] = {(-2L),(-2L),(-2L),(-2L)};
static uint32_t g_97[4] = {0xED8D5F6DL,0xED8D5F6DL,0xED8D5F6DL,0xED8D5F6DL};
static int8_t g_184 = 1L;
static int32_t g_185 = 0L;
static int32_t g_187 = 0xEDB7C0C4L;
static int64_t g_188 = 1L;
static int64_t g_189[1] = {0x32219468781EB0B8LL};
static int32_t g_192 = 1L;
static uint8_t g_193 = 0xBCL;
static uint32_t g_219 = 3UL;
static int32_t g_238 = 1L;
static uint32_t g_239 = 18446744073709551614UL;
static uint32_t g_243 = 0x7DEDEC40L;
static struct S1 g_275[5][3] = {{{0x0449L,0x758DAC66L,0xA19EBCADL,0xB6BBA22AL,1UL},{0x0449L,0x758DAC66L,0xA19EBCADL,0xB6BBA22AL,1UL},{0xAC2CL,0L,0x2A9382D2L,1L,3UL}},{{-8L,0xB3BB289AL,0x4E641A28L,0x5A45A9FDL,5UL},{6L,0x07D9A1DDL,-1L,0xA0A1EA45L,0xBA784E1FL},{-4L,0x2E2F3D00L,-1L,1L,4294967292UL}},{{0L,0L,0xACA091E0L,0x8585AC97L,5UL},{0x0449L,0x758DAC66L,0xA19EBCADL,0xB6BBA22AL,1UL},{0L,0L,0xACA091E0L,0x8585AC97L,5UL}},{{0L,0L,0xACA091E0L,0x8585AC97L,5UL},{-8L,0xB3BB289AL,0x4E641A28L,0x5A45A9FDL,5UL},{0x0449L,0x758DAC66L,0xA19EBCADL,0xB6BBA22AL,1UL}},{{-8L,0xB3BB289AL,0x4E641A28L,0x5A45A9FDL,5UL},{0L,0L,0xACA091E0L,0x8585AC97L,5UL},{0L,0L,0xACA091E0L,0x8585AC97L,5UL}}};



static struct S1  func_1(void);
static int8_t  func_6(int32_t  p_7, int32_t  p_8, uint32_t  p_9);
static uint64_t  func_13(int16_t  p_14);
static int64_t  func_15(int8_t  p_16, uint32_t  p_17);




static struct S1  func_1(void)
{ 
    int16_t l_12 = 0x1EBFL;
    int32_t l_157 = 0x1C342DABL;
    int32_t l_290[5];
    struct S1 l_295 = {0x181DL,0x7B62B502L,-1L,0xA8F1CCBCL,4294967295UL};
    int16_t l_322 = 0L;
    uint16_t l_323 = 0xDBF1L;
    int32_t l_324 = 1L;
    int i;
    for (i = 0; i < 5; i++)
        l_290[i] = 2L;
    for (g_2 = 0; (g_2 >= (-2)); --g_2)
    { 
        int32_t l_18 = 0x2D6273D5L;
        int32_t l_66 = (-1L);
        g_5 = g_2;
        l_290[2] &= (func_6((+((l_12 = (g_11 = g_5)) , (((func_13((func_15((((l_18 = g_5) || (((((l_18 = (((g_19 , (safe_mul_func_int8_t_s_s(((g_19.f0 >= l_12) == g_19.f5), g_5))) || 0x9AA50887L) == l_12)) <= l_12) <= l_12) == 1UL) , g_19.f2)) | g_19.f2), l_12) == l_66)) > g_2) != 0x38L) > l_66))), l_157, g_19.f1) | 0x03L);
        l_157 = (safe_add_func_uint64_t_u_u(((l_290[1] = (safe_div_func_uint64_t_u_u((g_275[4][2].f0 >= g_243), (l_295 , (safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((-1L) & g_40.f0), 1L)) && g_239), 0x11FFL)), 1)))))) >= g_40.f0), g_192));
    }
    l_324 &= ((safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((--g_193), (((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((((l_295.f3 = (((((safe_div_func_uint64_t_u_u((l_290[0] = ((safe_mul_func_int32_t_s_s(l_157, ((255UL || ((l_290[2] < (safe_rshift_func_uint8_t_u_s(((((l_295.f2 = (l_322 |= ((l_295.f1 = g_5) == 9UL))) == l_157) , l_295.f2) == l_157), 7))) > (-1L))) > g_189[0]))) <= 1UL)), g_19.f0)) || 6L) >= g_19.f5) || g_275[4][2].f1) || 0x524366A7L)) && 2UL) != g_275[4][2].f0) | (-9L)), g_275[4][2].f4)), l_295.f0)) >= l_323) != 0UL))), 4L)) ^ g_19.f1), g_192)), g_275[4][2].f3)) && g_2);
    return g_275[1][2];
}



static int8_t  func_6(int32_t  p_7, int32_t  p_8, uint32_t  p_9)
{ 
    const int8_t l_167 = (-6L);
    int32_t l_169[3];
    uint64_t l_220 = 0x2B7360856D30ABCDLL;
    int8_t l_268 = 0x30L;
    int32_t l_269 = 9L;
    int64_t l_282 = 0x0106D382288B616ALL;
    const int64_t l_289 = (-2L);
    int i;
    for (i = 0; i < 3; i++)
        l_169[i] = (-7L);
    for (g_5 = (-9); (g_5 <= 14); g_5 = safe_add_func_uint64_t_u_u(g_5, 8))
    { 
        int8_t l_178 = 4L;
        int32_t l_186[1][4][3] = {{{6L,6L,0x3F4DB05CL},{(-1L),0x3F4DB05CL,0x3F4DB05CL},{0x3F4DB05CL,2L,0L},{(-1L),2L,(-1L)}}};
        int16_t l_218 = 0x430FL;
        struct S1 l_274[3] = {{8L,8L,0xD7D5A0AEL,-1L,4294967295UL},{8L,8L,0xD7D5A0AEL,-1L,4294967295UL},{8L,8L,0xD7D5A0AEL,-1L,4294967295UL}};
        int8_t l_277 = (-8L);
        int i, j, k;
        for (g_11 = 0; (g_11 >= (-12)); g_11--)
        { 
            struct S1 l_164 = {0x3277L,4L,0xB4BFE13DL,0x6524C083L,1UL};
            int32_t l_190 = 0x0DB3F8E7L;
            int32_t l_191 = 0xFDDC11C7L;
            for (p_9 = 14; (p_9 != 24); ++p_9)
            { 
                int32_t l_168 = 0x8B3BDE5FL;
                int32_t l_179 = (-4L);
                int32_t l_180 = 2L;
                int32_t l_181 = 0xEA61EF3BL;
                int32_t l_182 = 0x6E159BBAL;
                int32_t l_183 = 0L;
                g_40.f0 = ((l_164 , ((safe_rshift_func_int8_t_s_u((l_167 & ((l_169[1] |= l_168) ^ g_36)), 4)) <= g_2)) != 1UL);
                l_178 = (safe_rshift_func_int8_t_s_u(g_2, (safe_mod_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(1L, ((p_9 , (((l_169[1] & p_8) <= g_2) , p_8)) , p_8))), 0xE9B7L)), 0x4EB716F4F35B7F52LL))));
                ++g_193;
            }
            l_220 = ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(((65535UL ^ ((0x8E7CF386L < ((safe_div_func_uint32_t_u_u(((((((safe_sub_func_int32_t_s_s((((((((safe_add_func_int16_t_s_s((((safe_mod_func_int32_t_s_s(((((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((g_19.f0 | p_8), p_7)) & g_64[2]), l_218)), l_190)), g_187)) , l_167) || l_167) != l_167), g_5)) , p_7) ^ g_185), g_185)) != 0x10D713517DEDC2EDLL) , 9UL) ^ 0x2BC5810AL) > l_218) || 1L) < p_9), g_219)) > l_191) , p_9) , (-9L)) == 0x5408E814L) & 2L), g_19.f5)) ^ 0x8E9FL)) | p_7)) , g_185), l_186[0][1][0])), p_7)), 15)) == 0x3BCE0E0F3B7A9B27LL);
        }
        for (g_219 = 21; (g_219 < 23); g_219 = safe_add_func_uint16_t_u_u(g_219, 6))
        { 
            int32_t l_232 = 1L;
            int32_t l_233 = 0x869ADE63L;
            uint64_t l_234 = 0x9ACB2F0D3425632BLL;
            int16_t l_235 = 0xB609L;
            int32_t l_236 = (-2L);
            int32_t l_242 = 0L;
            if ((safe_mod_func_int64_t_s_s((safe_add_func_int32_t_s_s(((((((safe_mul_func_uint16_t_u_u(g_19.f5, p_9)) && (l_233 = ((((safe_lshift_func_int16_t_s_u((~(g_97[1] == l_232)), 13)) >= 7UL) , l_232) || g_11))) >= l_234) <= 0xBC6E75ED7DA01E1DLL) > 3L) || 0x93B0AE34L), l_178)), p_8)))
            { 
                int32_t l_237 = (-5L);
                --g_239;
                --g_243;
                g_40.f0 = (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(l_169[1], 12)), 7)), 7UL)) <= ((g_243 = (((((safe_lshift_func_int16_t_s_u(l_237, 13)) <= (~(g_193--))) == (l_269 &= ((!(safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(p_8, 0x0B9419DEL)), g_188))) < l_268))) , 0xECEA3FFCC7CFD098LL) || l_237)) <= g_2)), l_186[0][2][0])), l_186[0][2][0])), p_7));
            }
            else
            { 
                int64_t l_276 = (-5L);
                g_40.f0 = (((((((g_275[4][2] = (((((g_36++) >= (g_185 > (!(!(1L == p_7))))) >= ((g_2 > g_19.f0) >= p_7)) | 0x27C8L) , l_274[1])) , g_184) ^ p_8) , l_233) <= 1UL) >= l_276) ^ 0xA763E715459EB2A7LL);
            }
            g_275[4][2].f2 ^= (g_19.f1 > g_33);
        }
        return l_277;
    }
    g_5 = (safe_div_func_int64_t_s_s((l_269 = (safe_add_func_uint16_t_u_u(0xE789L, (g_2 == l_282)))), ((((((((((safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((l_169[2] = g_239), l_289)), 18446744073709551615UL)), g_2)) && g_19.f1) , l_220) >= l_167) || 0xF046711D07B98909LL) , 0xC2L) , p_7) , g_184) & l_289) ^ 0L)));
    return g_2;
}



static uint64_t  func_13(int16_t  p_14)
{ 
    struct S0 l_77[4] = {{0xEBB8L,0xA76005BFL,0L,0x979E0FDA63E176CBLL,0xBCC83174L,0x3A37F729L},{0xEBB8L,0xA76005BFL,0L,0x979E0FDA63E176CBLL,0xBCC83174L,0x3A37F729L},{0xEBB8L,0xA76005BFL,0L,0x979E0FDA63E176CBLL,0xBCC83174L,0x3A37F729L},{0xEBB8L,0xA76005BFL,0L,0x979E0FDA63E176CBLL,0xBCC83174L,0x3A37F729L}};
    struct S1 l_109 = {-1L,3L,-2L,1L,4294967289UL};
    struct S1 l_110 = {0xA79CL,0x204CE78BL,0xBDA86EFAL,0xCADDF3CDL,4UL};
    union U2 l_119 = {0L};
    int i;
    for (g_5 = 3; (g_5 >= 0); g_5 -= 1)
    { 
        uint32_t l_78[3][2][4] = {{{0x17825FA2L,0xFA353696L,0x17825FA2L,0x17825FA2L},{4294967295UL,0x17825FA2L,0x17825FA2L,4294967295UL}},{{0xF6EAEA54L,0x17825FA2L,0xFA353696L,0x17825FA2L},{0x17825FA2L,0x02F5F5C3L,0xFA353696L,0xFA353696L}},{{0xF6EAEA54L,0xF6EAEA54L,0x17825FA2L,0xFA353696L},{4294967295UL,0x02F5F5C3L,4294967295UL,0x17825FA2L}}};
        int32_t l_90 = 0x52ABCF54L;
        uint64_t l_98[4][5] = {{0UL,0x198F030F790E20E3LL,0UL,0x198F030F790E20E3LL,0UL},{0UL,0UL,0UL,0UL,0UL},{0UL,0x198F030F790E20E3LL,0UL,0x198F030F790E20E3LL,0UL},{0UL,0UL,0UL,0UL,0UL}};
        int i, j, k;
        if (g_19.f3)
        { 
            int8_t l_75 = 0xC5L;
            int32_t l_79 = 0x03438797L;
            const uint32_t l_91 = 0x8347E9BEL;
            int32_t l_92 = 0xB4AB4704L;
            const struct S0 l_95 = {0xF284L,-1L,1L,1UL,0UL,4294967291UL};
            struct S1 l_108 = {0xC46AL,-1L,0xFDE95A6FL,1L,4294967290UL};
            if ((safe_lshift_func_uint16_t_u_s(g_64[1], 13)))
            { 
                uint64_t l_76 = 0x58B99485C884E0B5LL;
                int32_t l_80 = 1L;
                int i;
                l_80 = ((((l_78[1][0][3] |= ((g_64[g_5] = (safe_mod_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((((((l_75 &= p_14) >= p_14) || (l_76 = g_19.f1)) | ((l_77[3] , g_19.f4) >= g_33)) | (-8L)), 0L)) , p_14) >= p_14), p_14))) | (-7L))) < l_79) || p_14) , 0L);
            }
            else
            { 
                int8_t l_89 = 8L;
                l_92 &= (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((l_90 = ((((((((g_5 || (l_79 |= (safe_mul_func_uint16_t_u_u((l_89 ^= g_64[1]), (((l_77[3].f0 > 0x3AA3D5FEEC887C42LL) & 0x6803L) >= 0xE86D3611A59CB379LL))))) && g_19.f0) >= 1L) != l_77[3].f2) , p_14) <= 0UL) , 1UL) , l_78[1][0][3])) , p_14) & 1L), 0x313B5827L)), l_91));
                l_79 = g_2;
            }
            for (g_61 = 0; (g_61 <= 15); ++g_61)
            { 
                uint64_t l_96[2][5] = {{1UL,0x331CA04C897B4F3ELL,1UL,1UL,0x331CA04C897B4F3ELL},{0x331CA04C897B4F3ELL,1UL,1UL,0x331CA04C897B4F3ELL,1UL}};
                int i, j;
                g_97[2] = ((((p_14 & ((l_95 , (g_40 = g_40)) , (1L ^ 0x191EL))) && 0x83574D0EL) | p_14) == l_96[0][4]);
            }
            if (p_14)
            { 
                g_40.f0 ^= l_98[0][4];
                return p_14;
            }
            else
            { 
                uint8_t l_107 = 0UL;
                l_90 = (g_64[1] | (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((0x70590676L < (safe_mul_func_uint16_t_u_u((g_19.f5 <= ((safe_div_func_uint16_t_u_u(p_14, l_107)) > g_40.f0)), 1L))), l_95.f0)), 0x6FL)));
                if (l_98[1][0])
                    continue;
                l_110 = (l_109 = l_108);
            }
        }
        else
        { 
            int32_t l_120 = 0x6C188A16L;
            int32_t l_156 = 0L;
            if (((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(1UL, (l_120 = ((-4L) && ((safe_lshift_func_int16_t_s_u((l_119 , (-7L)), 6)) >= g_5))))), 0L)) , l_120), p_14)) & 7L))
            { 
                uint64_t l_121 = 18446744073709551615UL;
                --l_121;
            }
            else
            { 
                uint8_t l_127[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_127[i] = 0x66L;
                l_127[0] = (((safe_mul_func_int16_t_s_s(l_78[1][0][3], g_19.f2)) || (g_19.f3 > (~((0x3CA2B8C2L && 0xA939E12EL) >= p_14)))) ^ p_14);
                return g_97[2];
            }
            g_40.f0 &= (((((l_77[0] , g_33) ^ g_19.f2) < ((p_14 >= l_98[3][1]) , (-3L))) < l_120) <= p_14);
            for (g_36 = 0; (g_36 != 49); g_36 = safe_add_func_int64_t_s_s(g_36, 7))
            { 
                int32_t l_155 = 1L;
                l_156 ^= (((safe_div_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((safe_unary_minus_func_int16_t_s((safe_div_func_int16_t_s_s((0UL > (+(safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s(((((((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((g_61 != (((safe_mod_func_int8_t_s_s((8UL >= (safe_sub_func_uint32_t_u_u((p_14 == p_14), 0x1D27B0B2L))), 0xBCL)) | (-1L)) | 0xD4L)), p_14)) < 0xCAL), 0xD0L)), g_19.f4)) , 0xC8L) | 0xDFL) && l_120) | p_14) <= g_19.f4), 4L)), l_120)) != 18446744073709551612UL), 6)) , l_155), 0x7548L)))), l_155)))))), p_14)) || (-9L)) != 9UL);
            }
        }
    }
    return l_110.f1;
}



static int64_t  func_15(int8_t  p_16, uint32_t  p_17)
{ 
    uint32_t l_32 = 0x848967C7L;
    int32_t l_37 = (-4L);
    int32_t l_41 = (-1L);
    int32_t l_42 = 0x737FB643L;
    uint32_t l_65 = 0xD39A040DL;
    g_33 ^= (safe_div_func_int8_t_s_s(p_17, (safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((g_19 , (p_17 , ((((safe_add_func_uint64_t_u_u(3UL, 0x9AF2C67A95534FD3LL)) & g_2) && p_16) <= g_5))) && g_11), l_32)), 0x56L)), g_19.f4))));
    l_42 ^= (g_19.f4 | (((((p_17 == (((l_37 = (g_36 = p_17)) , ((((l_41 = (((safe_rshift_func_int16_t_s_s(((g_40 , p_16) < g_11), l_37)) > p_17) && 0x4FBF646D9140931BLL)) && 7L) ^ p_17) && 0x5E0AL)) >= (-1L))) || p_16) ^ l_32) != l_32) || 1L));
    for (g_5 = 0; (g_5 > (-15)); --g_5)
    { 
        l_37 = ((g_64[1] = (safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(l_32, l_32)), (safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(g_19.f3, (++g_61))), 18446744073709551615UL)), 3)), 4L)), (-9L))), 0x8DE77BF6B3DAD933LL))))) , 0x5CE76562L);
    }
    return l_65;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f1, "g_19.f1", print_hash_value);
    transparent_crc(g_19.f2, "g_19.f2", print_hash_value);
    transparent_crc(g_19.f3, "g_19.f3", print_hash_value);
    transparent_crc(g_19.f4, "g_19.f4", print_hash_value);
    transparent_crc(g_19.f5, "g_19.f5", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_97[i], "g_97[i]", print_hash_value);

    }
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_189[i], "g_189[i]", print_hash_value);

    }
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_275[i][j].f0, "g_275[i][j].f0", print_hash_value);
            transparent_crc(g_275[i][j].f1, "g_275[i][j].f1", print_hash_value);
            transparent_crc(g_275[i][j].f2, "g_275[i][j].f2", print_hash_value);
            transparent_crc(g_275[i][j].f3, "g_275[i][j].f3", print_hash_value);
            transparent_crc(g_275[i][j].f4, "g_275[i][j].f4", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
