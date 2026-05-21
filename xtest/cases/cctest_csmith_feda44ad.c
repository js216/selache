// SPDX-License-Identifier: MIT
// cctest_csmith_feda44ad.c --- cctest case csmith_feda44ad (csmith seed 4275717293)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x838be2dc */

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

// Options:   -s 4275717293 -o /tmp/csmith_gen_rp52es7_/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint32_t  f0;
   const int32_t  f1;
};

struct S1 {
   uint64_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint8_t  f0;
};
#pragma pack(pop)

union U3 {
   uint64_t  f0;
};


static int16_t g_2[1] = {0xE77DL};
static int16_t g_14[4][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
static int8_t g_15 = (-1L);
static int64_t g_16 = (-7L);
static uint32_t g_17 = 0x6E6C8CACL;
static int16_t g_23 = 0xA1EFL;
static uint32_t g_25 = 1UL;
static int64_t g_30 = 5L;
static struct S2 g_35 = {0xE6L};
static uint32_t g_56 = 0x2E6BA999L;
static uint32_t g_57 = 0xD0E131A3L;
static struct S1 g_104 = {0x224A3AAF95405D21LL};
static int8_t g_109 = 0xF5L;
static uint64_t g_122[5][5] = {{0x0B5FFC7B43BFD272LL,0x0B5FFC7B43BFD272LL,0x806A2966C64A2822LL,0x551B120E24C2F892LL,0x806A2966C64A2822LL},{18446744073709551613UL,18446744073709551613UL,0xF9D668DAB47FCA77LL,1UL,0xF9D668DAB47FCA77LL},{0x0B5FFC7B43BFD272LL,0x0B5FFC7B43BFD272LL,0x806A2966C64A2822LL,0x551B120E24C2F892LL,0x806A2966C64A2822LL},{18446744073709551613UL,18446744073709551613UL,0xF9D668DAB47FCA77LL,1UL,0xF9D668DAB47FCA77LL},{0x0B5FFC7B43BFD272LL,0x0B5FFC7B43BFD272LL,0x806A2966C64A2822LL,0x551B120E24C2F892LL,0x806A2966C64A2822LL}};
static int8_t g_140 = 1L;
static uint16_t g_142[5] = {0x7C2DL,0x7C2DL,0x7C2DL,0x7C2DL,0x7C2DL};
static uint64_t g_149 = 0x9A6180E031660C04LL;
static uint16_t g_150 = 4UL;
static uint32_t g_151 = 0x123E8B2BL;
static uint64_t g_167 = 18446744073709551607UL;
static uint32_t g_172 = 0xC140705BL;
static struct S0 g_175 = {0xAC231147L,0xA4D0A6DBL};
static int64_t g_196 = 0x77700A42C73BDD41LL;
static uint32_t g_203 = 0xEC332B00L;
static uint16_t g_204 = 65530UL;
static uint64_t g_222 = 0x5E5C33B20C6C6CD6LL;
static uint32_t g_223 = 0xEE7164AAL;
static int8_t g_244 = 0xCFL;
static uint16_t g_245[4] = {0x5F7EL,0x5F7EL,0x5F7EL,0x5F7EL};
static uint32_t g_278 = 0x45213202L;
static uint64_t g_279 = 0xB08245ED7D17CDE6LL;
static uint32_t g_295 = 1UL;
static uint8_t g_309[2] = {0UL,0UL};



static uint32_t  func_1(void);
static struct S1  func_28(int32_t  p_29);
static struct S1  func_31(struct S2  p_32, uint32_t  p_33, int16_t  p_34);
static uint32_t  func_36(int8_t  p_37);




static uint32_t  func_1(void)
{ 
    int32_t l_3 = (-10L);
    int32_t l_165 = 0x26A71AB2L;
    int16_t l_174 = 0xBC76L;
    union U3 l_184 = {0xAFA75C3078386D6ALL};
    int16_t l_213 = 0xCF07L;
    uint32_t l_230 = 4294967295UL;
    uint64_t l_236 = 1UL;
    struct S2 l_249 = {252UL};
    struct S0 l_253 = {1UL,-9L};
    uint16_t l_305 = 65535UL;
    uint16_t l_317 = 0x7A97L;
    int32_t l_322 = 2L;
lbl_323:
    if ((g_2[0] ^ l_3))
    { 
        int32_t l_9[3];
        int32_t l_10[3][5] = {{0xFE57F6CCL,5L,0xFE57F6CCL,5L,0xFE57F6CCL},{0x1AF7F3E7L,0x1AF7F3E7L,0x1AF7F3E7L,0x1AF7F3E7L,0x1AF7F3E7L},{0xFE57F6CCL,5L,0xFE57F6CCL,5L,0xFE57F6CCL}};
        int8_t l_11 = 0L;
        uint32_t l_166[2];
        int i, j;
        for (i = 0; i < 3; i++)
            l_9[i] = 9L;
        for (i = 0; i < 2; i++)
            l_166[i] = 4294967291UL;
        if ((safe_sub_func_uint64_t_u_u(0x210E164CAF14C90DLL, ((!(((l_10[0][3] = (safe_add_func_int64_t_s_s((l_3 , (g_2[0] , (l_9[1] ^= l_3))), g_2[0]))) >= l_11) == 0x0031L)) > 0x08ECB302AFF63588LL))))
        { 
            int16_t l_24 = 8L;
            for (l_3 = 0; l_3 < 3; l_3 += 1)
            {
                l_9[l_3] = (-6L);
            }
            for (l_3 = 17; (l_3 == (-14)); --l_3)
            { 
                int32_t l_20[1][1][5] = {{{0xA54E5878L,0xA54E5878L,0xA54E5878L,0xA54E5878L,0xA54E5878L}}};
                int i, j, k;
                g_17++;
                return l_20[0][0][1];
            }
            if (((1L >= 0x09A488D5L) , ((safe_add_func_int64_t_s_s((((--g_25) > (func_28((1L >= 0xC1L)) , 1L)) == l_3), 0x20EB5B7D993E846ALL)) == 0xDD17L)))
            { 
                uint32_t l_134 = 0x958E35C6L;
                struct S0 l_135 = {1UL,0x6A8F31C0L};
                int32_t l_141 = 1L;
                l_134 &= ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((g_56 && ((g_17 |= g_2[0]) , ((safe_mul_func_uint16_t_u_u(g_2[0], ((safe_rshift_func_int16_t_s_s(0xF9EFL, l_24)) & g_109))) | l_10[0][3]))), g_16)), g_2[0])) >= g_122[3][0]);
                g_149 = (l_135 , ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(65530UL, (g_142[4]++))), (((safe_mod_func_uint8_t_u_u(((0xBFL >= ((safe_div_func_int32_t_s_s(l_141, l_3)) > g_109)) != l_10[0][2]), g_122[3][2])) & g_104.f0) >= g_2[0]))) > g_16));
            }
            else
            { 
                g_150 = (4294967295UL > l_3);
                g_151 &= g_122[3][2];
                l_10[0][3] = (l_9[1] != (g_2[0] > (((((safe_mod_func_int8_t_s_s((g_15 = ((g_142[4] = (~l_24)) || g_104.f0)), 0xB3L)) < g_56) && l_9[1]) <= l_10[0][3]) , (-1L))));
            }
        }
        else
        { 
            g_167 = (safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((0x3513A33BA3285CC4LL < (g_56 && g_16)), (g_2[0] |= (safe_div_func_int8_t_s_s((g_15 = (4294967295UL < 1UL)), 0x43L))))), l_3)), l_165)) , l_166[1]), g_16));
        }
        return g_122[2][1];
    }
    else
    { 
        int8_t l_173 = 8L;
        l_173 = (safe_div_func_uint64_t_u_u(((((2UL >= (-10L)) >= g_109) != (g_140 |= (((safe_mod_func_int32_t_s_s((g_172 |= 0x177F500FL), g_15)) >= l_165) || g_14[0][1]))) & g_14[1][0]), l_3));
    }
    if ((l_3 |= ((g_142[4] = (((((l_174 >= (l_165 , l_165)) , l_165) || 0x11E2AE1708793E18LL) , 0x02B6L) >= 0xD733L)) < g_2[0])))
    { 
        uint16_t l_193 = 0x409BL;
        int32_t l_195 = 0xAE72B269L;
        int32_t l_221[1];
        int i;
        for (i = 0; i < 1; i++)
            l_221[i] = 0x3FB5D410L;
lbl_237:
        for (l_3 = 1; (l_3 <= 4); l_3 += 1)
        { 
            uint64_t l_194 = 0x8CDC9599D76A8CF6LL;
            int i;
            if (g_142[l_3])
            { 
                int32_t l_176[5][3][1] = {{{0x27764F56L},{1L},{0x27764F56L}},{{1L},{0x27764F56L},{1L}},{{0x27764F56L},{1L},{0x27764F56L}},{{1L},{0x27764F56L},{1L}},{{0x27764F56L},{1L},{0x27764F56L}}};
                int32_t l_177 = 0xFFEE22BCL;
                int i, j, k;
                l_177 |= (g_175 , (l_176[4][0][0] |= g_142[l_3]));
                g_196 = (safe_rshift_func_uint16_t_u_s((l_195 |= (safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((l_184 , ((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((g_35.f0 = g_142[l_3]), (g_142[l_3] , g_167))), 0xF61FBC89F62BFE55LL)) && g_104.f0), 1UL)), g_56)) , g_14[0][1])), 1UL)) < l_193), l_194))), l_193));
                g_203 ^= (((g_30 = (safe_div_func_uint16_t_u_u(0xDF44L, (((l_195 , ((safe_add_func_int64_t_s_s((g_16 = ((safe_lshift_func_int16_t_s_u(g_104.f0, 6)) > g_149)), g_104.f0)) != g_56)) , 0xA2DDL) , g_56)))) | g_151) > (-1L));
            }
            else
            { 
                int64_t l_220[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_220[i] = 0xE7AAED5F3CC42DB4LL;
                g_204 = g_175.f0;
                g_222 = (safe_div_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((l_165 = (safe_add_func_int16_t_s_s(((g_172 = ((safe_mul_func_int8_t_s_s((l_195 , l_213), (g_15 & (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((l_220[0] |= ((safe_sub_func_uint8_t_u_u(0UL, g_142[3])) <= g_14[0][1])), 9L)), l_221[0]))))) == (-10L))) ^ g_142[l_3]), g_150))), 3)) >= g_142[l_3]), (-7L)));
                g_223 = 1L;
            }
        }
        l_236 = ((((safe_lshift_func_uint8_t_u_s(0xD2L, (safe_mul_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((l_230 = g_196), (g_25 , (+(safe_lshift_func_int16_t_s_s(((((safe_mod_func_uint32_t_u_u((g_2[0] || g_142[4]), l_193)) , 0xAD52L) < l_193) > l_174), 6)))))) != l_213), l_193)))) != l_221[0]) , 1L) < 0x3DL);
        if (l_193)
            goto lbl_237;
    }
    else
    { 
        union U3 l_240 = {18446744073709551611UL};
        struct S2 l_248 = {247UL};
        int32_t l_257 = 0L;
        uint8_t l_306 = 251UL;
        int32_t l_308[5][2][1];
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_308[i][j][k] = 0x006AEBFFL;
            }
        }
        for (g_196 = 1; (g_196 >= 0); g_196 -= 1)
        { 
            union U3 l_241 = {18446744073709551615UL};
            struct S2 l_250 = {1UL};
            if ((g_244 &= ((((safe_add_func_uint32_t_u_u((l_240 , ((l_241 , (l_241 , (safe_add_func_uint32_t_u_u(l_241.f0, g_104.f0)))) || l_241.f0)), 0x5DEC7746L)) < 0xC4725C5BL) <= g_17) | 0xECL)))
            { 
                g_245[1]++;
            }
            else
            { 
                l_249 = l_248;
                return l_240.f0;
            }
            l_250 = l_248;
            for (g_151 = 0; (g_151 <= 1); g_151 += 1)
            { 
                return g_14[0][1];
            }
        }
        if (((safe_div_func_uint8_t_u_u(g_25, 0x16L)) , (l_236 > ((l_253 , g_35.f0) ^ 5L))))
        { 
            struct S2 l_256 = {1UL};
            int32_t l_277 = 7L;
            uint64_t l_307 = 0x8293AB69775CC268LL;
            if ((l_3 |= ((safe_div_func_uint64_t_u_u((l_256 , (g_14[1][0] && (g_140 & ((((l_257 = (g_104.f0 >= g_151)) > g_222) < 0x23CB69B9L) ^ 0x2E78L)))), 0x2332C2AF841971EBLL)) , l_256.f0)))
            { 
                int16_t l_268[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_268[i] = 0x97E3L;
                g_279 = ((safe_sub_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((g_35.f0 = (safe_lshift_func_int16_t_s_u((((safe_mod_func_uint32_t_u_u(l_268[2], (safe_lshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_245[3], (safe_mul_func_int16_t_s_s(((g_196 > l_268[2]) != l_268[2]), 7L)))), g_25)) | l_3) ^ g_203), l_257)))) != l_277) & g_278), 14))), l_3)), 0x6245C753L)), 18446744073709551615UL)) != g_150);
            }
            else
            { 
                union U3 l_300[5] = {{18446744073709551610UL},{18446744073709551610UL},{18446744073709551610UL},{18446744073709551610UL},{18446744073709551610UL}};
                int32_t l_310 = 1L;
                int i;
                g_295 ^= (((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((l_256 , ((~(l_248.f0 ^ (safe_add_func_int16_t_s_s((g_14[0][1] &= 0L), (safe_rshift_func_int8_t_s_u((g_244 = (((safe_lshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((g_196 &= ((safe_add_func_uint32_t_u_u(0xE3036B4EL, (-7L))) <= g_149)), g_151)), g_245[1])) < l_3) | l_277)), g_151)))))) > l_277)) , l_240.f0), 0x894E24BCL)), 0)) >= l_213) && l_3);
                g_309[0] &= ((((((g_222 == (safe_rshift_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u((l_300[3] , 1UL), (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_305, l_306)), 1UL)))) == l_307) , 0L) && l_306), g_14[3][1]))) != l_236) == l_256.f0) > 0x7809L) && 3UL) != l_308[3][1][0]);
                l_310 |= 0x172F4E08L;
            }
        }
        else
        { 
            for (l_305 = 0; (l_305 != 30); l_305++)
            { 
                uint8_t l_320 = 5UL;
                struct S2 l_321 = {255UL};
                l_320 = (g_175.f1 <= (((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((-1L), (l_317 < (safe_div_func_uint8_t_u_u((g_244 , 0x79L), g_279))))) < g_172), g_175.f0)) , g_149) | (-8L)));
                g_104 = (l_321 , func_31(l_249, l_321.f0, (l_322 & l_253.f1)));
            }
            if (g_23)
                goto lbl_323;
            for (l_305 = 0; (l_305 > 3); ++l_305)
            { 
                uint32_t l_334 = 0x801FAD3CL;
                struct S2 l_335 = {2UL};
                g_35 = ((safe_div_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(g_109, (l_257 = (safe_mod_func_int32_t_s_s(3L, g_175.f1))))) < ((safe_lshift_func_int8_t_s_u(l_240.f0, 1)) > l_174)), l_334)) , l_335);
                if (g_223)
                    break;
            }
        }
        l_257 = (l_253 , ((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((0xFEB27B65L || l_249.f0) || (0x4715L | l_165)), g_167)), g_104.f0)) == 0x66L));
    }
    return g_309[0];
}



static struct S1  func_28(int32_t  p_29)
{ 
    int32_t l_44 = 0x9E0CD1ADL;
    int32_t l_45 = 0x10760B96L;
    int32_t l_46 = 0L;
    struct S1 l_125 = {0x80B88CC77C05DAD8LL};
    g_30 &= 0xACB2D505L;
    l_125 = func_31(g_35, func_36((safe_rshift_func_int16_t_s_s(p_29, ((safe_lshift_func_int16_t_s_u((((l_45 &= (p_29 < (safe_mul_func_int8_t_s_s(g_30, l_44)))) == p_29) , l_46), p_29)) == l_46)))), p_29);
    return l_125;
}



static struct S1  func_31(struct S2  p_32, uint32_t  p_33, int16_t  p_34)
{ 
    uint64_t l_89[5];
    uint32_t l_103 = 0xE253A7B5L;
    int32_t l_110 = 0xBC9E7330L;
    int32_t l_123[3];
    struct S1 l_124 = {1UL};
    int i;
    for (i = 0; i < 5; i++)
        l_89[i] = 18446744073709551613UL;
    for (i = 0; i < 3; i++)
        l_123[i] = 0x931259C1L;
    for (g_16 = 20; (g_16 != 21); g_16++)
    { 
        int16_t l_91 = 0x3398L;
        for (p_34 = 0; (p_34 <= 3); ++p_34)
        { 
            int16_t l_68 = (-9L);
            for (g_15 = 0; (g_15 != 0); g_15 = safe_add_func_int32_t_s_s(g_15, 8))
            { 
                uint16_t l_90 = 0x1E6DL;
                g_57 &= (g_56 = (safe_rshift_func_int16_t_s_s(g_14[0][1], 6)));
                l_91 ^= (safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s(l_68, (l_90 = (safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(g_35.f0, (1L | ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(((g_15 | g_23) ^ p_32.f0), 0x98D6L)) > 0x30L), g_57)), p_34)) && l_68) > p_33), 14)), l_89[2])), 5)), 0xDDF4L)), 3)) >= p_32.f0)))), 0xBAF68603386B4760LL))))), l_89[4])), g_14[1][0])), 0x04L)), l_89[1]));
                if (l_68)
                    continue;
            }
            for (p_33 = 0; (p_33 >= 23); p_33 = safe_add_func_int8_t_s_s(p_33, 1))
            { 
                int32_t l_98 = 0x6AD51589L;
                l_98 = ((g_17 , ((((safe_sub_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u((l_98 & ((safe_div_func_int32_t_s_s(0L, (safe_lshift_func_int16_t_s_s(0x72D3L, 14)))) == 0xE2L)), 0xDFL)) == 0xBB4FL) & l_91), g_57)) < 0xED293A85175EF58ELL) > 0xF663L) ^ l_103)) != 0x9C31L);
                return g_104;
            }
        }
        if (l_91)
            break;
        g_109 = ((((g_57 || 7UL) , (safe_rshift_func_uint8_t_u_s((((((safe_add_func_uint32_t_u_u(((g_57 , (g_14[2][1] , g_104.f0)) == 0UL), (-1L))) == 0x51155E33L) == l_91) , 0x33L) & 0UL), g_104.f0))) == 0xAC79L) == l_91);
    }
    l_110 &= l_89[2];
    l_123[1] = ((safe_sub_func_int8_t_s_s(p_32.f0, ((g_57 = ((((safe_mul_func_int16_t_s_s(g_35.f0, (!(g_122[3][2] = (safe_mul_func_int16_t_s_s(0x4919L, (l_110 = (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_110, p_32.f0)), l_110))))))))) | g_56) == p_33) ^ p_33)) <= g_14[0][1]))) , 0L);
    return l_124;
}



static uint32_t  func_36(int8_t  p_37)
{ 
    uint16_t l_47 = 0x0438L;
    return l_47;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_14[i][j], "g_14[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_122[i][j], "g_122[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_142[i], "g_142[i]", print_hash_value);

    }
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_175.f0, "g_175.f0", print_hash_value);
    transparent_crc(g_175.f1, "g_175.f1", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_245[i], "g_245[i]", print_hash_value);

    }
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_309[i], "g_309[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
