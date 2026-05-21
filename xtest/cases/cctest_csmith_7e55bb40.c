// SPDX-License-Identifier: MIT
// cctest_csmith_7e55bb40.c --- cctest case csmith_7e55bb40 (csmith seed 2119547712)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x29b144e6 */

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

// Options:   -s 2119547712 -o /tmp/csmith_gen_atsrutfu/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int32_t  f0;
   int64_t  f1;
   uint16_t  f2;
};
#pragma pack(pop)

union U1 {
   uint64_t  f0;
   uint8_t  f1;
   const int8_t  f2;
};

union U2 {
   struct S0  f0;
   uint16_t  f1;
   int8_t  f2;
};

union U3 {
   const int32_t  f0;
   int64_t  f1;
   int64_t  f2;
};

union U4 {
   uint64_t  f0;
   int16_t  f1;
   int16_t  f2;
   int16_t  f3;
};


static int32_t g_2 = 7L;
static uint16_t g_14 = 0x4307L;
static uint16_t g_27 = 3UL;
static uint64_t g_35 = 6UL;
static uint32_t g_61[2] = {3UL,3UL};
static int16_t g_72[1] = {0x5D26L};
static uint32_t g_74 = 1UL;
static uint32_t g_84[1][1] = {{0x25765C99L}};
static union U2 g_96 = {{-3L,0x1065C771C75621C9LL,0x8392L}};
static uint32_t g_116 = 4294967291UL;
static uint16_t g_125 = 1UL;
static int64_t g_134[1][2] = {{4L,4L}};
static uint64_t g_135 = 0x4DD2F3D6CDB74EB9LL;
static int64_t g_138 = 0xBAC331A2D7867E7CLL;
static uint32_t g_143[5] = {0x5416565EL,0x5416565EL,0x5416565EL,0x5416565EL,0x5416565EL};
static uint8_t g_146[3][3] = {{9UL,9UL,9UL},{0xD3L,0xD3L,0xD3L},{9UL,9UL,9UL}};
static int16_t g_180 = 0x2447L;
static uint16_t g_198[3] = {7UL,7UL,7UL};
static int32_t g_232[1] = {0xF7625D64L};
static uint64_t g_244 = 1UL;
static uint32_t g_253 = 0x67568F5AL;
static int32_t g_257 = (-1L);
static int64_t g_258 = (-2L);
static int32_t g_262 = 1L;
static uint32_t g_265 = 0xC6AC741EL;
static union U3 g_270 = {0x8B985607L};
static struct S0 g_283 = {0x3B00657DL,-1L,8UL};
static uint32_t g_285 = 8UL;



static int32_t  func_1(void);
static int16_t  func_7(int32_t  p_8, int32_t  p_9, int16_t  p_10, uint8_t  p_11, uint32_t  p_12);
static uint64_t  func_15(int32_t  p_16, uint32_t  p_17, uint16_t  p_18, union U4  p_19);
static int32_t  func_24(uint64_t  p_25);




static int32_t  func_1(void)
{ 
    int64_t l_13 = 6L;
    union U4 l_23 = {1UL};
    for (g_2 = (-5); (g_2 > (-17)); g_2 = safe_sub_func_int16_t_s_s(g_2, 6))
    { 
        uint8_t l_20 = 4UL;
    }
    return g_285;
}



static int16_t  func_7(int32_t  p_8, int32_t  p_9, int16_t  p_10, uint8_t  p_11, uint32_t  p_12)
{ 
    union U3 l_194 = {0x93B904D0L};
    int32_t l_236 = (-5L);
    int32_t l_256 = 0L;
    int32_t l_259 = 1L;
    int32_t l_260 = 0L;
    int32_t l_261 = 0x61E81591L;
    int32_t l_263 = 0x686125EBL;
    int32_t l_264 = 0x0621BF3EL;
    for (p_9 = 0; (p_9 >= 0); p_9 -= 1)
    { 
        union U1 l_195 = {0x25EF7775CB63E776LL};
        int32_t l_211 = 0x493250C1L;
        int32_t l_220 = 0xAE4BFFE4L;
        g_198[0] |= (l_194 , (((l_195 , ((((safe_div_func_uint8_t_u_u((((0x5720279D622751ADLL >= l_194.f0) & l_195.f1) , l_194.f0), 0x31L)) & 0x91L) > (-1L)) || 0UL)) | g_72[0]) , 0L));
        if (g_180)
            continue;
        for (g_35 = 0; (g_35 <= 0); g_35 += 1)
        { 
            uint32_t l_237 = 1UL;
            int32_t l_238 = 0x67A6C11AL;
            int32_t l_252 = 0x9C3933B6L;
            int i, j;
            if (((safe_lshift_func_uint8_t_u_u(g_84[g_35][g_35], (g_146[0][0] = g_143[2]))) , (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u((l_211 ^= (g_135 &= (safe_mul_func_int16_t_s_s(l_194.f0, (((((safe_sub_func_uint64_t_u_u(p_9, g_84[0][0])) > p_10) , p_11) , (-1L)) > p_9))))), l_194.f0)) , g_84[g_35][g_35]) | g_2), l_194.f0)), 7))))
            { 
                uint32_t l_233 = 0xC9419881L;
                l_220 ^= ((safe_div_func_uint64_t_u_u(((((g_84[0][0] != (p_10 <= ((g_146[1][0] = 0UL) ^ (p_11 = (safe_div_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((g_143[2] != 65535UL), g_72[0])), l_211)), 0x69BDD23608D486CFLL)))))) == 0x68L) | 0x26268CB1CE7FF7C5LL) <= p_12), g_125)) != 0xA6F621B4F9A3E397LL);
                l_220 = ((((safe_div_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((safe_lshift_func_int16_t_s_u(((((safe_div_func_int16_t_s_s(((1L <= ((0xCCL && g_84[g_35][g_35]) <= (((safe_sub_func_int32_t_s_s((g_232[0] = (safe_div_func_uint64_t_u_u(0x8217DE881EA7A179LL, 6L))), 1L)) | 0x76L) == l_233))) & p_8), g_35)) , p_8) | p_10) >= 0xECL), 12)))), p_11)) || l_233) != l_195.f1) ^ l_194.f0);
            }
            else
            { 
                l_238 = (safe_add_func_int64_t_s_s(((0UL >= 0UL) > (l_236 ^= g_74)), ((((l_237 |= (p_9 > 0x80F26FC9603B0C7BLL)) <= (-1L)) != 7L) && 0x405D245CL)));
            }
            if ((((g_14 || 0xB7D190524C49024BLL) & 0xEA880BC6D34CFEFFLL) < l_195.f2))
            { 
                union U4 l_243[4] = {{0xB458D05659454075LL},{0xB458D05659454075LL},{0xB458D05659454075LL},{0xB458D05659454075LL}};
                int i;
                l_220 = (((safe_rshift_func_uint16_t_u_s(p_8, 7)) != (safe_sub_func_int16_t_s_s(((l_243[2] , ((g_143[2] & (g_84[0][0] & l_195.f2)) >= g_232[0])) | l_238), 0xE9D9L))) , g_125);
                g_244--;
            }
            else
            { 
                int8_t l_251 = 0xAAL;
                l_211 = ((safe_rshift_func_uint16_t_u_u(65535UL, 1)) , (l_252 ^= ((g_125 > (l_251 = ((((l_238 ^ (g_138 = (safe_lshift_func_int8_t_s_s((((((0x9EC65FD9L | p_9) ^ 0x1F2DL) ^ p_10) & p_12) > l_195.f2), 4)))) ^ l_236) ^ p_10) <= 0x13L))) | 0UL)));
                g_253--;
            }
            p_8 = p_9;
        }
    }
    l_236 = g_146[0][1];
    --g_265;
    return g_72[0];
}



static uint64_t  func_15(int32_t  p_16, uint32_t  p_17, uint16_t  p_18, union U4  p_19)
{ 
    uint32_t l_30 = 0xF26AF903L;
    union U4 l_33 = {0UL};
    int32_t l_34 = 0xFAA9634DL;
    int32_t l_103[5];
    union U3 l_167 = {0x71A791DEL};
    int i;
    for (i = 0; i < 5; i++)
        l_103[i] = 0L;
    g_27 = func_24(g_2);
    if ((safe_mod_func_uint16_t_u_u((g_2 <= (l_30 && ((safe_mod_func_int32_t_s_s(((p_19.f0 = (g_2 < ((l_34 = (l_33 , 1L)) >= g_35))) < p_18), g_2)) != g_27))), p_17)))
    { 
        int32_t l_52 = 0xD98C6833L;
        int32_t l_70 = (-1L);
        int32_t l_73 = (-7L);
        struct S0 l_119 = {0xFBC8947EL,3L,0x16E0L};
        const union U2 l_131 = {{0xB6A99605L,0xBDBD1F82652714D0LL,1UL}};
        uint16_t l_157 = 65528UL;
        union U3 l_160 = {1L};
        if ((0x699FF93FL >= g_35))
        { 
            int64_t l_51 = 0x458230B545435D7DLL;
            uint8_t l_53 = 1UL;
            l_53 = (((((p_19 , (((safe_rshift_func_int16_t_s_s(((p_19.f2 = (~(-9L))) ^ (((((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((!(-1L)) > (safe_sub_func_int32_t_s_s((+(safe_lshift_func_uint16_t_u_u(p_16, 13))), l_51))), g_35)), 6)), p_17)) , 1UL) <= p_16) | 0x70L) != l_33.f0)), 5)) || g_2) >= l_52)) && l_52) > p_16) || p_19.f3) < 0xE934L);
        }
        else
        { 
            uint16_t l_60 = 65532UL;
            int32_t l_63 = (-7L);
            union U4 l_83 = {1UL};
            uint8_t l_105 = 0UL;
            union U2 l_122 = {{0x5FF26AE3L,0L,0x96F5L}};
            int32_t l_139 = (-2L);
            int32_t l_140 = (-3L);
            int32_t l_141[4] = {1L,1L,1L,1L};
            int i;
            if ((safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s((g_2 <= ((g_27 <= ((((((g_35 = (safe_sub_func_uint64_t_u_u(0x77C19C50ED6CA138LL, (g_61[0] = l_60)))) , l_60) > l_52) >= g_27) ^ g_27) != (-9L))) && g_27)), 0xC01CF56E035D6DF8LL)), l_60)))
            { 
                int32_t l_62 = 0x80BFD780L;
                l_63 = (l_62 >= g_2);
            }
            else
            { 
                int16_t l_71 = (-1L);
                l_34 = ((safe_mod_func_int8_t_s_s(g_35, (safe_add_func_int8_t_s_s(g_35, (safe_lshift_func_uint8_t_u_s((++g_74), (((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(0x7DCB2139L, p_19.f0)), 1)) && l_30) ^ g_35))))))) ^ 0x95AE89E6D542D3F7LL);
                g_84[0][0] = (((g_61[0] < 2UL) >= 0x44CB182417F16C3BLL) == (safe_lshift_func_int16_t_s_u((l_83 , l_33.f3), g_61[0])));
                p_16 = (safe_div_func_int16_t_s_s(((((safe_rshift_func_int8_t_s_u(9L, (safe_lshift_func_int16_t_s_s(0xEB5FL, 3)))) ^ (safe_add_func_uint64_t_u_u((!l_33.f3), (safe_sub_func_int8_t_s_s(((l_60 <= l_83.f3) >= l_33.f1), g_72[0]))))) || (-1L)) < p_16), g_84[0][0]));
            }
            for (l_30 = 0; (l_30 <= 1); l_30 += 1)
            { 
                uint32_t l_104 = 0xAEB33E74L;
                int32_t l_106 = (-1L);
                l_106 = (((g_96 , (l_105 = ((-8L) != (((safe_rshift_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((l_103[4] > p_19.f0), p_19.f2)), g_84[0][0])), p_19.f0)) && 0xE501E45AL) > l_104)))) < l_70) , (-1L));
                p_16 = ((safe_sub_func_int16_t_s_s(g_96.f0.f0, (safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(l_70, (safe_unary_minus_func_int16_t_s((safe_mod_func_uint16_t_u_u((((0x41A119B8L && (g_116 &= p_19.f1)) , g_96.f0) , 65527UL), l_106)))))), 18446744073709551609UL)))) || p_19.f2);
            }
            if ((safe_div_func_int8_t_s_s(((l_52 && (l_119 , l_119.f2)) == ((safe_lshift_func_int16_t_s_u((g_35 ^ 0x238E951F222DE5CCLL), 7)) > l_83.f3)), l_119.f2)))
            { 
                uint32_t l_130 = 18446744073709551615UL;
                int32_t l_132 = (-1L);
                p_16 = ((l_122 , (l_122.f0.f0 || (((safe_div_func_uint32_t_u_u((l_34 && 1L), 0xD98765FAL)) > 0x3631664AL) != g_2))) > (-7L));
                g_125 = p_19.f2;
                p_16 = (((-3L) & (safe_lshift_func_int8_t_s_u((l_132 = ((safe_sub_func_uint32_t_u_u((l_130 >= g_96.f2), (l_131 , g_27))) | p_19.f1)), 3))) ^ g_35);
            }
            else
            { 
                int64_t l_133 = (-1L);
                int32_t l_142 = 0x4BB2EE2BL;
                --g_135;
                g_143[3]++;
                g_146[0][0]++;
            }
        }
        if (((g_143[3] , (safe_add_func_int8_t_s_s((((g_96.f0.f1 > (safe_rshift_func_int8_t_s_u((((((l_70 = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((l_157 <= (safe_sub_func_uint32_t_u_u(p_17, p_16))) && 0x5CE2L), p_17)), 3))) != l_103[0]) , l_160) , g_134[0][1]) == g_146[0][1]), g_96.f0.f2))) | 0UL) | p_19.f1), g_143[0]))) || g_96.f0.f2))
        { 
            uint8_t l_179 = 3UL;
            p_16 = (((safe_lshift_func_int8_t_s_u((g_96.f2 |= (-5L)), 0)) > (safe_div_func_int64_t_s_s((((g_35 = ((safe_add_func_int8_t_s_s(((l_167 , ((safe_lshift_func_uint16_t_u_u((++g_125), (safe_sub_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((((((safe_lshift_func_uint16_t_u_u((255UL <= (((!(g_135 = ((p_19 , g_138) , p_19.f2))) >= p_18) >= l_157)), 8)) | 0x58L) <= g_35) , p_19.f3) < 18446744073709551612UL), (-1L))) && p_18), g_2)))) != l_33.f0)) == (-1L)), (-4L))) > 1L)) <= g_84[0][0]) || 65526UL), l_179))) ^ l_179);
        }
        else
        { 
            return p_16;
        }
        g_180 |= (l_103[4] | l_131.f0.f0);
    }
    else
    { 
        int32_t l_190 = 0xF2BCAE1EL;
        int32_t l_191 = 6L;
        int32_t l_192 = 0x3CD8D72EL;
        int32_t l_193 = (-1L);
        l_193 = (safe_mul_func_int8_t_s_s(((g_96.f2 ^= (l_192 = ((((safe_div_func_uint8_t_u_u(255UL, (~(safe_mul_func_int8_t_s_s((l_191 = (p_19.f0 && (safe_sub_func_int64_t_s_s(l_190, (-1L))))), p_19.f0))))) , 0xE41FL) <= (-9L)) , 1L))) > g_143[4]), 0x41L));
    }
    return l_30;
}



static int32_t  func_24(uint64_t  p_25)
{ 
    int16_t l_26[2][5][4] = {{{0x706BL,1L,0x3813L,1L},{1L,1L,1L,1L},{0x706BL,1L,0x3813L,1L},{1L,1L,1L,1L},{0x706BL,1L,0x3813L,1L}},{{1L,1L,1L,1L},{0x706BL,1L,0x3813L,1L},{1L,1L,1L,1L},{0x706BL,1L,0x3813L,1L},{1L,1L,1L,1L}}};
    int i, j, k;
    l_26[0][2][1] = p_25;
    return g_2;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);

    }
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_84[i][j], "g_84[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_96.f0.f0, "g_96.f0.f0", print_hash_value);
    transparent_crc(g_96.f0.f1, "g_96.f0.f1", print_hash_value);
    transparent_crc(g_96.f0.f2, "g_96.f0.f2", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_134[i][j], "g_134[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_146[i][j], "g_146[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_180, "g_180", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_198[i], "g_198[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_232[i], "g_232[i]", print_hash_value);

    }
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_270.f0, "g_270.f0", print_hash_value);
    transparent_crc(g_283.f0, "g_283.f0", print_hash_value);
    transparent_crc(g_283.f1, "g_283.f1", print_hash_value);
    transparent_crc(g_283.f2, "g_283.f2", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
