// SPDX-License-Identifier: MIT
// cctest_csmith_ac47c9fa.c --- cctest case csmith_ac47c9fa (csmith seed 2890385914)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x7232214e */

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

// Options:   -s 2890385914 -o /tmp/csmith_gen_9ls_mo8b/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   int16_t  f1;
   uint64_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

union U1 {
   int64_t  f0;
   int32_t  f1;
   struct S0  f2;
};


static int32_t g_2 = (-10L);
static int32_t g_5 = 0xE814B733L;
static int32_t g_8 = 0xD952EAA2L;
static int16_t g_29 = 1L;
static uint32_t g_41 = 0x9C29AEDAL;
static uint16_t g_44 = 8UL;
static uint64_t g_68 = 0x6D7BFF020A73BC0ELL;
static union U1 g_90 = {1L};
static const struct S0 g_91 = {4UL,5L,18446744073709551607UL,-4L};
static uint64_t g_96[1][5][4] = {{{0xDB194A10B7D5E362LL,0UL,0xC2B18C892F9381BCLL,0xC2B18C892F9381BCLL},{18446744073709551611UL,18446744073709551611UL,0xDB194A10B7D5E362LL,0xC2B18C892F9381BCLL},{6UL,0UL,6UL,0xDB194A10B7D5E362LL},{6UL,0xDB194A10B7D5E362LL,0xDB194A10B7D5E362LL,6UL},{18446744073709551611UL,0xDB194A10B7D5E362LL,0xC2B18C892F9381BCLL,0xDB194A10B7D5E362LL}}};
static int32_t g_108 = 0x27E885CFL;
static int8_t g_116[3][1][1] = {{{0xC3L}},{{0xC3L}},{{0xC3L}}};
static int32_t g_118 = (-6L);
static int32_t g_121 = (-3L);
static uint64_t g_124 = 0xAF3A0D747CD2075ELL;
static uint8_t g_140 = 0x13L;
static uint64_t g_179 = 6UL;
static int16_t g_207 = (-6L);
static uint16_t g_209 = 65531UL;
static uint8_t g_217[1][1] = {{0x13L}};
static int32_t g_264 = 0x10FCCD61L;
static int64_t g_265 = 0L;
static uint32_t g_266 = 0UL;
static int16_t g_299 = 0L;
static int32_t g_308 = 0x89DD2A3BL;
static uint8_t g_316 = 0xB8L;
static int32_t g_317 = (-1L);
static uint64_t g_368 = 0UL;



static int16_t  func_1(void);
static struct S0  func_11(uint32_t  p_12, int32_t  p_13, int32_t  p_14);
static uint16_t  func_17(const uint8_t  p_18, int32_t  p_19, struct S0  p_20, int32_t  p_21, int32_t  p_22);
static int32_t  func_23(const int32_t  p_24);




static int16_t  func_1(void)
{ 
    uint64_t l_272 = 18446744073709551607UL;
    int32_t l_338[2][3];
    uint32_t l_339[1];
    uint32_t l_357[4][3][4] = {{{18446744073709551608UL,18446744073709551613UL,18446744073709551610UL,18446744073709551613UL},{18446744073709551610UL,18446744073709551613UL,18446744073709551608UL,0xEAB52121L},{18446744073709551613UL,0x16B6ADD2L,0x78EF2C2EL,18446744073709551610UL}},{{0UL,9UL,9UL,0UL},{0UL,0xEAB52121L,0x78EF2C2EL,0x5989F5D1L},{18446744073709551613UL,0UL,0x78EF2C2EL,18446744073709551613UL}},{{0xEAB52121L,0x5989F5D1L,0xEAB52121L,18446744073709551613UL},{0x78EF2C2EL,9UL,0xF7DCB865L,0x16B6ADD2L},{18446744073709551610UL,0UL,9UL,9UL}},{{18446744073709551611UL,18446744073709551611UL,9UL,0xEAB52121L},{18446744073709551610UL,18446744073709551608UL,0xF7DCB865L,0UL},{0x78EF2C2EL,0xF7DCB865L,0xEAB52121L,0xF7DCB865L}}};
    uint8_t l_361 = 0x54L;
    int32_t l_366[3][4][5] = {{{(-6L),0xA958541DL,1L,8L,0x353EE151L},{0x36C0EE88L,5L,0x583B0049L,0xCB1A8916L,(-1L)},{0x583B0049L,0xA958541DL,0xA89AF6DFL,1L,0xCB1A8916L},{1L,0xD0CA8F3BL,8L,0xFED366B6L,(-1L)}},{{0xA89AF6DFL,8L,0xFED366B6L,0xFED366B6L,8L},{0x353EE151L,0xCB1A8916L,5L,1L,0x583B0049L},{0xFD536921L,0x3E0FC458L,(-1L),0xCB1A8916L,0xFED366B6L},{7L,0xA89AF6DFL,0x34851EF8L,8L,0xFD536921L}},{{0xFD536921L,0x88DF57AAL,(-3L),0xA958541DL,8L},{0x353EE151L,0xF691D8E7L,8L,(-3L),1L},{0xA89AF6DFL,0x583B0049L,8L,0x583B0049L,0xA89AF6DFL},{1L,0x7983931CL,(-3L),(-1L),0xD0CA8F3BL}}};
    int32_t l_367 = 0x1CD5BE58L;
    int32_t l_369 = 0xD8D88AFDL;
    struct S0 l_370 = {0x1CC6AA533A6A4DE4LL,-10L,0xB6ACC92EB9C0AF9BLL,-4L};
    uint32_t l_371 = 0xE343D5BDL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_338[i][j] = 0x64E8FA73L;
    }
    for (i = 0; i < 1; i++)
        l_339[i] = 1UL;
    for (g_2 = 0; (g_2 == (-19)); g_2--)
    { 
        int32_t l_269 = 0x4E6A841CL;
        for (g_5 = 16; (g_5 <= 29); g_5 = safe_add_func_int32_t_s_s(g_5, 6))
        { 
            int32_t l_270 = 1L;
            int32_t l_271 = 0L;
            for (g_8 = (-6); (g_8 > (-13)); g_8 = safe_sub_func_int8_t_s_s(g_8, 8))
            { 
                struct S0 l_301 = {0xBC62C2766869ADC5LL,0L,0xC1D3B67BDB8DD240LL,-1L};
                l_301 = func_11(((l_270 &= (safe_sub_func_uint16_t_u_u(func_17(g_2, func_23(g_8), g_91, g_108, g_5), l_269))) && g_90.f0), l_271, l_272);
                g_317 ^= ((safe_mul_func_uint8_t_u_u((g_217[0][0] |= (g_140 >= (g_41++))), ((((g_316 ^= (((safe_lshift_func_uint8_t_u_s(((g_308 == (l_272 == (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((g_116[0][0][0] = ((safe_sub_func_uint8_t_u_u((((~l_301.f3) < g_124) , g_118), 2L)) >= 1UL)), g_91.f2)), l_269)))) || 0x3C59E35A505CC423LL), 4)) ^ g_179) , g_264)) | l_269) & 0x46L) < g_8))) & g_68);
                g_317 = (((18446744073709551615UL != ((safe_mod_func_int32_t_s_s((-3L), 0x8FBECFEEL)) != ((((!(safe_mod_func_uint64_t_u_u(g_91.f2, g_116[0][0][0]))) , l_271) | g_266) ^ (-10L)))) && g_68) & l_270);
            }
        }
        for (g_41 = 28; (g_41 == 60); g_41 = safe_add_func_uint8_t_u_u(g_41, 2))
        { 
            uint32_t l_329 = 4294967290UL;
            l_339[0] = (safe_rshift_func_int16_t_s_u((((g_116[0][0][0] = (safe_mod_func_uint64_t_u_u(l_329, ((l_269 , (l_338[0][2] = (((((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(((safe_div_func_int32_t_s_s((g_96[0][3][3] == ((((safe_div_func_uint8_t_u_u(((l_272 & g_179) == l_272), l_329)) && g_116[0][0][0]) <= l_272) <= l_269)), g_299)) || l_329), l_329)) != g_44), l_329)) && 0x371D5E848DC6E2A5LL) > g_217[0][0]) <= (-1L)) >= l_329))) | 0x3CE50976L)))) == 1L) < g_209), 4));
        }
    }
    for (g_266 = 0; (g_266 != 48); g_266++)
    { 
        l_357[0][0][2] = (safe_rshift_func_uint8_t_u_s(((l_339[0] || (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(l_339[0], g_179)) > (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(((safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((g_140 && g_96[0][1][2]) == g_8), 0L)), g_68)) >= l_339[0]))), 0UL))), g_68)), g_209))) ^ 0L), 6));
    }
    l_370 = func_11((l_369 = (3UL <= ((0x05L || (g_368 = (safe_sub_func_uint8_t_u_u((+((g_116[0][0][0] &= l_361) != ((safe_mul_func_int16_t_s_s((l_367 &= ((l_366[1][1][2] &= (safe_add_func_int32_t_s_s(((l_338[0][2] = g_90.f0) , 0xB999902EL), l_361))) & g_265)), g_217[0][0])) ^ 0x6E22L))), l_339[0])))) != (-1L)))), l_272, l_357[0][0][2]);
    return l_371;
}



static struct S0  func_11(uint32_t  p_12, int32_t  p_13, int32_t  p_14)
{ 
    int64_t l_273 = 0x691BFD6407CE13FBLL;
    uint32_t l_274[5];
    int32_t l_288 = 0x795F7FD5L;
    int32_t l_291 = 1L;
    int i;
    for (i = 0; i < 5; i++)
        l_274[i] = 0xB83B5214L;
    --l_274[3];
    for (g_118 = 0; (g_118 > 15); g_118++)
    { 
        const int64_t l_289 = (-1L);
        uint8_t l_290[5] = {8UL,8UL,8UL,8UL,8UL};
        int32_t l_300 = 0x028F88B3L;
        int i;
        l_291 = ((safe_lshift_func_uint16_t_u_u(((((safe_mod_func_int64_t_s_s(((safe_sub_func_int32_t_s_s(0xB45BE34CL, (l_288 = ((g_96[0][1][2] > (!0xACC48969L)) & ((safe_add_func_uint64_t_u_u(g_217[0][0], l_273)) >= 0x0CEAD33181A39246LL))))) & g_5), l_289)) < p_13) , 0xE28AA9EEL) || 4UL), l_289)) < l_290[1]);
        l_300 |= (safe_mod_func_uint16_t_u_u((l_290[2] & (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((g_264 <= ((~(p_12 ^ g_299)) >= p_13)), 2)) >= 4294967293UL), l_289))), g_118));
        return g_91;
    }
    return g_91;
}



static uint16_t  func_17(const uint8_t  p_18, int32_t  p_19, struct S0  p_20, int32_t  p_21, int32_t  p_22)
{ 
    int8_t l_192 = 0xDCL;
    int32_t l_260 = 0L;
    p_22 = (safe_mod_func_int64_t_s_s(((p_20.f1 != (p_20.f1 ^ ((((!0UL) | (((((safe_add_func_int16_t_s_s(l_192, l_192)) <= g_68) > 0UL) >= 0UL) == l_192)) != g_29) ^ g_121))) == l_192), g_96[0][1][2]));
    for (g_118 = 0; (g_118 >= (-9)); --g_118)
    { 
        uint16_t l_206 = 0x9C00L;
        int32_t l_218[5][4] = {{0x8D4A7C34L,(-1L),0x8D4A7C34L,(-1L)},{0x8D4A7C34L,(-1L),0x8D4A7C34L,(-1L)},{0x8D4A7C34L,(-1L),0x8D4A7C34L,(-1L)},{0x8D4A7C34L,(-1L),0x8D4A7C34L,(-1L)},{0x8D4A7C34L,(-1L),0x8D4A7C34L,(-1L)}};
        int8_t l_234 = (-1L);
        int32_t l_245 = (-1L);
        int32_t l_263 = (-1L);
        int i, j;
        if ((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(l_192, (safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((g_91.f2 || g_91.f3), (~(safe_add_func_uint32_t_u_u(l_192, l_206))))), 255UL)))), g_207)))
        { 
            int16_t l_208 = 7L;
            if (l_208)
            { 
                g_209++;
            }
            else
            { 
                int8_t l_216 = (-1L);
                p_22 |= ((safe_sub_func_uint16_t_u_u(0xCD91L, g_8)) && ((safe_mul_func_int16_t_s_s((1L == p_19), l_216)) != 0xDFECL));
                if (p_19)
                    continue;
                if (l_206)
                    continue;
            }
            g_217[0][0] |= g_29;
        }
        else
        { 
            uint16_t l_233 = 0UL;
            p_21 |= l_218[2][1];
            p_21 = (p_19 |= (safe_div_func_uint64_t_u_u((1UL <= (l_218[2][1] | (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(p_20.f0, 4)), (safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((p_20.f2 = 0x67DF84ECE7D4CFF5LL) , g_8), l_192)) > 0L), l_233)), l_234)))), p_21)))), p_18)));
        }
        if (((((safe_sub_func_int32_t_s_s(l_218[2][3], ((safe_mul_func_int8_t_s_s((g_116[0][0][0] = p_20.f0), (l_245 |= ((p_19 = g_121) >= (p_21 = (safe_add_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(((((safe_mod_func_int32_t_s_s((-7L), g_5)) || 0xDBL) >= p_20.f3) != (-7L)), 0x5B5DD2DDL)) > 65535UL), p_20.f0))))))) , g_217[0][0]))) , 0x98CDL) > l_192) && g_217[0][0]))
        { 
            uint64_t l_247 = 1UL;
            g_264 &= (g_91.f3 >= ((!(l_247 < (safe_add_func_int32_t_s_s((safe_mod_func_int64_t_s_s((l_263 = (safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((((l_245 ^= (((safe_mod_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(((p_21 &= ((g_41--) ^ l_218[3][3])) ^ 0xD0A9E498L), l_192)) && 0x94ABL) , p_20.f3), 246UL)) != 0L) && 65535UL)) | 0L) , 0x55AAA9526B4DC75BLL) , 0xEC6CL), 0x1331L)), l_206))), p_22)), l_247)))) ^ l_218[2][2]));
            if (g_108)
                continue;
        }
        else
        { 
            for (g_209 = 0; (g_209 <= 3); g_209 += 1)
            { 
                int i, j;
                l_218[g_209][g_209] &= g_265;
                g_90.f2 = g_91;
            }
        }
        --g_266;
    }
    g_118 = 0xD48C3AE2L;
    return p_20.f1;
}



static int32_t  func_23(const int32_t  p_24)
{ 
    uint32_t l_27 = 4294967291UL;
    int32_t l_39 = 7L;
    int32_t l_40 = 0x83A38C8AL;
    int32_t l_55 = 0x64F7D9FDL;
    struct S0 l_80 = {18446744073709551609UL,0x2B3AL,0x6C1E8010CA1D25F4LL,0x49FEC891L};
    int32_t l_111 = (-1L);
    int32_t l_119 = 1L;
    int32_t l_137 = 0xFD460A75L;
    if (((((9UL != ((-10L) | (g_5 , ((g_2 , l_27) < 0xBC00EADDL)))) >= p_24) != g_5) & l_27))
    { 
        int8_t l_28 = 0x51L;
        return l_28;
    }
    else
    { 
        uint32_t l_38 = 0xBAD479EAL;
        g_29 = 0xD534A2C9L;
        l_40 |= (((safe_sub_func_uint16_t_u_u((p_24 || (-1L)), (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(g_8, 2)), ((l_39 = ((((0x04L >= 2UL) >= l_38) == 0x7B332E0CL) == p_24)) >= g_8))), g_5)))) && l_27) > 8L);
    }
    --g_41;
    if (((g_8 == (((l_39 &= l_27) >= ((++g_44) || (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(0L, 5)), (safe_mul_func_int16_t_s_s((l_55 |= ((((safe_rshift_func_uint8_t_u_s(0UL, 6)) , g_2) | l_27) , 0x2D86L)), l_27)))))) || l_27)) | l_40))
    { 
        uint8_t l_60 = 1UL;
        uint64_t l_61 = 18446744073709551610UL;
        int32_t l_62 = (-8L);
        l_62 ^= (p_24 >= ((safe_mod_func_uint64_t_u_u((((65535UL != (p_24 == (p_24 == l_60))) , 6UL) ^ g_5), p_24)) , l_61));
    }
    else
    { 
        uint32_t l_63 = 0x1265A1B6L;
        struct S0 l_92 = {18446744073709551615UL,-1L,0x3599DBF4B608A7AALL,-1L};
        int32_t l_97 = 0xE4EA4785L;
        int32_t l_109 = (-1L);
        int32_t l_115 = 0x3FACB5C8L;
        int32_t l_117 = (-1L);
        int32_t l_120 = (-1L);
        uint16_t l_186 = 0x071FL;
        --l_63;
        for (g_44 = 0; (g_44 < 58); g_44++)
        { 
            uint32_t l_79 = 0x142B930EL;
            struct S0 l_81 = {0xB24C01D5BC3FA0E8LL,7L,0xC384641B43419109LL,0x83D71515L};
            union U1 l_93 = {1L};
            int32_t l_94 = 0x8EB8B4D8L;
            int32_t l_113 = 1L;
            int32_t l_114 = 0x33E78ED2L;
            int32_t l_122 = 0x06BDA4C5L;
            int32_t l_123 = 0xF7139B6CL;
            g_68 = g_44;
            if (((g_29 <= 0xAA0EL) <= (((safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(g_68, (safe_mod_func_uint32_t_u_u(p_24, 8UL)))) & 0x3142ACE07D3F149CLL), (-1L))), p_24)) , 1UL), p_24)) > l_79) != (-3L))))
            { 
                struct S0 l_82 = {18446744073709551606UL,0x3FECL,0x25EA9B86155BF9BFLL,1L};
                l_81 = l_80;
                l_82 = l_81;
                l_80 = (l_92 = (((safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((!l_82.f2) & (l_63 ^ (((((((g_90 , g_91) , 0xE4B4L) > l_80.f2) >= 0x3E184A182F7292F9LL) & 0L) || l_81.f1) , l_79))), l_39)) , p_24), p_24)) , 0L) , l_82));
            }
            else
            { 
                if (g_8)
                    break;
            }
            if (((l_94 &= (l_93 , p_24)) ^ p_24))
            { 
                int64_t l_95 = 0xBF2F772618A8B4E1LL;
                if (l_95)
                    break;
                g_96[0][1][2] = 0xE12EA524L;
            }
            else
            { 
                int32_t l_104 = 0x233F3924L;
                int32_t l_107 = (-1L);
                int32_t l_110 = 1L;
                int32_t l_112[4] = {0x716A1B7CL,0x716A1B7CL,0x716A1B7CL,0x716A1B7CL};
                int i;
                l_104 = (g_91.f1 | (l_97 > (safe_rshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s((safe_add_func_int64_t_s_s(((g_8 < (-2L)) , 0x2BE0B92564D233DBLL), l_81.f3)), l_81.f2)) || 0x73C59DB3CA632B0DLL), 4))));
                l_40 = (l_39 = (safe_mod_func_int8_t_s_s((1L & (g_41 > (-1L))), l_93.f1)));
                g_124++;
            }
        }
        if ((1L == (l_119 = (((safe_rshift_func_int16_t_s_s(g_121, p_24)) < (l_63 >= l_92.f0)) && g_41))))
        { 
            int64_t l_129 = 0xD78DB7E046D47928LL;
            int32_t l_130[3];
            uint32_t l_131[4][4];
            const struct S0 l_136[4] = {{1UL,0L,0x67A3060E7D7005AELL,0xFFEC589AL},{1UL,0L,0x67A3060E7D7005AELL,0xFFEC589AL},{1UL,0L,0x67A3060E7D7005AELL,0xFFEC589AL},{1UL,0L,0x67A3060E7D7005AELL,0xFFEC589AL}};
            uint32_t l_173[1];
            int i, j;
            for (i = 0; i < 3; i++)
                l_130[i] = 0x30ED4687L;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                    l_131[i][j] = 4294967295UL;
            }
            for (i = 0; i < 1; i++)
                l_173[i] = 0x1C1E56C3L;
            for (l_80.f0 = 0; (l_80.f0 <= 0); l_80.f0 += 1)
            { 
                g_118 &= l_129;
            }
            l_131[0][0]--;
            if (g_116[0][0][0])
            { 
                int64_t l_153 = (-1L);
                int32_t l_163 = 1L;
                l_130[2] &= (g_118 ^= (safe_rshift_func_int8_t_s_s((l_136[0] , g_96[0][2][1]), ((l_137 , 246UL) <= 1L))));
                l_92 = g_91;
                l_119 ^= (((safe_add_func_int64_t_s_s(((--g_140) <= (safe_mul_func_uint8_t_u_u(((g_118 &= ((safe_add_func_uint8_t_u_u(p_24, (safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(l_153, (l_163 = (safe_mul_func_int16_t_s_s((((p_24 >= ((safe_rshift_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s(((safe_sub_func_uint32_t_u_u(((((g_124 = (safe_div_func_uint8_t_u_u((l_111 = (g_68 != l_130[2])), l_97))) >= l_163) == 65532UL) <= p_24), g_116[0][0][0])) | p_24))) && g_124), 1)) , 0xF4D2L)) , g_5) & 0x3BL), 0UL))))), g_8)), l_153)))) || 0xFC93EDB1A9972B2CLL)) , 249UL), p_24))), g_2)) , 0xDC3AFFD7L) && g_124);
            }
            else
            { 
                uint8_t l_174[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_174[i][j] = 0UL;
                }
                g_118 = (safe_unary_minus_func_int16_t_s((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((l_130[1] = (p_24 == ((safe_rshift_func_uint8_t_u_s(p_24, (g_116[0][0][0] = (0xDA54L <= (l_136[0] , 8L))))) || 1UL))), l_173[0])), g_5)), p_24))));
                l_174[0][1]--;
            }
        }
        else
        { 
            for (g_90.f2.f3 = 1; (g_90.f2.f3 >= 6); g_90.f2.f3 = safe_add_func_int8_t_s_s(g_90.f2.f3, 3))
            { 
                g_118 &= g_91.f1;
                ++g_179;
            }
            g_118 &= ((g_5 > (l_109 <= (safe_mod_func_uint16_t_u_u((g_44 = 65535UL), (safe_add_func_uint32_t_u_u((p_24 && g_29), l_80.f0)))))) ^ l_186);
        }
    }
    return g_8;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_91.f3, "g_91.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_96[i][j][k], "g_96[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_116[i][j][k], "g_116[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_217[i][j], "g_217[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
