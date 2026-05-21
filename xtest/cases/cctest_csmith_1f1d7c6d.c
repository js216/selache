// SPDX-License-Identifier: MIT
// cctest_csmith_1f1d7c6d.c --- cctest case csmith_1f1d7c6d (csmith seed 522026093)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xbe83a5fd */

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

// Options:   -s 522026093 -o /tmp/csmith_gen_ngqygxwt/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int64_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   int8_t  f3;
   uint8_t  f4;
   int8_t  f5;
};
#pragma pack(pop)

union U1 {
   int32_t  f0;
};


static int8_t g_2[4] = {0L,0L,0L,0L};
static int32_t g_3[4][5][3] = {{{(-1L),0xD947597AL,(-1L)},{1L,(-1L),(-10L)},{0x1E948708L,(-1L),(-1L)},{0L,0xD947597AL,0x90D29729L},{0x8F3D4210L,0L,0L}},{{0L,(-10L),0xB16B471DL},{0x1E948708L,4L,0xB16B471DL},{1L,0xB16B471DL,0L},{(-1L),(-1L),0x90D29729L},{0xB16B471DL,0xB16B471DL,(-1L)}},{{0xD947597AL,4L,(-10L)},{0xD947597AL,(-10L),(-1L)},{0xB16B471DL,0L,4L},{(-1L),0xD947597AL,(-1L)},{(-1L),(-10L),0x90D29729L}},{{(-1L),(-10L),0xD947597AL},{0x8F3D4210L,1L,0x1E948708L},{0xB16B471DL,0x8F3D4210L,0x8F3D4210L},{0x8F3D4210L,(-10L),(-1L)},{(-1L),0L,(-1L)}}};
static uint32_t g_29 = 1UL;
static int32_t g_46 = (-8L);
static uint64_t g_51 = 0x379DE568C3B083FFLL;
static struct S0 g_61 = {0xC15C487E88E1234CLL,9UL,0x0D6A5A8EL,1L,255UL,0x14L};
static int8_t g_66 = 0x3AL;
static union U1 g_68 = {1L};
static int8_t g_77 = 1L;
static uint16_t g_123 = 65530UL;
static uint64_t g_166[3] = {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL};
static uint32_t g_169 = 0xB5C15DE7L;
static int32_t g_181[5][4][1] = {{{4L},{0xC731D9B2L},{0x821DCC64L},{0xC731D9B2L}},{{4L},{0xC731D9B2L},{0x821DCC64L},{0xC731D9B2L}},{{4L},{0xC731D9B2L},{0x821DCC64L},{0xC731D9B2L}},{{4L},{0xC731D9B2L},{0x821DCC64L},{0xC731D9B2L}},{{4L},{0xC731D9B2L},{0x821DCC64L},{0xC731D9B2L}}};
static int64_t g_182 = 0xEEAD068D1301E1D7LL;
static int8_t g_187 = 0xAEL;
static uint32_t g_189 = 0xA615A5E8L;
static int32_t g_216[3] = {0x45EFAB24L,0x45EFAB24L,0x45EFAB24L};



static int64_t  func_1(void);
static int64_t  func_4(const int16_t  p_5, uint8_t  p_6, union U1  p_7, uint16_t  p_8);
static union U1  func_11(uint32_t  p_12, int64_t  p_13, struct S0  p_14, int32_t  p_15);
static int32_t  func_18(uint8_t  p_19, int16_t  p_20, uint64_t  p_21, uint32_t  p_22, uint64_t  p_23);




static int64_t  func_1(void)
{ 
    uint64_t l_28 = 9UL;
    struct S0 l_47 = {0xDD50170A2C9EA21FLL,18446744073709551615UL,0x65DBDCDBL,0xA8L,0UL,0L};
    int32_t l_170 = 0x42C73BDDL;
    int32_t l_180 = 0x2471E60DL;
    int32_t l_210 = 0x7FD2DEE4L;
    int32_t l_211[5] = {0L,0L,0L,0L,0L};
    uint32_t l_212 = 0x016B4405L;
    int64_t l_215 = 0xDC7BAFC14AF0A9B8LL;
    int32_t l_217 = 0x1502270FL;
    int16_t l_218[1];
    uint64_t l_219 = 18446744073709551607UL;
    int i;
    for (i = 0; i < 1; i++)
        l_218[i] = 0x0D6EL;
    for (g_3[2][2][1] = 3; (g_3[2][2][1] >= 0); g_3[2][2][1] -= 1)
    { 
        const uint64_t l_9 = 0x6E5B14F4E7975358LL;
        uint64_t l_10 = 0xCC9CA3191B4956E7LL;
        int32_t l_171 = 0x183DF78FL;
        int32_t l_186 = 6L;
        int32_t l_188 = (-10L);
        l_171 = ((l_170 |= (g_169 = func_4(l_9, l_10, func_11((safe_rshift_func_uint16_t_u_u((func_18((((g_29 = (1L & ((((+(safe_unary_minus_func_int8_t_s(((((safe_div_func_int64_t_s_s((0x459F451DL != l_10), g_2[2])) & g_3[2][2][1]) , 0L) < 0x694A219909D073D4LL)))) ^ l_28) , l_28) <= 0L))) & l_10) , 1UL), l_10, l_9, g_3[3][4][2], g_3[2][3][0]) , g_2[0]), l_10)), l_28, l_47, l_47.f4), g_3[2][2][1]))) == g_61.f4);
        l_180 = (safe_mod_func_uint8_t_u_u((g_61.f4 = (safe_rshift_func_int8_t_s_u((g_61 , (g_3[2][2][1] ^ (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((g_166[0] , ((g_61.f3 && g_169) , 18446744073709551611UL)) & 0x581EB8B6C5C6358ELL), 0x00L)), 1L)))), 0))), l_9));
        if (g_166[1])
        { 
            uint32_t l_183 = 1UL;
            ++l_183;
            ++g_189;
            g_46 = (+((((safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((0x76C5E5C33B20C6C6LL > ((safe_lshift_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(l_47.f0, ((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s(g_166[1], (safe_sub_func_uint32_t_u_u(l_9, l_183)))), 2L)), l_10)) > 1L))) && 3L) , 0xD01EL), l_9)) != l_183)), g_61.f3)), g_189)) != (-1L)) < g_66) || g_2[0]));
        }
        else
        { 
            const int16_t l_209 = (-1L);
            g_46 = l_209;
        }
    }
    ++l_212;
    l_219--;
    return g_61.f2;
}



static int64_t  func_4(const int16_t  p_5, uint8_t  p_6, union U1  p_7, uint16_t  p_8)
{ 
    uint32_t l_73 = 0xC0583186L;
    int32_t l_76 = (-1L);
    int32_t l_78 = 0x23D51155L;
    int32_t l_83 = 0L;
    int32_t l_84 = (-2L);
    int8_t l_85 = 1L;
    int32_t l_106 = (-1L);
    const int8_t l_117 = 0L;
    if ((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(l_73, (((safe_mul_func_uint8_t_u_u((0UL & 0UL), (((((l_84 |= (l_83 |= (l_76 = ((++p_8) & ((safe_lshift_func_int8_t_s_s((g_3[2][2][1] > l_78), g_46)) , l_73))))) ^ g_51) > l_78) , p_8) | p_7.f0))) | g_46) != p_7.f0))), l_85)))
    { 
        int32_t l_93 = 0xBA0D3790L;
        for (l_85 = (-11); (l_85 > (-12)); l_85 = safe_sub_func_int64_t_s_s(l_85, 6))
        { 
            uint32_t l_98 = 4UL;
            struct S0 l_101 = {0x61F694DF9DF52430LL,0xB69D3DDFAC931259LL,0x1DB3DAD6L,0x03L,0x80L,0xCEL};
            g_46 = (((safe_mul_func_int8_t_s_s((1UL | (safe_lshift_func_int8_t_s_s((l_98 ^= ((l_93 = (~p_6)) >= (safe_lshift_func_int16_t_s_s(((((safe_div_func_uint64_t_u_u((p_8 > (l_84 | p_8)), (-1L))) ^ 0xA0L) || p_5) <= 1UL), 14)))), 4))), 0x2CL)) != g_66) == 0xC0B5FFC7L);
            l_106 |= ((safe_sub_func_uint64_t_u_u((l_101 , (((safe_sub_func_int8_t_s_s((((((((g_29 != l_93) >= ((safe_rshift_func_uint16_t_u_s((l_93 < 0xFDF764E3E385C008LL), p_5)) <= g_77)) , p_7.f0) | (-1L)) | 0xF9EFL) <= p_5) , 0L), g_3[2][2][1])) , g_51) || 0x6A3956958E35C639LL)), p_7.f0)) == p_6);
            for (p_8 = 0; p_8 < 4; p_8 += 1)
            {
                g_2[p_8] = 0xC0L;
            }
        }
        l_76 = (((safe_mod_func_uint16_t_u_u((++p_8), l_93)) | ((p_7.f0 != (safe_lshift_func_int16_t_s_u(((p_6 <= ((safe_rshift_func_int8_t_s_u((g_61.f5 = 0xBAL), l_78)) <= l_117)) == g_51), 15))) != (-8L))) | g_61.f0);
    }
    else
    { 
        int32_t l_122 = (-1L);
        int32_t l_124 = 0x09C7E4F7L;
lbl_127:
        for (g_68.f0 = 0; g_68.f0 < 4; g_68.f0 += 1)
        {
            g_2[g_68.f0] = (-5L);
        }
        if ((((l_83 | (((safe_rshift_func_int16_t_s_s((g_123 |= ((safe_div_func_int32_t_s_s((((g_29 || (l_122 = l_83)) , g_61.f3) > g_61.f1), p_5)) , g_3[2][2][1])), g_51)) > p_8) & g_51)) >= p_5) != l_124))
        { 
            int32_t l_128 = 1L;
            int32_t l_133 = 0x0EBA2CB8L;
            if ((safe_rshift_func_uint8_t_u_u(g_29, 2)))
            { 
                if (g_66)
                    goto lbl_127;
                return p_6;
            }
            else
            { 
                uint32_t l_143 = 0x73C17101L;
                const int32_t l_144 = 0L;
                l_122 = (0xE00AL ^ ((l_128 & (safe_sub_func_uint32_t_u_u((l_133 = (safe_mod_func_uint64_t_u_u((g_46 != 0x393513A3L), 0x3285CC4140F939D1LL))), (-4L)))) ^ g_29));
                g_46 = ((((safe_sub_func_uint64_t_u_u(((g_68.f0 | (0x3DF3L > 1L)) <= (safe_mul_func_int8_t_s_s((g_77 &= ((((safe_rshift_func_uint16_t_u_s((l_143 = ((safe_unary_minus_func_int32_t_s((((((0x6BL || g_3[3][4][2]) , 0L) & 0x77L) <= p_5) , g_61.f2))) , p_7.f0)), l_144)) || p_8) && 252UL) ^ 0x9FL)), g_66))), 1UL)) ^ 0UL) >= 0x79CAL) > 0UL);
                g_46 ^= (((safe_mod_func_uint64_t_u_u(p_8, (safe_mul_func_int16_t_s_s((((0x23L <= (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_133 = (safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(0x31147FA4L, 4L)), l_117))), 1L)), l_144))) , l_84) ^ l_143), 4UL)))) , l_143) , p_8);
            }
        }
        else
        { 
            uint32_t l_165 = 0xE28627D2L;
            for (l_83 = 9; (l_83 <= (-22)); --l_83)
            { 
                g_46 = ((safe_div_func_int64_t_s_s(p_7.f0, (safe_rshift_func_uint16_t_u_s(((((l_124 |= p_6) == 0L) != (((((((l_165 = ((l_122 = g_61.f2) & g_3[2][2][1])) == g_2[3]) | 3L) && (-5L)) , (-1L)) , l_73) < 0x365E47C5L)) < g_68.f0), g_61.f0)))) , l_124);
            }
        }
        --g_166[0];
    }
    return g_46;
}



static union U1  func_11(uint32_t  p_12, int64_t  p_13, struct S0  p_14, int32_t  p_15)
{ 
    const int8_t l_63 = 0L;
    for (g_46 = (-7); (g_46 != (-9)); --g_46)
    { 
        uint32_t l_50 = 0xCB15E7CEL;
        for (p_12 = 0; (p_12 <= 3); p_12 += 1)
        { 
            int16_t l_65 = 0xEAFEL;
            int32_t l_67[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_67[i][j] = 0x55804E03L;
            }
            if ((p_14.f1 == l_50))
            { 
                g_51 = p_14.f5;
            }
            else
            { 
                const uint32_t l_62[2] = {3UL,3UL};
                int32_t l_64 = 3L;
                int i;
                g_66 = (((safe_lshift_func_int8_t_s_u(((g_51 = ((safe_sub_func_int16_t_s_s(((l_64 = (l_50 != (g_2[p_12] = (safe_lshift_func_uint16_t_u_u((0xEEL && (!(safe_mod_func_int32_t_s_s((g_61 , (g_61 , l_62[0])), l_63)))), p_14.f2))))) > l_65), 0UL)) >= p_14.f1)) && p_12), p_13)) <= 0xDC03L) > 1L);
                if (g_66)
                    break;
                if (g_2[p_12])
                    continue;
            }
            if (g_61.f0)
                continue;
            l_67[2][0] = g_66;
        }
    }
    g_46 &= 7L;
    return g_68;
}



static int32_t  func_18(uint8_t  p_19, int16_t  p_20, uint64_t  p_21, uint32_t  p_22, uint64_t  p_23)
{ 
    const uint16_t l_32 = 0xF5E1L;
    for (p_23 = 15; (p_23 >= 14); --p_23)
    { 
        uint16_t l_33 = 0x57A8L;
        l_33 = l_32;
        g_46 = ((safe_rshift_func_int8_t_s_u((g_2[3] = (((0xC910760B96BC97DELL ^ ((safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(g_29, ((((safe_sub_func_int64_t_s_s(p_23, (safe_mul_func_int16_t_s_s(((0x8EL ^ 0x30L) || p_22), (-7L))))) , g_2[2]) ^ (-1L)) <= l_33))), p_19)), 2)) == 0L)) == 0L) <= l_33)), p_22)) | 0x6ABDL);
    }
    return g_2[0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_61.f2, "g_61.f2", print_hash_value);
    transparent_crc(g_61.f3, "g_61.f3", print_hash_value);
    transparent_crc(g_61.f4, "g_61.f4", print_hash_value);
    transparent_crc(g_61.f5, "g_61.f5", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);

    }
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_181[i][j][k], "g_181[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_216[i], "g_216[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
