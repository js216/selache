// SPDX-License-Identifier: MIT
// cctest_csmith_42a4a394.c --- cctest case csmith_42a4a394 (csmith seed 1118086036)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf4f60ddb */

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

// Options:   -s 1118086036 -o /tmp/csmith_gen_ypo9g76k/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint8_t  f0;
   const int32_t  f1;
   const uint16_t  f2;
};
#pragma pack(pop)

union U1 {
   int64_t  f0;
   const int32_t  f1;
   const uint32_t  f2;
   uint32_t  f3;
};

union U2 {
   const uint16_t  f0;
   uint32_t  f1;
   const uint8_t  f2;
   int8_t * f3;
   uint32_t  f4;
};

union U3 {
   int32_t  f0;
   int8_t  f1;
   struct S0  f2;
   struct S0  f3;
   struct S0  f4;
};

union U4 {
   struct S0  f0;
};

union U5 {
   uint16_t  f0;
};

union U6 {
   int8_t * const  f0;
   const int8_t * f1;
   int16_t  f2;
   int64_t  f3;
   uint64_t  f4;
};


static int32_t g_2 = 0x963AB194L;
static int8_t g_6 = (-5L);
static struct S0 g_30 = {5UL,-4L,0x4FA7L};
static struct S0 *g_29 = &g_30;
static struct S0 g_32 = {2UL,-1L,0x4A3AL};
static int32_t g_34 = 0x1C8D535DL;
static uint32_t g_35 = 0xF0790389L;
static int8_t g_54 = 0x4AL;
static const int8_t *g_53 = &g_54;
static uint8_t g_56 = 0x4DL;
static uint16_t g_58 = 65531UL;
static int32_t g_59[1][3][2] = {{{1L,0x8E2DC660L},{0x8E2DC660L,1L},{0x8E2DC660L,0x8E2DC660L}}};
static uint8_t g_60[7][5] = {{0xA5L,0xA5L,0xE0L,0x17L,6UL},{0x45L,255UL,0UL,255UL,0x45L},{6UL,0x17L,0xE0L,0xA5L,0xA5L},{247UL,255UL,247UL,0xE9L,247UL},{6UL,0xA5L,0x17L,0x17L,0xA5L},{0x45L,0xE9L,0UL,0xE9L,0x45L},{0xA5L,0x17L,0x17L,0xA5L,6UL}};
static union U5 g_61 = {0x345DL};
static int32_t g_109 = 0L;
static union U3 g_119 = {-1L};
static union U2 g_125 = {0x6A75L};
static union U3 g_132 = {8L};
static union U3 *g_131 = &g_132;
static uint64_t g_144 = 0x3FB8AFD391C6798BLL;
static uint64_t g_152 = 1UL;
static uint16_t * const g_165[1] = {&g_58};
static uint16_t * const *g_164[5][3][2] = {{{&g_165[0],&g_165[0]},{&g_165[0],&g_165[0]},{&g_165[0],&g_165[0]}},{{&g_165[0],&g_165[0]},{&g_165[0],&g_165[0]},{&g_165[0],&g_165[0]}},{{&g_165[0],&g_165[0]},{&g_165[0],&g_165[0]},{&g_165[0],&g_165[0]}},{{&g_165[0],&g_165[0]},{&g_165[0],&g_165[0]},{&g_165[0],&g_165[0]}},{{&g_165[0],&g_165[0]},{&g_165[0],&g_165[0]},{&g_165[0],&g_165[0]}}};
static uint16_t g_169[1] = {1UL};
static int32_t g_184 = 1L;
static union U1 g_195 = {0xA5BFF3A3253BE1FALL};
static int16_t g_231[3] = {0xB961L,0xB961L,0xB961L};
static int16_t *g_230[6] = {&g_231[2],&g_231[2],&g_231[2],&g_231[2],&g_231[2],&g_231[2]};
static const uint8_t *g_279 = &g_32.f0;
static const uint8_t **g_278 = &g_279;
static uint8_t *g_281 = &g_60[6][1];
static uint8_t **g_280 = &g_281;
static union U6 g_286 = {0};
static union U6 g_290 = {0};
static union U6 *g_289[2][6] = {{&g_286,&g_290,&g_290,&g_286,&g_290,&g_286},{&g_286,&g_290,&g_286,&g_290,&g_290,&g_286}};
static uint16_t g_328 = 0xAC69L;
static const int32_t *g_335 = &g_2;
static const int32_t **g_334 = &g_335;
static int32_t *g_390 = &g_34;
static int32_t **g_389 = &g_390;
static int32_t ***g_388[1][3][7] = {{{&g_389,&g_389,&g_389,&g_389,&g_389,&g_389,&g_389},{&g_389,&g_389,&g_389,&g_389,&g_389,&g_389,&g_389},{&g_389,&g_389,&g_389,&g_389,&g_389,&g_389,&g_389}}};
static int8_t *g_411 = &g_119.f1;
static int8_t **g_410 = &g_411;
static union U4 g_441[7] = {{{1UL,0x5D8B22D2L,0xC22DL}},{{1UL,0x5D8B22D2L,0xC22DL}},{{1UL,0x5D8B22D2L,0xC22DL}},{{1UL,0x5D8B22D2L,0xC22DL}},{{1UL,0x5D8B22D2L,0xC22DL}},{{1UL,0x5D8B22D2L,0xC22DL}},{{1UL,0x5D8B22D2L,0xC22DL}}};
static uint32_t g_463 = 18446744073709551615UL;
static union U2 g_485 = {0UL};
static int16_t * const *g_487 = &g_230[2];
static int16_t * const **g_486 = &g_487;
static const struct S0 g_521 = {255UL,-1L,5UL};
static const struct S0 g_525 = {0x79L,0x69E9CFA0L,65528UL};
static union U2 g_532 = {0x128EL};
static int64_t g_559 = 0x6963831D3481FED4LL;
static union U1 *g_570 = &g_195;
static union U1 **g_569 = &g_570;
static const union U1 *g_572 = &g_195;
static const union U1 **g_571 = &g_572;
static struct S0 **g_634 = &g_29;
static uint32_t g_669 = 0x26921811L;
static uint16_t **g_700 = (void*)0;
static int8_t ***g_740[4][5] = {{&g_410,&g_410,&g_410,&g_410,&g_410},{&g_410,&g_410,&g_410,&g_410,&g_410},{&g_410,&g_410,&g_410,&g_410,&g_410},{&g_410,&g_410,&g_410,&g_410,&g_410}};
static const int8_t g_764 = 0x34L;
static uint16_t g_834 = 65535UL;
static union U4 g_929[5] = {{{0UL,-1L,0xACB9L}},{{0UL,-1L,0xACB9L}},{{0UL,-1L,0xACB9L}},{{0UL,-1L,0xACB9L}},{{0UL,-1L,0xACB9L}}};
static int16_t *****g_930 = (void*)0;
static uint8_t g_972[7][7][5] = {{{0xD8L,0UL,8UL,252UL,0x32L},{0xEDL,0x49L,0x49L,0xEDL,0x7FL},{252UL,0xB8L,0xF4L,0UL,0UL},{0x10L,0UL,0x4EL,0x7FL,0x0FL},{0UL,0xBEL,1UL,0UL,0UL},{0x62L,8UL,251UL,0xEDL,0UL},{0x8AL,250UL,0UL,252UL,0UL}},{{0xF1L,0UL,0x25L,255UL,0xB9L},{1UL,0x55L,0xF4L,0x63L,0x23L},{0x25L,0x62L,0UL,0xB9L,8UL},{1UL,0xBEL,0x9EL,1UL,0xD9L},{0xF1L,0xEDL,253UL,0x62L,0x62L},{0x8AL,0UL,0x8AL,0xE7L,1UL},{0x62L,0x49L,0x7FL,8UL,0xB9L}},{{0UL,249UL,1UL,0xB8L,9UL},{0x10L,255UL,0x7FL,0xB9L,255UL},{252UL,251UL,0x8AL,250UL,0UL},{0xEDL,0UL,253UL,0UL,0xEDL},{9UL,0xABL,1UL,0x73L,0UL},{0UL,1UL,253UL,0UL,0x48L},{1UL,0xBEL,0UL,0xABL,0UL}},{{0x2FL,0UL,0x4CL,0x48L,0UL},{0UL,0x93L,0x83L,0x7BL,0x83L},{0x4EL,0x4EL,0x62L,0x49L,0x7FL},{0x0DL,252UL,255UL,0x73L,0UL},{0xEAL,253UL,0x6EL,0xB9L,0x01L},{255UL,252UL,0UL,0xE7L,8UL},{0x4CL,0x4EL,1UL,0x01L,0x25L}},{{0x9EL,0x93L,0x90L,0xAAL,7UL},{0x7FL,0UL,8UL,0x4EL,0x10L},{0x0DL,0xBEL,0xEDL,255UL,255UL},{0x10L,1UL,5UL,0x4EL,0x01L},{0xD8L,0xABL,0x32L,0xAAL,1UL},{0x2FL,0xEAL,0x01L,0x01L,0xEAL},{0UL,0x63L,9UL,0xE7L,0x83L}},{{0x49L,0x7FL,8UL,0xB9L,0UL},{9UL,0x7BL,0xF4L,0x73L,0x8AL},{0x49L,1UL,251UL,0x49L,0x48L},{0UL,0xAAL,0UL,0x7BL,0xD8L},{0x2FL,0UL,0x2FL,0x48L,0x49L},{0xD8L,0x93L,7UL,0xABL,0x83L},{0x10L,0x25L,0x62L,0UL,0xB9L}},{{0x0DL,0xE7L,7UL,0x73L,0xD9L},{0x7FL,253UL,0x2FL,0xEAL,0x01L},{0x9EL,0UL,0UL,0UL,0x9EL},{0x4CL,0x10L,251UL,0x01L,0x4EL},{255UL,0x93L,0xF4L,251UL,7UL},{0xEAL,0x49L,8UL,0x10L,0x4EL},{0x0DL,251UL,9UL,255UL,0x9EL}}};
static union U5 *g_1045 = (void*)0;
static union U5 **g_1044 = &g_1045;
static union U3 g_1064 = {0x89903E24L};
static union U2 *g_1144[5][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
static union U4 g_1162 = {{0xADL,0x1C20F460L,65531UL}};
static int32_t ****g_1211 = &g_388[0][1][5];
static int32_t *****g_1210 = &g_1211;
static int32_t g_1238 = 0x3D86118CL;
static int32_t g_1278[4] = {0L,0L,0L,0L};
static union U4 * const g_1342 = &g_929[4];
static union U4 * const *g_1341 = &g_1342;
static union U2 **g_1360 = &g_1144[4][0];
static union U4 g_1373 = {{249UL,-5L,0x5F52L}};
static int8_t g_1419 = 0xFFL;
static int8_t *g_1418 = &g_1419;
static int8_t ****g_1485 = &g_740[0][4];
static int8_t *****g_1484[3] = {&g_1485,&g_1485,&g_1485};
static const int8_t ***g_1491[2] = {(void*)0,(void*)0};
static const int8_t ****g_1490[4] = {&g_1491[0],&g_1491[0],&g_1491[0],&g_1491[0]};
static const int8_t *****g_1489 = &g_1490[1];
static union U2 **g_1513 = (void*)0;
static union U4 *g_1569 = (void*)0;
static union U4 **g_1568[4][1] = {{&g_1569},{&g_1569},{&g_1569},{&g_1569}};
static union U4 ***g_1567 = &g_1568[1][0];
static union U4 ****g_1566 = &g_1567;
static uint16_t g_1592 = 0x3CE8L;
static uint8_t * const *g_1662 = (void*)0;
static uint8_t * const **g_1661 = &g_1662;
static uint8_t * const ** const *g_1660 = &g_1661;
static const int32_t *g_1679 = (void*)0;
static union U3 **g_1682 = (void*)0;
static union U3 ***g_1681 = &g_1682;



static union U1  func_1(void);
static struct S0  func_7(union U5  p_8, int16_t  p_9, union U2  p_10, int16_t  p_11, int8_t * p_12);
static union U5  func_13(int8_t * p_14, const int16_t  p_15);
static uint32_t  func_16(int16_t  p_17);
static int32_t  func_19(int8_t * p_20, int32_t  p_21, const int8_t * p_22);
static int8_t * func_23(union U3  p_24);
static union U3  func_25(int8_t * p_26);
static int32_t  func_38(int8_t  p_39, uint16_t  p_40, union U5  p_41);




static union U1  func_1(void)
{ 
    int64_t l_1409 = 0xB590A93D3B4E75C1LL;
    int8_t l_1420 = 0x0DL;
    const union U4 l_1423 = {{249UL,0x7626DB59L,0x84E6L}};
    int32_t l_1426 = 0x25C90445L;
    union U6 **l_1427 = &g_289[0][1];
    const union U2 l_1432 = {65527UL};
    uint8_t ***l_1440[6][2][6] = {{{&g_280,&g_280,&g_280,&g_280,(void*)0,(void*)0},{&g_280,&g_280,(void*)0,&g_280,(void*)0,(void*)0}},{{&g_280,(void*)0,(void*)0,(void*)0,&g_280,&g_280},{&g_280,&g_280,&g_280,&g_280,&g_280,&g_280}},{{&g_280,&g_280,(void*)0,&g_280,&g_280,&g_280},{&g_280,&g_280,&g_280,&g_280,&g_280,&g_280}},{{&g_280,(void*)0,&g_280,&g_280,&g_280,&g_280},{&g_280,&g_280,&g_280,&g_280,&g_280,&g_280}},{{&g_280,&g_280,&g_280,&g_280,&g_280,&g_280},{&g_280,&g_280,&g_280,&g_280,(void*)0,&g_280}},{{&g_280,&g_280,&g_280,&g_280,&g_280,&g_280},{&g_280,&g_280,&g_280,(void*)0,&g_280,&g_280}}};
    const uint8_t l_1444 = 255UL;
    uint16_t *l_1451 = (void*)0;
    int16_t l_1452 = 0x3FBCL;
    int8_t l_1454 = 3L;
    const union U3 *l_1459 = &g_119;
    const union U3 **l_1458 = &l_1459;
    const union U3 ***l_1457 = &l_1458;
    const union U1 ***l_1506 = &g_571;
    int64_t l_1509[3];
    int32_t l_1515 = 0xC5CA4ED2L;
    int32_t l_1624 = (-6L);
    int32_t l_1625 = 0L;
    union U4 l_1633 = {{255UL,1L,0x62AAL}};
    uint32_t l_1643 = 0x35A2B1C7L;
    uint32_t l_1663 = 4294967295UL;
    union U4 * const *l_1665 = &g_1569;
    union U4 **l_1666 = &g_1569;
    uint8_t l_1673 = 0UL;
    int32_t * const l_1697 = &g_59[0][1][0];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1509[i] = 0x3615BDEF8B944825LL;
    for (g_2 = 0; (g_2 > (-18)); g_2--)
    { 
        int8_t *l_5 = &g_6;
        int32_t l_18 = (-3L);
        struct S0 ***l_1390 = (void*)0;
        uint32_t l_1453 = 4294967291UL;
        union U2 *l_1473 = (void*)0;
        int32_t l_1482 = 0x41D2190AL;
        union U1 *l_1483 = &g_195;
        uint64_t l_1508[3][4][3];
        union U5 *l_1510 = &g_61;
        int64_t l_1571 = (-6L);
        uint64_t *l_1642 = &g_152;
        int16_t l_1644 = 7L;
        uint8_t l_1645 = 2UL;
        int32_t *l_1646[5] = {&l_18,&l_18,&l_18,&l_18,&l_18};
        int32_t l_1654 = (-2L);
        uint16_t l_1676 = 65529UL;
        uint64_t l_1685[6][3];
        int32_t **l_1698 = (void*)0;
        int32_t **l_1699 = &l_1646[2];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 3; k++)
                    l_1508[i][j][k] = 1UL;
            }
        }
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 3; j++)
                l_1685[i][j] = 0x047070982445385CLL;
        }
    }
    return (***l_1506);
}



static struct S0  func_7(union U5  p_8, int16_t  p_9, union U2  p_10, int16_t  p_11, int8_t * p_12)
{ 
    int32_t l_1410 = 0L;
    int32_t l_1411 = 1L;
    int32_t *l_1412 = &g_119.f0;
    int32_t *l_1413[2][5] = {{&g_1278[2],&g_1064.f0,&g_34,&g_1064.f0,&g_1278[2]},{&g_1278[2],&g_1064.f0,&g_34,&g_1064.f0,&g_1278[2]}};
    int16_t l_1414 = (-9L);
    uint64_t l_1415 = 1UL;
    int i, j;
    l_1415++;
    return (**g_634);
}



static union U5  func_13(int8_t * p_14, const int16_t  p_15)
{ 
    union U3 **l_1398[4];
    union U3 ***l_1397 = &l_1398[0];
    union U3 **l_1399[4] = {&g_131,&g_131,&g_131,&g_131};
    int32_t l_1400 = 0x4EE07961L;
    int32_t l_1401[7];
    const int8_t l_1403 = 0x3EL;
    int32_t l_1404 = 0xE4BBAD48L;
    uint32_t *l_1405[1][6][1] = {{{(void*)0},{&g_125.f1},{(void*)0},{&g_125.f1},{(void*)0},{&g_125.f1}}};
    int32_t l_1406 = 0x903DA726L;
    int32_t l_1407 = 0x4DE7DEA0L;
    union U5 l_1408 = {0UL};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1398[i] = &g_131;
    for (i = 0; i < 7; i++)
        l_1401[i] = 0x0F0159EFL;
    l_1407 = (((l_1406 = (safe_mod_func_uint64_t_u_u(((safe_add_func_int64_t_s_s((((*l_1397) = &g_131) == l_1399[1]), g_30.f0)) & 0L), (l_1404 &= (0x39491852L && (((l_1401[0] |= (l_1400 = 0xA0A3895EL)) < (~(p_15 != l_1403))) <= 0xE8A194FEA9DD57B1LL)))))) > 0x4EDBEAC0L) & l_1403);
    return l_1408;
}



static uint32_t  func_16(int16_t  p_17)
{ 
    int8_t *l_27[2][4];
    int8_t **l_28 = &l_27[0][1];
    const int8_t *l_763 = &g_764;
    int32_t l_1130 = 5L;
    int32_t l_1140 = 0xFEECF08DL;
    const uint32_t l_1184[5] = {0x1218E3CAL,0x1218E3CAL,0x1218E3CAL,0x1218E3CAL,0x1218E3CAL};
    union U5 l_1204 = {1UL};
    int32_t *** const **l_1209 = (void*)0;
    union U3 **l_1233 = (void*)0;
    int32_t l_1245 = (-1L);
    int32_t l_1317[2][1];
    int16_t l_1319[1];
    uint32_t l_1322 = 0UL;
    union U3 l_1354 = {0x63768321L};
    uint64_t l_1366[6] = {0UL,0xBB4B3CA13C6EAF09LL,0UL,0UL,0xBB4B3CA13C6EAF09LL,0UL};
    uint32_t l_1374 = 0xA84D47CDL;
    int32_t *****l_1388 = &g_1211;
    uint64_t l_1389 = 18446744073709551615UL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            l_27[i][j] = &g_6;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1317[i][j] = 6L;
    }
    for (i = 0; i < 1; i++)
        l_1319[i] = 0x197AL;
    if (func_19(func_23(func_25(((*l_28) = l_27[0][1]))), g_525.f1, l_763))
    { 
        uint64_t l_1122 = 0xCD9040F3180957F0LL;
        int32_t l_1147[3];
        int32_t l_1163[1];
        uint16_t l_1165 = 4UL;
        union U4 * const l_1172[7] = {&g_929[4],&g_1162,&g_929[4],&g_929[4],&g_1162,&g_929[4],&g_929[4]};
        int8_t l_1177 = 0xC0L;
        struct S0 ***l_1218 = &g_634;
        struct S0 ****l_1217 = &l_1218;
        uint32_t l_1237[5];
        uint8_t l_1328 = 1UL;
        struct S0 ***l_1333 = &g_634;
        int8_t l_1361[1][4];
        union U4 *l_1372 = &g_1373;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1147[i] = 0x4514F8ACL;
        for (i = 0; i < 1; i++)
            l_1163[i] = 0x19AC4DFDL;
        for (i = 0; i < 5; i++)
            l_1237[i] = 0xBEB136BDL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_1361[i][j] = 0L;
        }
        for (g_119.f1 = 0; (g_119.f1 >= 0); g_119.f1 -= 1)
        { 
            int32_t l_1142 = 0x4F90B9DFL;
            struct S0 *l_1173 = &g_441[1].f0;
            const union U5 *l_1179 = &g_61;
            union U2 l_1208[6] = {{0xB5CDL},{0xB5CDL},{0xB5CDL},{0xB5CDL},{0xB5CDL},{0xB5CDL}};
            int i;
            for (g_35 = 0; (g_35 <= 5); g_35 += 1)
            { 
                int16_t ***l_1121[2];
                int32_t *l_1123 = &g_59[0][0][0];
                union U1 * const *l_1132 = (void*)0;
                union U1 * const **l_1131[2][2][4] = {{{(void*)0,&l_1132,&l_1132,&l_1132},{&l_1132,&l_1132,(void*)0,&l_1132}},{{&l_1132,&l_1132,&l_1132,(void*)0},{&l_1132,(void*)0,(void*)0,&l_1132}}};
                int32_t l_1141 = (-1L);
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1121[i] = (void*)0;
                (*l_1123) = (((void*)0 == l_1121[1]) == l_1122);
                for (p_17 = 0; (p_17 <= 1); p_17 += 1)
                { 
                    int64_t *l_1128 = &g_290.f3;
                    int32_t *l_1129 = &g_1064.f0;
                    const union U1 **l_1136 = &g_572;
                    union U2 *l_1143 = &g_485;
                    int i, j, k;
                    (*l_1123) = (safe_mul_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((((*l_1128) = g_59[g_119.f1][(g_119.f1 + 2)][p_17]) == (*l_1123)), 8)) < ((*l_1129) ^= (*l_1123))) != l_1130), ((p_17 , l_1131[0][0][1]) != (void*)0)));
                    l_1142 = ((((safe_lshift_func_uint8_t_u_s(((safe_unary_minus_func_int32_t_s(((*l_1123) = ((l_1136 != ((p_17 != (+(g_485 , (l_1130 = ((***g_486) = ((*l_1129) = (safe_add_func_uint32_t_u_u((&g_230[(p_17 + 2)] == (void*)0), 0xFF8C2A85L)))))))) , &g_572)) & l_1140)))) != p_17), 7)) , l_1141) <= p_17) | (**g_280));
                    if (l_1122)
                        continue;
                    g_1144[3][0] = l_1143;
                    return g_195.f1;
                }
            }
            if (p_17)
                break;
            if ((l_1142 = l_1142))
            { 
                uint32_t l_1164 = 1UL;
                int32_t l_1166 = (-3L);
                int32_t *l_1176[1][5][2] = {{{&g_59[0][1][0],(void*)0},{&g_59[0][1][0],(void*)0},{&g_59[0][1][0],(void*)0},{&g_59[0][1][0],(void*)0},{&g_59[0][1][0],(void*)0}}};
                int i, j, k;
                for (g_328 = 0; (g_328 <= 0); g_328 += 1)
                { 
                    union U1 l_1145[1] = {{0xAF716D3BE4353DD0LL}};
                    int32_t *l_1146[2];
                    union U6 l_1167 = {0};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1146[i] = &l_1142;
                    l_1166 = ((l_1145[0] , (l_1147[1] = l_1122)) & (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((p_17 <= (safe_lshift_func_uint8_t_u_s((l_1130 && (p_17 > 0xA7L)), 3))) < (((safe_rshift_func_int8_t_s_s((((((l_1163[0] = (((safe_rshift_func_int8_t_s_s((((g_1162 , g_132.f1) <= p_17) > g_32.f1), 7)) , l_1142) | 0xE3L)) >= l_1130) > 2UL) <= l_1164) == l_1165), 3)) & p_17) && 255UL)), l_1140)), (***g_486))) , (-1L)), p_17)), 8)));
                    l_1140 ^= (l_1142 |= (l_1166 ^= ((p_17 , l_1167) , l_1164)));
                }
                for (g_35 = 0; (g_35 <= 0); g_35 += 1)
                { 
                    (*g_389) = (void*)0;
                    (*g_334) = ((l_1166 = (1L > ((l_1130 = (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(l_1165, ((((*g_131) , ((l_1166 != ((p_17 || ((&l_1164 == (((void*)0 == l_1172[5]) , (void*)0)) >= l_1142)) | (*g_53))) ^ 0x9F96CD1CBF3689B6LL)) , l_1173) == (void*)0))), 1))) < l_1164))) , &l_1140);
                }
                l_1147[1] = (safe_lshift_func_uint16_t_u_s(l_1163[0], l_1142));
                if (l_1140)
                    continue;
                if (p_17)
                    continue;
            }
            else
            { 
                int32_t *l_1178 = &g_59[0][1][0];
                const union U5 **l_1180 = &l_1179;
                for (g_109 = 0; (g_109 <= 0); g_109 += 1)
                { 
                    return l_1177;
                }
                (*l_1178) ^= (((l_1147[1] , &p_17) == (void*)0) ^ p_17);
                (*l_1180) = l_1179;
            }
            for (g_35 = 0; (g_35 <= 0); g_35 += 1)
            { 
                uint16_t l_1187 = 0x75AFL;
                int32_t l_1188[1];
                int32_t *l_1189 = &l_1147[0];
                int32_t *l_1190 = &g_1064.f0;
                uint16_t l_1212 = 1UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_1188[i] = 0x96C6F7EBL;
                (*l_1190) = ((*l_1189) = ((safe_unary_minus_func_uint8_t_u((((**g_634) , (g_972[4][4][4] || (safe_div_func_uint32_t_u_u((l_1187 = ((((l_1122 , (l_1184[0] || ((safe_sub_func_uint16_t_u_u(((void*)0 != (*g_486)), 65535UL)) <= 0xD05C0CE3672A2DD9LL))) & 0x3CL) == l_1147[1]) < 0x0C1ED7D6L)), p_17)))) , 0x48L))) > l_1188[0]));
                for (g_184 = 0; (g_184 <= 0); g_184 += 1)
                { 
                    uint64_t *l_1191 = &g_286.f4;
                    uint64_t *l_1192 = &g_286.f4;
                    uint64_t *l_1193[4][2] = {{&l_1122,&l_1122},{&l_1122,&l_1122},{&l_1122,&l_1122},{&l_1122,&l_1122}};
                    uint16_t *l_1198 = &g_834;
                    union U5 l_1202 = {0xE2B4L};
                    union U5 *l_1203 = &g_61;
                    int i, j, k;
                    g_59[g_35][g_184][g_35] = g_59[g_35][g_184][g_35];
                    (*l_1190) = (((--g_144) > ((safe_add_func_uint64_t_u_u(((0x15C1L && ((*l_1198)++)) != (((-7L) <= ((~(((g_59[g_119.f1][(g_119.f1 + 1)][(g_35 + 1)] <= (((l_1204 = ((*l_1203) = l_1202)) , (((*g_281) >= ((((((!((safe_mod_func_int8_t_s_s((((l_1208[3] , l_1209) == g_1210) <= 0x34E3D4B5L), (*l_1189))) || 0xB741842BL)) , (*g_570)) , (*l_1190)) <= (**g_278)) || (*g_279)) < l_1163[0])) != 0x1A11B2EFC4B4FE50LL)) < 0x800B93E4L)) != (*l_1190)) >= l_1212)) != p_17)) >= 0UL)), g_525.f0)) <= p_17)) == l_1208[3].f2);
                    return p_17;
                }
            }
        }
        for (g_119.f0 = 17; (g_119.f0 < (-15)); g_119.f0--)
        { 
            union U6 **l_1215 = &g_289[0][5];
            union U3 **l_1234 = &g_131;
            int32_t *l_1239 = &g_109;
            uint32_t *l_1246 = (void*)0;
            int32_t l_1249 = (-4L);
            uint64_t *l_1252[2];
            union U2 l_1257 = {2UL};
            uint64_t *l_1258[1];
            int32_t l_1277 = 0L;
            int32_t l_1280 = 0L;
            int32_t l_1316 = 4L;
            int32_t l_1318 = 1L;
            int32_t l_1320 = 0L;
            int32_t l_1321[2];
            union U4 *l_1340[3][6][5] = {{{(void*)0,&g_441[1],&g_441[3],&g_929[1],&g_929[4]},{&g_929[4],&g_929[1],&g_441[1],&g_1162,&g_1162},{(void*)0,&g_441[3],(void*)0,&g_441[1],&g_441[1]},{&g_1162,&g_441[3],&g_929[4],&g_929[4],&g_441[1]},{&g_929[3],&g_929[1],&g_1162,&g_441[3],&g_1162},{(void*)0,&g_441[1],&g_929[4],&g_441[1],(void*)0}},{{(void*)0,&g_929[4],(void*)0,&g_441[1],&g_441[3]},{&g_441[2],(void*)0,&g_441[1],&g_441[3],&g_441[1]},{&g_929[4],(void*)0,&g_441[3],&g_929[4],&g_441[3]},{&g_441[3],&g_441[3],&g_441[3],(void*)0,(void*)0},{&g_929[4],&g_441[1],(void*)0,(void*)0,&g_441[1]},{&g_929[4],&g_441[1],&g_1162,&g_929[3],&g_441[3]}},{{&g_1162,&g_441[1],&g_441[1],&g_1162,&g_441[3]},{&g_929[4],&g_929[4],&g_441[1],(void*)0,(void*)0},{(void*)0,&g_441[1],&g_1162,&g_929[4],&g_441[1]},{&g_441[1],&g_929[4],(void*)0,(void*)0,&g_929[4]},{&g_441[1],&g_441[2],&g_929[1],&g_1162,&g_929[4]},{&g_441[1],&g_441[3],&g_929[4],&g_929[3],&g_441[1]}}};
            union U4 **l_1339 = &l_1340[0][2][0];
            int16_t l_1365 = 0x15E7L;
            int32_t *l_1371[4][7] = {{&l_1130,&l_1130,&l_1130,&l_1130,&l_1130,&l_1130,&l_1130},{&g_119.f0,&g_119.f0,&g_119.f0,&g_119.f0,&g_119.f0,&g_119.f0,&g_119.f0},{&l_1130,&l_1130,&l_1130,&l_1130,&l_1130,&l_1130,&l_1130},{&g_119.f0,&g_119.f0,&g_119.f0,&g_119.f0,&g_119.f0,&g_119.f0,&g_119.f0}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1252[i] = &g_152;
            for (i = 0; i < 1; i++)
                l_1258[i] = &g_144;
            for (i = 0; i < 2; i++)
                l_1321[i] = (-1L);
            for (p_17 = 0; (p_17 >= 0); p_17 -= 1)
            { 
                union U6 ***l_1216 = &l_1215;
                (*l_1216) = l_1215;
                for (g_132.f1 = 2; (g_132.f1 >= 0); g_132.f1 -= 1)
                { 
                    struct S0 *****l_1219 = &l_1217;
                    struct S0 ****l_1221 = &l_1218;
                    struct S0 *****l_1220 = &l_1221;
                    int i;
                    l_1147[g_132.f1] = (((*l_1219) = l_1217) == ((*l_1220) = (void*)0));
                    return p_17;
                }
                return g_60[6][2];
            }
            (*l_1239) ^= ((safe_mod_func_uint8_t_u_u((l_1209 == &g_1211), (safe_rshift_func_int8_t_s_u((((**l_28) |= (~((safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((0x4FL ^ ((l_1233 != l_1234) == ((safe_add_func_int8_t_s_s(l_1237[3], (*g_411))) , g_61.f0))) > 0L), p_17)), 10)) | g_1238))) < l_1237[0]), l_1237[3])))) == l_1163[0]);
            if ((safe_sub_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s(((!p_17) ^ l_1245), 7)) > (g_532.f4 = (g_35 ^= p_17))), (safe_div_func_uint64_t_u_u(((l_1249 , ((safe_sub_func_uint8_t_u_u(((void*)0 != &g_131), (l_1122 >= l_1165))) >= 4294967295UL)) != 0x6E14L), p_17)))))
            { 
                uint64_t **l_1253 = &l_1252[0];
                int32_t l_1254 = 0x859A53B7L;
                uint64_t **l_1259 = &l_1258[0];
                union U6 **l_1262[6] = {&g_289[0][3],&g_289[0][3],&g_289[0][3],&g_289[0][3],&g_289[0][3],&g_289[0][3]};
                uint16_t *l_1268 = &g_328;
                uint16_t **l_1267[6][2][4] = {{{&l_1268,&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268,&l_1268}},{{&l_1268,&l_1268,&l_1268,&l_1268},{&l_1268,&l_1268,&l_1268,&l_1268}}};
                int32_t l_1281 = 0xBC5C989DL;
                uint64_t l_1282 = 0UL;
                int i, j, k;
                if (((((*l_1253) = ((p_17 & p_17) , l_1252[0])) == ((((*g_281)--) , l_1257) , ((*l_1259) = l_1258[0]))) , ((safe_sub_func_int64_t_s_s((((l_1262[0] = l_1215) == l_1215) < l_1147[1]), p_17)) , p_17)))
                { 
                    union U5 l_1271 = {0x00A2L};
                    int32_t l_1272 = 0xA637A6E1L;
                    (*l_1239) |= ((safe_lshift_func_int8_t_s_u(p_17, 7)) != (l_1267[5][0][0] == (void*)0));
                    (*g_334) = ((*g_389) = &l_1147[1]);
                    if (p_17)
                        break;
                    (*l_1239) = (((l_1271 , 0xFBBB7172L) || ((l_1272 |= p_17) != (-1L))) | p_17);
                }
                else
                { 
                    int32_t *l_1273 = (void*)0;
                    int32_t *l_1274 = (void*)0;
                    int32_t *l_1275 = &l_1163[0];
                    int32_t *l_1276[5];
                    int16_t l_1279 = 0x6679L;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1276[i] = &l_1163[0];
                    --l_1282;
                    (*l_1275) = (((safe_unary_minus_func_int32_t_s((safe_mod_func_uint8_t_u_u(((0xE1L == p_17) > (safe_sub_func_int16_t_s_s(0x6C7FL, (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(0x4C95L, (safe_rshift_func_uint16_t_u_u((*l_1275), 5)))), 5))))), (~p_17))))) || l_1281) ^ 0UL);
                    if (p_17)
                        break;
                    (*g_389) = &l_1277;
                    (*****g_1210) = (g_32.f0 > 1UL);
                }
                return l_1237[3];
            }
            else
            { 
                int16_t l_1302 = 0L;
                int32_t l_1315[3];
                int8_t ****l_1325 = &g_740[1][3];
                const int8_t **l_1336[1];
                int i;
                for (i = 0; i < 3; i++)
                    l_1315[i] = (-10L);
                for (i = 0; i < 1; i++)
                    l_1336[i] = &g_53;
                if (p_17)
                { 
                    uint32_t l_1301 = 4294967295UL;
                    union U4 *l_1305 = (void*)0;
                    union U4 **l_1306 = &l_1305;
                    int32_t *l_1307 = (void*)0;
                    int32_t *l_1308 = &l_1277;
                    int32_t *l_1309 = &g_1064.f0;
                    int32_t *l_1310 = &g_1278[1];
                    int32_t *l_1311 = &l_1147[1];
                    int32_t *l_1312 = (void*)0;
                    int32_t *l_1313 = &g_34;
                    int32_t *l_1314[1][4];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1314[i][j] = (void*)0;
                    }
                    (*l_1239) &= (g_441[2] , ((safe_sub_func_uint8_t_u_u(0x53L, ((((l_1163[0] ^ (((-1L) && ((l_1301 ^= (-5L)) > (l_1302 != (safe_lshift_func_int8_t_s_u((l_1257 , (-1L)), p_17))))) <= 2UL)) > p_17) , (-8L)) || p_17))) || g_54));
                    (*l_1306) = l_1305;
                    l_1322--;
                    if ((*l_1308))
                        continue;
                    (****g_1210) = l_1311;
                }
                else
                { 
                    int8_t *****l_1326 = &l_1325;
                    int32_t l_1327 = (-1L);
                    struct S0 ***l_1335 = &g_634;
                    struct S0 ****l_1334 = &l_1335;
                    union U4 * const **l_1343[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1343[i] = (void*)0;
                    (*l_1326) = l_1325;
                    if (l_1327)
                        break;
                    if (l_1327)
                        continue;
                    (*l_1239) = (l_1315[0] = ((l_1328 || p_17) , (safe_sub_func_int64_t_s_s((((safe_rshift_func_int8_t_s_s(3L, (((*l_1217) = l_1333) == ((*l_1334) = &g_634)))) , l_1336[0]) == &l_763), p_17))));
                    (*l_1239) |= (+((~((l_1339 == (g_1341 = g_1341)) || ((((*g_29) , 1L) != ((void*)0 == &g_634)) == ((*g_571) == (void*)0)))) & (-4L)));
                }
                for (g_559 = 0; (g_559 <= 17); ++g_559)
                { 
                    const union U2 * const l_1357 = (void*)0;
                    const union U2 * const *l_1356[2];
                    const union U2 * const **l_1355 = &l_1356[0];
                    union U2 **l_1359[3];
                    union U2 ***l_1358[4][4][7] = {{{&l_1359[1],&l_1359[1],&l_1359[1],&l_1359[1],(void*)0,(void*)0,(void*)0},{&l_1359[1],(void*)0,(void*)0,&l_1359[1],(void*)0,&l_1359[2],&l_1359[1]},{&l_1359[2],(void*)0,&l_1359[2],&l_1359[1],&l_1359[1],(void*)0,&l_1359[0]},{&l_1359[1],&l_1359[1],(void*)0,&l_1359[1],&l_1359[1],&l_1359[1],&l_1359[1]}},{{&l_1359[1],(void*)0,&l_1359[1],&l_1359[1],&l_1359[2],(void*)0,(void*)0},{&l_1359[1],&l_1359[1],&l_1359[1],&l_1359[2],&l_1359[1],(void*)0,&l_1359[2]},{&l_1359[1],&l_1359[1],&l_1359[1],&l_1359[1],&l_1359[0],&l_1359[1],&l_1359[1]},{&l_1359[1],&l_1359[0],&l_1359[2],&l_1359[1],(void*)0,&l_1359[2],(void*)0}},{{&l_1359[1],&l_1359[1],&l_1359[2],&l_1359[2],&l_1359[1],&l_1359[1],(void*)0},{&l_1359[1],&l_1359[1],&l_1359[2],&l_1359[1],&l_1359[2],&l_1359[1],&l_1359[2]},{(void*)0,&l_1359[1],(void*)0,&l_1359[1],(void*)0,&l_1359[1],&l_1359[1]},{&l_1359[1],&l_1359[1],(void*)0,(void*)0,&l_1359[1],&l_1359[0],(void*)0}},{{(void*)0,(void*)0,&l_1359[1],&l_1359[1],&l_1359[1],&l_1359[1],&l_1359[2]},{&l_1359[1],(void*)0,(void*)0,&l_1359[2],&l_1359[1],&l_1359[1],(void*)0},{(void*)0,(void*)0,(void*)0,&l_1359[1],&l_1359[2],&l_1359[1],&l_1359[1]},{(void*)0,&l_1359[1],&l_1359[1],&l_1359[2],&l_1359[2],&l_1359[1],&l_1359[1]}}};
                    uint32_t *l_1362 = (void*)0;
                    int32_t l_1363 = 8L;
                    int32_t *l_1364[6];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_1356[i] = &l_1357;
                    for (i = 0; i < 3; i++)
                        l_1359[i] = &g_1144[1][0];
                    for (i = 0; i < 6; i++)
                        l_1364[i] = &l_1130;
                    (*l_1239) = ((safe_div_func_uint16_t_u_u(p_17, (safe_sub_func_uint32_t_u_u((*l_1239), (l_1363 = (safe_add_func_uint32_t_u_u((g_35 ^= (safe_mul_func_uint8_t_u_u(((l_1163[0] != 0x57L) , (((*l_1355) = (l_1354 , (void*)0)) == (g_1360 = &g_1144[4][0]))), l_1361[0][1]))), l_1165))))))) , p_17);
                    (*l_1239) &= (-7L);
                    l_1366[0]--;
                }
                for (l_1165 = 0; (l_1165 <= 3); l_1165 += 1)
                { 
                    return p_17;
                }
                for (g_559 = (-22); (g_559 > 3); ++g_559)
                { 
                    (***g_1211) = l_1371[0][1];
                    return l_1302;
                }
                l_1372 = (*l_1339);
            }
            l_1374--;
        }
    }
    else
    { 
        const int64_t l_1382[3][3][5] = {{{1L,0x45B078A6CA599098LL,0x45B078A6CA599098LL,1L,0x45B078A6CA599098LL},{9L,9L,(-5L),9L,9L},{0x45B078A6CA599098LL,1L,0x45B078A6CA599098LL,0x45B078A6CA599098LL,1L}},{{9L,1L,1L,9L,1L},{1L,1L,0x2266B002BA9BDFD9LL,1L,1L},{1L,9L,1L,1L,9L}},{{1L,0x45B078A6CA599098LL,0x45B078A6CA599098LL,1L,0x45B078A6CA599098LL},{9L,9L,(-5L),9L,9L},{0x45B078A6CA599098LL,1L,0x45B078A6CA599098LL,0x45B078A6CA599098LL,1L}}};
        int32_t l_1383 = 0x77EF1E46L;
        struct S0 *l_1384 = &g_1162.f0;
        int32_t *l_1385 = &g_109;
        int8_t *l_1386[4] = {&g_6,&g_6,&g_6,&g_6};
        union U3 l_1387 = {-1L};
        int i, j, k;
        (*l_1385) = (safe_mul_func_uint16_t_u_u((!(safe_mul_func_uint16_t_u_u(65535UL, l_1382[2][0][2]))), ((***g_486) = ((*g_634) == ((l_1383 = (((**g_280) |= 0x9FL) ^ (**g_278))) , l_1384)))));
        (****g_1210) = &l_1317[0][0];
        (*****l_1388) = (l_1387 , ((g_1210 = l_1388) != &g_1211));
    }
    l_1389 = p_17;
    return g_231[0];
}



static int32_t  func_19(int8_t * p_20, int32_t  p_21, const int8_t * p_22)
{ 
    uint32_t l_769 = 4294967286UL;
    int32_t l_777 = 0x96446362L;
    struct S0 l_798 = {255UL,1L,0x9630L};
    union U1 **l_806 = &g_570;
    union U1 **l_808 = &g_570;
    int32_t l_825 = 0x8346F337L;
    int32_t l_826 = 0xCAF890D2L;
    int32_t l_827 = 0xD2198D65L;
    int32_t l_828 = (-1L);
    int32_t l_829 = 0x17D301F7L;
    int32_t l_830 = 0xE0CB9181L;
    int32_t l_831 = 0x4E734E08L;
    int32_t l_832 = (-9L);
    int32_t l_833[1][4];
    union U1 l_889 = {0x5EFCBD6BFCEA0816LL};
    union U4 *l_928[2];
    int16_t **l_938 = &g_230[5];
    int16_t ***l_937 = &l_938;
    int16_t ****l_936 = &l_937;
    int16_t *****l_935 = &l_936;
    struct S0 ***l_949 = &g_634;
    struct S0 **** const l_948 = &l_949;
    int8_t l_974 = (-6L);
    int8_t l_977 = 0x62L;
    uint32_t l_1014 = 4294967289UL;
    uint32_t l_1024 = 0x5C867440L;
    uint8_t *l_1027[5][4] = {{(void*)0,&g_972[0][1][1],(void*)0,&g_60[2][2]},{(void*)0,&g_60[2][2],&g_60[2][2],(void*)0},{&g_60[3][1],&g_60[2][2],&g_60[0][0],&g_60[2][2]},{&g_60[2][2],&g_972[0][1][1],&g_60[0][0],&g_60[0][0]},{&g_60[3][1],&g_60[3][1],&g_60[2][2],&g_60[0][0]}};
    int32_t *****l_1043 = (void*)0;
    union U3 *l_1063 = &g_1064;
    uint32_t l_1079 = 4294967294UL;
    int64_t *l_1110[1][2][5] = {{{&g_195.f0,&g_559,&g_195.f0,&g_559,&g_195.f0},{&l_889.f0,&l_889.f0,&l_889.f0,&l_889.f0,&l_889.f0}}};
    uint16_t l_1120 = 0x8255L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_833[i][j] = 0xBD565317L;
    }
    for (i = 0; i < 2; i++)
        l_928[i] = &g_929[4];
    for (g_56 = 0; (g_56 <= 1); g_56 += 1)
    { 
        union U6 l_772 = {0};
        int32_t *l_775 = &g_59[0][2][1];
        int32_t l_814 = 0x8945A05BL;
        int32_t l_818 = 0x81C65528L;
        int32_t l_820[2][4];
        union U1 **l_844 = (void*)0;
        struct S0 l_847 = {9UL,0x37318D9AL,65528UL};
        int32_t l_881 = 0xC0ACE51FL;
        uint32_t l_884 = 4294967295UL;
        union U4 l_927 = {{0x54L,0L,65527UL}};
        int16_t **l_934[6][6] = {{&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2]},{&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2]},{&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2]},{&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2]},{&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2]},{&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2],&g_230[2]}};
        int16_t ***l_933[2][3][4];
        int16_t ****l_932[1];
        int16_t *****l_931 = &l_932[0];
        uint16_t *l_953 = &g_328;
        int8_t ****l_992 = &g_740[1][0];
        int64_t l_1021 = 1L;
        int16_t l_1022 = (-5L);
        int16_t l_1118 = 0L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_820[i][j] = 0x1006CD77L;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 4; k++)
                    l_933[i][j][k] = &l_934[4][3];
            }
        }
        for (i = 0; i < 1; i++)
            l_932[i] = &l_933[1][0][2];
        for (g_109 = 0; (g_109 <= 0); g_109 += 1)
        { 
            int32_t l_773[1][3][4] = {{{0xC7484BD8L,0xC7484BD8L,0xC7484BD8L,0xC7484BD8L},{0xC7484BD8L,0xC7484BD8L,0xC7484BD8L,0xC7484BD8L},{0xC7484BD8L,0xC7484BD8L,0xC7484BD8L,0xC7484BD8L}}};
            int32_t *l_774 = &g_59[0][1][0];
            int32_t *l_776[6][6] = {{&l_773[0][2][0],&g_109,&l_773[0][2][0],&l_773[0][2][0],&g_109,&g_109},{&l_773[0][2][0],&g_2,&l_773[0][2][0],&l_773[0][2][0],&g_2,&l_773[0][2][0]},{&l_773[0][2][0],(void*)0,&g_109,&l_773[0][2][0],(void*)0,&l_773[0][2][0]},{&l_773[0][2][0],&g_109,&l_773[0][0][3],&g_2,&g_109,&g_109},{&l_773[0][0][3],&l_773[0][2][0],&g_2,&g_2,&l_773[0][2][0],&l_773[0][0][3]},{&l_773[0][0][3],&l_773[0][2][0],&g_109,&g_2,&l_773[0][2][0],&g_2}};
            int i, j, k;
            if (g_60[(g_109 + 5)][(g_109 + 3)])
                break;
            (*l_774) |= (l_773[0][2][0] = (g_132.f1 , (safe_add_func_uint16_t_u_u(((g_60[(g_109 + 5)][(g_109 + 3)] & (safe_mul_func_uint16_t_u_u(g_60[(g_109 + 5)][(g_109 + 3)], l_769))) || (g_32.f0 != ((l_772 , l_769) == 0xCD0863C7L))), 0x76DCL))));
            (*g_334) = l_775;
            l_777 ^= ((*l_774) = 0x03EF3383L);
            (*l_775) = (((p_21 >= ((g_60[3][2] , (safe_unary_minus_func_int64_t_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((p_21 > p_21), ((*l_775) & ((safe_mod_func_int32_t_s_s(((((*g_634) == (void*)0) , 0xFDFCDFAEL) < l_777), 0xD8BF19EBL)) <= (**g_280))))), 0x1C60F3BC4E11D447LL)), (**g_278)))))) | p_21)) ^ p_21) & 0x94F7L);
            for (g_6 = 0; (g_6 <= 1); g_6 += 1)
            { 
                uint32_t l_787 = 18446744073709551615UL;
                int i, j, k;
                l_787++;
                for (g_184 = 0; (g_184 >= 0); g_184 -= 1)
                { 
                    union U5 * const l_794 = &g_61;
                    union U6 l_795 = {0};
                    int i, j, k;
                    (*g_571) = ((safe_lshift_func_int8_t_s_s(((((((safe_mul_func_uint8_t_u_u(((void*)0 == l_794), p_21)) , l_795) , (((**g_280)--) , l_798)) , (safe_mul_func_uint8_t_u_u(p_21, (&l_795 != &l_795)))) , p_21) , l_769), (*p_22))) , (*g_569));
                    (*l_774) = (*l_775);
                    return p_21;
                }
            }
        }
        (*l_775) = p_21;
        for (g_34 = 0; (g_34 <= 1); g_34 += 1)
        { 
            uint8_t l_803 = 0x93L;
            union U1 ***l_807[5];
            int32_t l_809 = 0L;
            int16_t l_813 = (-3L);
            int32_t l_815 = (-1L);
            int32_t l_816 = 0x75B99775L;
            int32_t l_817 = 0xFCA871EFL;
            int32_t l_819 = 0x0C64BA95L;
            int32_t l_821 = 1L;
            int32_t l_822 = 0x756ECCF8L;
            int32_t l_823 = (-10L);
            int32_t l_824[3];
            const union U5 l_861 = {0x766CL};
            union U2 *l_945[3];
            uint16_t * const l_955 = &g_61.f0;
            struct S0 *l_961[7];
            uint32_t l_991 = 0xB7BA1BDDL;
            uint64_t l_1015 = 18446744073709551606UL;
            int32_t l_1023 = 8L;
            union U4 l_1035[3] = {{{248UL,0x4B1C8515L,0x6B8BL}},{{248UL,0x4B1C8515L,0x6B8BL}},{{248UL,0x4B1C8515L,0x6B8BL}}};
            int32_t l_1097 = 0x2C1E671FL;
            int i;
            for (i = 0; i < 5; i++)
                l_807[i] = &g_569;
            for (i = 0; i < 3; i++)
                l_824[i] = 0xE89CEC92L;
            for (i = 0; i < 3; i++)
                l_945[i] = &g_485;
            for (i = 0; i < 7; i++)
                l_961[i] = &g_32;
            if (p_21)
                break;
        }
        for (g_195.f0 = 1; (g_195.f0 >= 0); g_195.f0 -= 1)
        { 
            for (l_827 = 1; (l_827 >= 0); l_827 -= 1)
            { 
                int32_t l_1117 = 0L;
                for (l_884 = 0; (l_884 <= 1); l_884 += 1)
                { 
                    uint32_t l_1104 = 0x36500D0EL;
                    int32_t **l_1105 = &l_775;
                    union U4 **l_1119 = &l_928[0];
                    (*g_334) = (((((***l_937) &= 8L) | p_21) > (safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_21, 10)), l_1104)), (**g_410)))) , ((*l_1105) = ((*g_389) = (void*)0)));
                    (*l_1119) = (((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((g_286.f3 = ((g_125.f4 = ((((*g_570) , l_1110[0][1][4]) != &g_559) != (((**g_634) , ((((safe_sub_func_int64_t_s_s(g_441[1].f0.f0, (safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(l_1117, 9)), l_1118)))) <= 0x6CL) > g_6) ^ 0xE359L)) , p_21))) || l_825)) <= p_21) , p_21), 0UL)), 0xC995L)) | p_21) , &l_927);
                }
                if (p_21)
                    break;
            }
        }
    }
    return l_1120;
}



static int8_t * func_23(union U3  p_24)
{ 
    int64_t * const l_557 = &g_286.f3;
    union U2 l_565[5][2][7] = {{{{0xDDBEL},{0x1635L},{0xA8A1L},{65535UL},{0x4951L},{0xDDBEL},{0x4C39L}},{{0x8708L},{65529UL},{65527UL},{0UL},{0x4C39L},{0x81F4L},{4UL}}},{{{0UL},{0xE7D7L},{0x44E0L},{0x2998L},{0x44E0L},{0xE7D7L},{0UL}},{{0UL},{65527UL},{0x8779L},{65529UL},{0xE7D7L},{0xC6F3L},{0x44E0L}}},{{{0x8708L},{0x4951L},{0UL},{4UL},{0xDDBEL},{5UL},{0x4951L}},{{0xDDBEL},{0x4C39L},{0x8779L},{65527UL},{0x183FL},{0xDDBEL},{0x183FL}}},{{{0UL},{0x44E0L},{0x44E0L},{0UL},{0x183FL},{0UL},{65529UL}},{{0UL},{0xE7D7L},{65527UL},{0xA8A1L},{0xDDBEL},{65534UL},{0UL}}},{{{65534UL},{0xDDBEL},{0xA8A1L},{65527UL},{0xE7D7L},{0UL},{65529UL}},{{0UL},{0x183FL},{0UL},{0x44E0L},{0x44E0L},{0UL},{0x183FL}}}};
    int32_t l_566 = 1L;
    uint64_t l_594 = 18446744073709551615UL;
    int16_t l_600 = 0L;
    int32_t l_614 = 0x625F87C6L;
    int32_t l_616 = 0x80752BE8L;
    int32_t l_618 = 1L;
    int32_t l_619 = (-10L);
    int32_t l_621 = 0x939E0C26L;
    int32_t l_622 = 0L;
    int32_t l_623 = 3L;
    int32_t l_624 = 0x25768797L;
    int32_t l_625 = 0x90B73829L;
    int32_t l_626 = 0x93BE806AL;
    int32_t l_627 = 4L;
    int32_t l_630 = 0x00E29C1DL;
    int32_t ** const *l_643 = &g_389;
    int32_t ** const **l_642 = &l_643;
    int16_t **l_653[7];
    int16_t ***l_652[2][1][5] = {{{(void*)0,(void*)0,&l_653[2],(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int16_t *** const *l_651 = &l_652[0][0][1];
    union U5 *l_665 = &g_61;
    union U5 **l_664 = &l_665;
    struct S0 l_670 = {0x2DL,0x2DCF2952L,0x0464L};
    const struct S0 *l_711[2][1];
    const struct S0 **l_710[2][4][1];
    const struct S0 ***l_709 = &l_710[0][3][0];
    uint8_t l_734 = 254UL;
    int8_t *l_762 = &g_6;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_653[i] = &g_230[2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_711[i][j] = &g_32;
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_710[i][j][k] = &l_711[0][0];
        }
    }
    for (g_119.f1 = 27; (g_119.f1 >= (-2)); g_119.f1--)
    { 
        const int32_t l_552 = 0x35984BFCL;
        int32_t l_598 = 0xB23D24B6L;
        int32_t l_613 = 0x73602F95L;
        int32_t l_615 = 0x6540F47EL;
        int32_t l_617[7] = {0L,1L,1L,0L,1L,1L,0L};
        const int32_t ***l_647 = &g_334;
        const int32_t ****l_646 = &l_647;
        int16_t ****l_655 = &l_652[0][0][1];
        int8_t l_689 = 0x25L;
        union U4 l_723[3][3][2] = {{{{{0x9EL,0L,0x2FE4L}},{{0xE8L,9L,1UL}}},{{{0xE8L,9L,1UL}},{{0x9EL,0L,0x2FE4L}}},{{{0x30L,-4L,0x8563L}},{{250UL,0L,0x2E8EL}}}},{{{{0x30L,-4L,0x8563L}},{{0x9EL,0L,0x2FE4L}}},{{{0xE8L,9L,1UL}},{{0xE8L,9L,1UL}}},{{{0x9EL,0L,0x2FE4L}},{{0x30L,-4L,0x8563L}}}},{{{{250UL,0L,0x2E8EL}},{{0x30L,-4L,0x8563L}}},{{{0x9EL,0L,0x2FE4L}},{{0xE8L,9L,1UL}}},{{{0xE8L,9L,1UL}},{{0x9EL,0L,0x2FE4L}}}}};
        struct S0 ***l_759 = &g_634;
        int i, j, k;
        if (p_24.f0)
        { 
            union U5 l_544[3] = {{65535UL},{65535UL},{65535UL}};
            int32_t l_574 = 1L;
            int i;
            for (g_328 = (-23); (g_328 == 42); g_328++)
            { 
                int32_t **l_550 = &g_390;
                int32_t **l_551 = (void*)0;
                int64_t *l_558 = &g_559;
                int32_t l_560 = 0x23FA103FL;
                const union U1 **l_573 = &g_572;
                if ((p_24.f0 | g_521.f0))
                { 
                    return (*g_410);
                }
                else
                { 
                    union U5 l_545 = {7UL};
                    int32_t **l_548[3][3][1];
                    int32_t ***l_549[3];
                    int64_t *l_553 = (void*)0;
                    int64_t *l_554 = &g_286.f3;
                    int32_t l_555 = 1L;
                    uint64_t *l_556 = &g_152;
                    union U5 **l_561 = (void*)0;
                    union U5 **l_562 = (void*)0;
                    union U5 *l_564 = &l_545;
                    union U5 **l_563 = &l_564;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_548[i][j][k] = &g_390;
                        }
                    }
                    for (i = 0; i < 3; i++)
                        l_549[i] = &g_389;
                    if (p_24.f1)
                        break;
                    l_560 &= (((((((*l_556) ^= (safe_sub_func_int8_t_s_s(0xA4L, (safe_sub_func_int16_t_s_s((((l_545 = l_544[2]) , ((*l_554) = (safe_mod_func_int64_t_s_s((((l_550 = l_548[0][2][0]) == l_551) , ((**l_550) ^= ((l_552 || p_24.f0) >= ((*g_281) &= (g_59[0][1][0] ^ 0L))))), p_24.f1)))) > g_61.f0), l_555))))) , p_24.f0) , l_557) == l_558) ^ l_544[2].f0) && 65535UL);
                    (*l_563) = &l_545;
                    l_566 = (l_565[2][1][4] , (p_24.f0 |= (**g_389)));
                    l_574 = (safe_rshift_func_uint16_t_u_s((g_569 == (l_573 = g_571)), (**g_487)));
                }
                return (*g_410);
            }
        }
        else
        { 
            uint8_t l_601 = 0xF8L;
            int32_t l_611 = (-1L);
            int32_t l_612[3];
            int32_t l_620 = 0x470CF4BDL;
            int8_t *l_637 = (void*)0;
            uint16_t *l_702[4][7] = {{&g_169[0],&g_169[0],&g_169[0],&g_169[0],&g_169[0],&g_169[0],&g_169[0]},{&g_61.f0,&g_169[0],&g_58,&g_169[0],&g_61.f0,(void*)0,&g_61.f0},{&g_169[0],&g_169[0],&g_169[0],&g_169[0],&g_169[0],&g_169[0],&g_169[0]},{&g_169[0],&g_169[0],&g_169[0],&g_58,&g_61.f0,&g_58,&g_169[0]}};
            uint16_t **l_701 = &l_702[1][2];
            int32_t *l_706 = &g_59[0][0][1];
            int8_t ***l_739 = &g_410;
            int16_t ***l_747 = &l_653[2];
            int i, j;
            for (i = 0; i < 3; i++)
                l_612[i] = (-1L);
            for (g_144 = 0; (g_144 <= 1); g_144 += 1)
            { 
                struct S0 l_577[2][6][3] = {{{{5UL,1L,0xC686L},{5UL,1L,0xC686L},{255UL,0x7AEBAA08L,0UL}},{{5UL,1L,0xC686L},{5UL,1L,0xC686L},{255UL,0x7AEBAA08L,0UL}},{{5UL,1L,0xC686L},{5UL,1L,0xC686L},{255UL,0x7AEBAA08L,0UL}},{{5UL,1L,0xC686L},{5UL,1L,0xC686L},{255UL,0x7AEBAA08L,0UL}},{{5UL,1L,0xC686L},{5UL,1L,0xC686L},{255UL,0x7AEBAA08L,0UL}},{{5UL,1L,0xC686L},{5UL,1L,0xC686L},{255UL,0x7AEBAA08L,0UL}}},{{{5UL,1L,0xC686L},{5UL,1L,0xC686L},{255UL,0x7AEBAA08L,0UL}},{{5UL,1L,0xC686L},{5UL,1L,0xC686L},{255UL,0x7AEBAA08L,0UL}},{{5UL,1L,0xC686L},{5UL,1L,0xC686L},{255UL,0x7AEBAA08L,0UL}},{{5UL,1L,0xC686L},{5UL,1L,0xC686L},{255UL,0x7AEBAA08L,0UL}},{{5UL,1L,0xC686L},{5UL,1L,0xC686L},{255UL,0x7AEBAA08L,0UL}},{{5UL,1L,0xC686L},{0xCAL,0xA3E357B4L,0x525DL},{5UL,1L,0xC686L}}}};
                int32_t l_607 = 0xB881E116L;
                int32_t l_608 = 0x3363C113L;
                int32_t l_609 = 0xDA058415L;
                int32_t l_610[1];
                int32_t l_628 = 2L;
                int64_t l_629 = (-4L);
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_610[i] = 1L;
                for (g_6 = 1; (g_6 >= 0); g_6 -= 1)
                { 
                    int8_t *l_599 = &g_54;
                    int32_t *l_602 = (void*)0;
                    int32_t *l_603 = &l_566;
                    int32_t *l_604 = &g_59[0][1][0];
                    int32_t *l_605 = &l_598;
                    int32_t *l_606[2][4][1];
                    uint8_t l_631 = 249UL;
                    struct S0 **l_636 = &g_29;
                    struct S0 ***l_635 = &l_636;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_606[i][j][k] = &g_132.f0;
                        }
                    }
                    (**g_389) = ((l_565[2][1][4].f2 <= ((safe_mod_func_uint64_t_u_u((l_577[1][0][0] , (((safe_mod_func_int8_t_s_s((l_566 &= ((safe_mul_func_uint8_t_u_u(0UL, (safe_sub_func_int8_t_s_s(((*l_599) |= ((l_598 |= ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int8_t_s((safe_mul_func_uint16_t_u_u(p_24.f1, (((safe_add_func_uint64_t_u_u((!((g_144 && l_594) <= (safe_div_func_int64_t_s_s(((!0x56L) < 0xF1L), 18446744073709551606UL)))), g_559)) , (**g_389)) | (*g_390)))))), 11)), (*g_281))) < p_24.f0)) != 0x70L)), l_600)))) | 1L)), p_24.f0)) , p_24.f0) != p_24.f0)), g_195.f2)) & l_601)) | 4UL);
                    l_631--;
                    p_24.f0 |= l_566;
                    (*l_635) = (g_634 = &g_29);
                }
                for (g_184 = 0; (g_184 <= 2); g_184 += 1)
                { 
                    return l_637;
                }
            }
            for (l_619 = 0; (l_619 <= 6); l_619 += 1)
            { 
                int32_t ** const ***l_644 = (void*)0;
                int32_t ** const ***l_645 = &l_642;
                union U6 l_650 = {0};
                int16_t *** const **l_654 = &l_651;
                uint32_t *l_656 = &l_565[2][1][4].f4;
                uint32_t *l_657 = &g_532.f4;
                union U1 l_708[3][7] = {{{-7L},{0x3B2B31A7272E9754LL},{0x3B2B31A7272E9754LL},{-7L},{0L},{-7L},{0x3B2B31A7272E9754LL}},{{0xD1EC4981B7E133D3LL},{0xD1EC4981B7E133D3LL},{0x3B2B31A7272E9754LL},{0xE21E4517782114B7LL},{0x3B2B31A7272E9754LL},{0xD1EC4981B7E133D3LL},{0xD1EC4981B7E133D3LL}},{{0xD1EC4981B7E133D3LL},{0x3B2B31A7272E9754LL},{0xE21E4517782114B7LL},{0x3B2B31A7272E9754LL},{0xD1EC4981B7E133D3LL},{0xD1EC4981B7E133D3LL},{0x3B2B31A7272E9754LL}}};
                int32_t l_733[6] = {0x96D63EDEL,0x96D63EDEL,0x286A8269L,0x96D63EDEL,0x96D63EDEL,0x286A8269L};
                int32_t l_760 = 0L;
                int i, j;
                if ((p_24.f0 = (l_617[l_619] ^ ((*l_657) = ((*l_656) = ((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((((*l_645) = l_642) == l_646), (((((safe_lshift_func_uint16_t_u_u(p_24.f0, p_24.f0)) != (l_650 , (((((*l_654) = l_651) != l_655) ^ (-6L)) | l_611))) && 0x1922F87FE105419DLL) >= 1UL) , p_24.f0))), p_24.f0)) , g_559))))))
                { 
                    (****l_642) &= ((safe_sub_func_uint16_t_u_u(p_24.f1, (safe_lshift_func_int8_t_s_s(p_24.f1, 6)))) > (l_654 == (void*)0));
                    return (*g_410);
                }
                else
                { 
                    int8_t *l_666 = &g_132.f1;
                    (**g_389) &= (p_24.f0 ^ (safe_mul_func_uint16_t_u_u((l_611 = (((*l_657) &= ((0xB6BA77CEAFDBAA0ELL && (0x7C155F2CL <= 0xA52F4C90L)) ^ ((*l_666) = ((void*)0 == l_664)))) && (safe_mul_func_int16_t_s_s((****l_646), (***l_647))))), 0x1FF1L)));
                    g_669 |= (*g_390);
                }
                for (l_630 = 0; (l_630 <= 1); l_630 += 1)
                { 
                    uint16_t *l_673 = &g_169[0];
                    union U1 **l_678 = (void*)0;
                    int32_t l_690 = 0x4FFD1D9BL;
                    int64_t *l_691 = &g_559;
                    int32_t *l_692 = &l_626;
                    uint16_t **l_703 = &l_702[1][2];
                    int i, j, k;
                    (*l_692) &= (l_670 , (safe_lshift_func_uint16_t_u_s(((*l_673)++), (safe_mul_func_uint8_t_u_u(((p_24.f0 && (((*g_390) = (p_24.f0 >= (l_678 == (void*)0))) & ((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((g_532.f0 && ((*l_691) ^= (safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((((((safe_sub_func_int16_t_s_s(l_689, l_690)) > p_24.f0) != p_24.f1) | 0x156D78D86CC52AD2LL) != 0x82CEL), 6)) , 0x4D45L), p_24.f0)))) || 0x89766F2CL), p_24.f0)), (****l_646))) , l_690))) != (****l_646)), 0xC7L)))));
                    (**g_389) &= ((safe_rshift_func_uint16_t_u_u((((*g_279) & ((((safe_div_func_int64_t_s_s(p_24.f0, ((!((((l_703 = (l_701 = g_700)) == (void*)0) | (((safe_add_func_uint64_t_u_u(((l_613 ^= g_132.f1) == (0UL > 3UL)), g_144)) <= (*l_692)) == (*l_692))) > (*g_53))) & 9L))) | 0x1EB3F07EL) != 5UL) & 0x0AL)) , p_24.f0), 15)) != p_24.f0);
                }
                for (l_625 = 1; (l_625 >= 0); l_625 -= 1)
                { 
                    uint64_t l_707 = 1UL;
                    uint64_t *l_712 = &g_152;
                    int32_t ****l_724 = &g_388[0][0][5];
                    int32_t *l_725 = &l_626;
                    int32_t *l_726 = &l_566;
                    int32_t *l_727 = &l_621;
                    int32_t *l_728 = &l_627;
                    int32_t *l_729 = (void*)0;
                    int32_t *l_730 = &l_622;
                    int32_t *l_731 = &l_626;
                    int32_t *l_732[4] = {&l_617[l_619],&l_617[l_619],&l_617[l_619],&l_617[l_619]};
                    struct S0 ***l_758 = &g_634;
                    struct S0 ****l_757 = &l_758;
                    int8_t *l_761[4][7] = {{(void*)0,&l_689,&l_689,&g_54,&l_689,&l_689,(void*)0},{&l_689,&g_119.f1,&l_689,&l_689,&g_119.f1,&l_689,&l_689},{(void*)0,&g_54,&g_132.f1,&g_54,(void*)0,&g_119.f1,(void*)0},{&g_119.f1,&l_689,&l_689,&g_119.f1,&l_689,&l_689,&g_119.f1}};
                    int i, j;
                    (***l_646) = (*g_334);
                    l_706 = ((***l_642) = &l_598);
                    (**l_645) = (((l_707 = 8L) , l_708[2][1]) , ((*l_724) = (((((l_650 , (void*)0) != (g_532 , l_709)) | (++(*l_712))) && (safe_unary_minus_func_int32_t_s((+(safe_add_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((safe_div_func_int64_t_s_s((((((l_723[2][2][1] , (void*)0) == (void*)0) == l_707) & (**g_410)) ^ p_24.f0), (*l_706))), p_24.f0)) && (*l_706)), g_59[0][1][0])))))) , &g_389)));
                    l_734--;
                    (*l_726) ^= (((safe_rshift_func_uint8_t_u_s(((-10L) > (((g_740[0][0] = l_739) == ((l_612[1] ^= ((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((**g_389) == (*g_335)), (safe_mul_func_int8_t_s_s((l_747 != ((*l_655) = (*l_655))), ((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((l_624 = (safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s((((*l_757) = &g_634) == l_759), p_24.f1)), (****l_646)))))), p_24.f0)), (-1L))) , 0xDCL))))), l_760)) >= p_24.f0)) , &g_410)) || 249UL)), p_24.f0)) , (***l_647)) == 0xEB1CAA083280529FLL);
                }
            }
            return (**l_739);
        }
    }
    return l_762;
}



static union U3  func_25(int8_t * p_26)
{ 
    struct S0 *l_31 = &g_32;
    int32_t *l_33[1];
    const union U5 l_52 = {0x28C4L};
    uint8_t *l_55[4][6] = {{&g_56,&g_56,&g_56,&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56,&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56,&g_56,&g_56,&g_56},{&g_56,&g_56,&g_56,&g_56,&g_56,&g_56}};
    uint16_t *l_57[6] = {&g_58,&g_58,&g_58,&g_58,&g_58,&g_58};
    uint32_t l_534 = 18446744073709551611UL;
    union U3 l_535 = {0x694593FDL};
    int i, j;
    for (i = 0; i < 1; i++)
        l_33[i] = &g_34;
    l_31 = g_29;
    g_35--;
    l_534 |= func_38(((*p_26) = (*p_26)), ((g_60[3][4] |= (g_34 = (safe_div_func_uint8_t_u_u(g_30.f1, (g_54 = (((g_35 ^ (safe_lshift_func_int16_t_s_s(((g_59[0][1][0] = (safe_mul_func_uint16_t_u_u(((g_56 = (((((safe_add_func_int32_t_s_s((g_2 ^ 0x5ADF6F6D77974D37LL), (1UL < (safe_lshift_func_uint8_t_u_u(((l_52 , p_26) != g_53), 1))))) , (*g_53)) < (*g_53)) >= 0x8BD61C064292628FLL) != g_32.f2)) ^ (-7L)), g_34))) >= g_32.f0), g_30.f1))) <= 247UL) , (*g_53))))))) , g_59[0][1][0]), g_61);
    return l_535;
}



static int32_t  func_38(int8_t  p_39, uint16_t  p_40, union U5  p_41)
{ 
    union U6 l_68 = {0};
    int32_t l_69 = (-1L);
    int8_t *l_70[5] = {&g_54,&g_54,&g_54,&g_54,&g_54};
    union U2 l_73 = {0xE241L};
    int32_t l_81 = 0xE7740573L;
    int32_t l_82[2];
    int32_t l_83 = (-10L);
    int32_t *l_84 = &g_34;
    int8_t **l_103 = &l_70[0];
    int8_t ***l_102 = &l_103;
    uint32_t l_110 = 1UL;
    union U1 l_128 = {0xDA9CF794CBFBA9A8LL};
    union U3 *l_129 = &g_119;
    int64_t l_133 = 0xF821FC279311A1F4LL;
    int8_t l_326 = 0xC1L;
    uint64_t l_358 = 0xFD6C4037D3CC4FADLL;
    int32_t **l_387 = (void*)0;
    int32_t ***l_386[2][4][1];
    int8_t **l_412 = &l_70[0];
    union U5 l_452 = {0xBD50L};
    uint32_t l_479 = 18446744073709551612UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_82[i] = (-7L);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_386[i][j][k] = &l_387;
        }
    }
lbl_101:
    (*l_84) &= (safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s((p_40 , (safe_div_func_uint64_t_u_u((l_68 , ((p_39 = l_69) < p_40)), ((l_83 |= (l_82[1] = ((safe_rshift_func_uint8_t_u_s((l_73 , (~(l_81 = ((safe_div_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s(1L, 3)) || (safe_div_func_int64_t_s_s((0x8CC2L || p_40), p_41.f0))) < p_41.f0), g_58)) < 1L)))), p_41.f0)) & 1L))) | p_40)))), l_69)) || g_60[1][0]), 0x6F706C0A8DCCB677LL));
    for (g_54 = 14; (g_54 == (-4)); g_54--)
    { 
        uint16_t *l_97 = (void*)0;
        int32_t l_100 = 0x05A18A5CL;
        int32_t l_106 = 0x01F1F586L;
        int32_t l_107[6][5][3] = {{{0x8ECB2A78L,(-1L),(-1L)},{0x1D2751B8L,0x9DB8D8D3L,0xF87C28FDL},{(-1L),(-1L),(-1L)},{0x2E33F915L,0x9DB8D8D3L,0x9DB8D8D3L},{0L,(-1L),(-2L)}},{{(-3L),0x9DB8D8D3L,(-10L)},{0x8ECB2A78L,(-1L),(-1L)},{0x1D2751B8L,0x9DB8D8D3L,0xF87C28FDL},{(-1L),(-1L),(-1L)},{0x2E33F915L,0x9DB8D8D3L,0x9DB8D8D3L}},{{0L,(-1L),(-2L)},{(-3L),0x9DB8D8D3L,(-10L)},{0x8ECB2A78L,(-1L),(-1L)},{0x1D2751B8L,0x9DB8D8D3L,0xF87C28FDL},{(-1L),(-1L),(-1L)}},{{0x2E33F915L,0x9DB8D8D3L,0x9DB8D8D3L},{0L,(-1L),(-2L)},{(-3L),0x9DB8D8D3L,(-10L)},{0x8ECB2A78L,(-1L),(-1L)},{0x1D2751B8L,0x9DB8D8D3L,0xF87C28FDL}},{{(-1L),(-1L),(-1L)},{0x2E33F915L,0x9DB8D8D3L,0x9DB8D8D3L},{0L,(-1L),(-2L)},{(-3L),0x9DB8D8D3L,(-10L)},{0x8ECB2A78L,(-1L),(-1L)}},{{0x1D2751B8L,0x9DB8D8D3L,0xF87C28FDL},{(-1L),(-1L),(-1L)},{0x2E33F915L,0x9DB8D8D3L,0x9DB8D8D3L},{0L,(-1L),(-2L)},{(-3L),0x9DB8D8D3L,(-10L)}}};
        int64_t l_108 = 0x81B6975085CE8A8DLL;
        union U2 l_113 = {65533UL};
        union U3 *l_118 = &g_119;
        int8_t **l_174 = &l_70[0];
        union U1 l_213 = {-3L};
        int32_t *l_214 = (void*)0;
        int64_t *l_229 = &l_108;
        uint32_t l_251[4][1];
        uint8_t **l_282 = &g_281;
        uint32_t l_283[5] = {2UL,2UL,2UL,2UL,2UL};
        int32_t *l_375 = &l_82[1];
        int32_t **l_376 = &l_84;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_251[i][j] = 0xF916B465L;
        }
    }
    for (g_58 = 0; (g_58 <= 4); g_58 += 1)
    { 
        uint64_t l_381 = 18446744073709551615UL;
        int32_t ****l_391 = &g_388[0][1][5];
        union U3 l_394 = {-1L};
        int16_t *l_400 = &g_231[2];
        const uint32_t l_409 = 0x6807E973L;
        int32_t l_415 = (-9L);
        int32_t l_416 = 0xB2E0C9D0L;
        int32_t l_417 = 0x738B0548L;
        int32_t l_418 = 1L;
        int32_t l_419 = 0L;
        int32_t l_420 = 1L;
        int32_t l_421[3];
        int16_t l_422 = 0xC796L;
        uint16_t l_423[7][3] = {{0x5AB7L,0x5AB7L,0xE8C3L},{0xCCECL,0xCCECL,1UL},{0x5AB7L,0x5AB7L,0xE8C3L},{0xCCECL,0xCCECL,1UL},{0x5AB7L,0x5AB7L,0xE8C3L},{0xCCECL,0xCCECL,1UL},{0x5AB7L,0x5AB7L,0xE8C3L}};
        uint32_t l_433 = 1UL;
        int32_t l_461[3];
        union U5 *l_483[7];
        union U5 **l_482 = &l_483[1];
        uint16_t l_498 = 1UL;
        union U1 *l_501 = (void*)0;
        uint32_t l_528 = 0xC9F3712DL;
        union U2 *l_531[3][3] = {{&g_532,&g_532,&g_532},{&l_73,&l_73,&l_73},{&g_532,&g_532,&g_532}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_421[i] = 0L;
        for (i = 0; i < 3; i++)
            l_461[i] = 0x1A90566DL;
        for (i = 0; i < 7; i++)
            l_483[i] = &l_452;
        for (l_326 = 0; (l_326 <= 4); l_326 += 1)
        { 
            int32_t *l_377 = &l_69;
            int32_t *l_378 = &l_83;
            int32_t *l_379 = &g_59[0][0][0];
            int32_t *l_380[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j;
            l_381++;
            if (g_60[g_58][g_58])
                break;
        }
        if (((safe_sub_func_int32_t_s_s((l_386[1][1][0] != ((*l_391) = g_388[0][1][5])), (g_109 |= ((safe_mul_func_int8_t_s_s((l_394 , (((!((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((g_195 , ((((void*)0 != l_400) & (safe_mod_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((p_41.f0 && 0xF2031ABCB7791EFCLL) || l_394.f1) || g_2) && p_41.f0), 9L)), p_40)), 0x760F33F8F73E7C08LL)) > 0UL), l_409))) , (*l_84))), p_41.f0)), p_40)) | (**g_280))) ^ p_39) > p_39)), 0xF3L)) ^ (*g_390))))) != p_39))
        { 
            int32_t *l_413 = &g_59[0][0][1];
            int32_t l_414[2][5][2] = {{{0x4E1B4455L,0L},{0x4E1B4455L,0L},{0x4E1B4455L,0L},{0x4E1B4455L,0L},{0x4E1B4455L,0L}},{{0x4E1B4455L,0L},{0x4E1B4455L,0L},{0x4E1B4455L,0L},{0x4E1B4455L,0L},{0x4E1B4455L,0L}}};
            int i, j, k;
            (*l_84) ^= (1UL <= (((*l_102) = g_410) == (l_412 = &l_70[2])));
            (*g_334) = l_413;
            (*l_84) = 0xB2EFBE02L;
            l_423[3][0]++;
        }
        else
        { 
            uint32_t l_431 = 0x250AC2C4L;
            int32_t l_432 = 0x9E07706AL;
            const int32_t **l_453 = &g_335;
            int32_t l_454 = 0xD21EDE68L;
            int32_t l_455 = 0L;
            int32_t l_456 = 0x996F1CAEL;
            int32_t l_457 = 2L;
            int32_t l_458 = (-3L);
            int32_t l_459[3][2] = {{(-2L),(-2L)},{0x9368918BL,(-2L)},{(-2L),0x9368918BL}};
            int32_t l_460[4][3] = {{0x239FA331L,(-1L),0xBAF34505L},{0x239FA331L,0x239FA331L,(-1L)},{0xFCCB8EF8L,(-1L),(-1L)},{(-1L),(-1L),0xBAF34505L}};
            int16_t l_462 = (-8L);
            uint16_t l_476 = 65531UL;
            int i, j;
            for (l_381 = 0; (l_381 <= 2); l_381 += 1)
            { 
                union U3 l_426 = {0x8BE36C76L};
                int i, j;
                for (g_195.f3 = 0; (g_195.f3 <= 2); g_195.f3 += 1)
                { 
                    int i, j;
                    if (g_60[(g_58 + 1)][g_58])
                        break;
                }
                l_432 |= ((-4L) && ((((g_60[(g_58 + 1)][g_58] == (((g_231[l_381] == 0xE52EA2F4BB151787LL) <= l_423[g_58][l_381]) , ((l_426 , (safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(l_431, l_426.f0)) < 65533UL), (****l_391)))) == 65535UL))) == l_426.f1) , l_394) , p_39));
                --l_433;
            }
            l_432 = ((safe_sub_func_uint16_t_u_u(0xFE76L, ((*l_400) = (!((***l_102) = (safe_mul_func_int8_t_s_s((-1L), (g_441[1] , ((18446744073709551608UL & ((g_58 <= l_431) || (safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((****l_391) = (safe_mod_func_int64_t_s_s((safe_div_func_int8_t_s_s(((l_452 , (**l_391)) == l_453), (**l_453))), p_39))), g_144)), p_41.f0)) && 0UL), (*g_281))))) <= p_39))))))))) , (*g_390));
            --g_463;
            if (l_409)
                goto lbl_101;
            for (l_457 = 2; (l_457 >= 0); l_457 -= 1)
            { 
                int16_t l_466 = 0x3DCFL;
                int32_t l_467 = 2L;
                int32_t l_468 = 0x86DAC185L;
                int32_t l_469 = (-5L);
                uint64_t l_470 = 0x739BD94AD671444BLL;
                ++l_470;
                for (g_195.f0 = 0; (g_195.f0 <= 2); g_195.f0 += 1)
                { 
                    union U1 *l_474 = &l_128;
                    union U1 **l_473 = &l_474;
                    int32_t l_475[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_475[i] = 0xA207C7E1L;
                    (*l_473) = &g_195;
                    --l_476;
                }
            }
        }
        --l_479;
        (*l_482) = &p_41;
        (**g_389) = 0x46880525L;
        for (g_195.f3 = 0; (g_195.f3 <= 2); g_195.f3 += 1)
        { 
            uint16_t l_497 = 7UL;
            union U3 l_503 = {0xEB96C8FDL};
            const struct S0 *l_520 = &g_521;
            const struct S0 *l_524 = &g_525;
            union U2 *l_529[6][5] = {{&g_125,&l_73,&g_125,&l_73,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125},{&g_125,(void*)0,&g_485,&l_73,&g_485},{&g_125,&g_125,&g_125,&g_125,&g_125},{&g_485,&l_73,&g_485,(void*)0,&g_125},{&g_125,&g_125,&g_125,&g_125,&g_125}};
            int i, j;
            for (g_328 = 0; (g_328 <= 4); g_328 += 1)
            { 
                union U2 l_493 = {0xD2DDL};
                int8_t ** const *l_494 = &g_410;
                int8_t ** const **l_495 = &l_494;
                int32_t l_496 = 9L;
                int64_t l_505[6] = {0x0829D7028C76D6D4LL,0x0829D7028C76D6D4LL,0L,0x0829D7028C76D6D4LL,0x0829D7028C76D6D4LL,0L};
                int i;
                for (g_144 = 0; (g_144 <= 2); g_144 += 1)
                { 
                    union U2 *l_484 = &g_485;
                    int16_t * const ***l_488 = &g_486;
                    int i, j;
                    l_484 = &g_125;
                    if (g_60[(g_328 + 1)][g_328])
                        continue;
                    (*l_84) = (g_60[g_58][(g_144 + 2)] | g_231[g_144]);
                    (*l_488) = g_486;
                }
            }
        }
    }
    return p_39;
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
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
    transparent_crc(g_30.f2, "g_30.f2", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
    transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_59[i][j][k], "g_59[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_60[i][j], "g_60[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_125.f0, "g_125.f0", print_hash_value);
    transparent_crc(g_125.f2, "g_125.f2", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1, "g_132.f1", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);

    }
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_195.f0, "g_195.f0", print_hash_value);
    transparent_crc(g_195.f1, "g_195.f1", print_hash_value);
    transparent_crc(g_195.f2, "g_195.f2", print_hash_value);
    transparent_crc(g_195.f3, "g_195.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_231[i], "g_231[i]", print_hash_value);

    }
    transparent_crc(g_328, "g_328", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_441[i].f0.f0, "g_441[i].f0.f0", print_hash_value);
        transparent_crc(g_441[i].f0.f1, "g_441[i].f0.f1", print_hash_value);
        transparent_crc(g_441[i].f0.f2, "g_441[i].f0.f2", print_hash_value);

    }
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_485.f0, "g_485.f0", print_hash_value);
    transparent_crc(g_485.f2, "g_485.f2", print_hash_value);
    transparent_crc(g_521.f0, "g_521.f0", print_hash_value);
    transparent_crc(g_521.f1, "g_521.f1", print_hash_value);
    transparent_crc(g_521.f2, "g_521.f2", print_hash_value);
    transparent_crc(g_525.f0, "g_525.f0", print_hash_value);
    transparent_crc(g_525.f1, "g_525.f1", print_hash_value);
    transparent_crc(g_525.f2, "g_525.f2", print_hash_value);
    transparent_crc(g_532.f0, "g_532.f0", print_hash_value);
    transparent_crc(g_532.f2, "g_532.f2", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_929[i].f0.f0, "g_929[i].f0.f0", print_hash_value);
        transparent_crc(g_929[i].f0.f1, "g_929[i].f0.f1", print_hash_value);
        transparent_crc(g_929[i].f0.f2, "g_929[i].f0.f2", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_972[i][j][k], "g_972[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1064.f0, "g_1064.f0", print_hash_value);
    transparent_crc(g_1064.f1, "g_1064.f1", print_hash_value);
    transparent_crc(g_1162.f0.f0, "g_1162.f0.f0", print_hash_value);
    transparent_crc(g_1162.f0.f1, "g_1162.f0.f1", print_hash_value);
    transparent_crc(g_1162.f0.f2, "g_1162.f0.f2", print_hash_value);
    transparent_crc(g_1238, "g_1238", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1278[i], "g_1278[i]", print_hash_value);

    }
    transparent_crc(g_1373.f0.f0, "g_1373.f0.f0", print_hash_value);
    transparent_crc(g_1373.f0.f1, "g_1373.f0.f1", print_hash_value);
    transparent_crc(g_1373.f0.f2, "g_1373.f0.f2", print_hash_value);
    transparent_crc(g_1419, "g_1419", print_hash_value);
    transparent_crc(g_1592, "g_1592", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
