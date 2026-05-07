// SPDX-License-Identifier: MIT
// cctest_csmith_2b99ca4b.c --- cctest case csmith_2b99ca4b (csmith seed 731499083)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5bbd1490 */

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

// Options:   -s 731499083 -o /tmp/csmith_gen_etjl43sw/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int16_t  f1;
   uint64_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   const unsigned f0 : 2;
   unsigned f1 : 19;
   int64_t  f2;
   uint64_t  f3;
   unsigned f4 : 1;
};
#pragma pack(pop)

union U2 {
   const int16_t  f0;
   signed f1 : 14;
};


static uint16_t g_5 = 0xC502L;
static int64_t g_16[1][6][2] = {{{0x94BE3D0E72EE72C3LL,0x0A0CD95FF79FACD4LL},{0x0A0CD95FF79FACD4LL,0x94BE3D0E72EE72C3LL},{0x0A0CD95FF79FACD4LL,0x0A0CD95FF79FACD4LL},{0x94BE3D0E72EE72C3LL,0x0A0CD95FF79FACD4LL},{0x0A0CD95FF79FACD4LL,0x94BE3D0E72EE72C3LL},{0x0A0CD95FF79FACD4LL,0x0A0CD95FF79FACD4LL}}};
static int32_t g_29 = (-1L);
static int32_t g_32[7][6] = {{(-2L),0x0EB1F0CFL,8L,0xA4182467L,1L,1L},{0x7D552B89L,1L,1L,0x7D552B89L,5L,0xA4182467L},{1L,0x576DBD8DL,(-3L),0x3439FCB6L,1L,8L},{(-3L),(-2L),(-6L),0x0EB1F0CFL,1L,0x0EB1F0CFL},{0L,0x576DBD8DL,0L,0xA7C3387DL,5L,(-2L)},{0xA4182467L,1L,1L,8L,0xA7C3387DL,0x576DBD8DL},{0x7D552B89L,(-2L),(-1L),1L,1L,(-1L)}};
static int32_t g_35 = 2L;
static uint8_t g_54 = 0UL;
static int32_t g_64 = 0x059E6156L;
static uint32_t g_72 = 0x8CEE692DL;
static struct S1 *g_82 = (void*)0;
static struct S1 g_85 = {1,440,0x0438810CA98D253DLL,0x9127F4FEF511E78CLL,0};
static int8_t g_91 = 0x1EL;
static uint32_t g_92[3][4] = {{4294967295UL,4294967294UL,4294967295UL,4294967295UL},{4294967294UL,4294967294UL,1UL,4294967294UL},{4294967294UL,4294967295UL,4294967295UL,4294967294UL}};
static uint8_t g_119[7][3] = {{0x78L,0xA0L,0x78L},{0x78L,0xA0L,0x78L},{0x78L,0xA0L,0x78L},{0x78L,0xA0L,0x78L},{0x78L,0xA0L,0x78L},{0x78L,0xA0L,0x78L},{0x78L,0xA0L,0x78L}};
static struct S0 g_126 = {0xA7A6L,0L,18446744073709551609UL};
static union U2 g_131 = {-9L};
static int64_t g_140[6] = {(-5L),0L,(-5L),(-5L),0L,(-5L)};
static int32_t g_141[7] = {1L,1L,1L,1L,1L,1L,1L};
static int32_t *g_182 = &g_141[2];
static uint32_t g_197 = 0x77A6A502L;
static uint16_t *g_205 = &g_5;
static uint16_t **g_204 = &g_205;
static int64_t *g_229 = &g_85.f2;
static int64_t **g_228 = &g_229;
static int32_t g_326 = 9L;
static int32_t g_404[3] = {0xAE7A5605L,0xAE7A5605L,0xAE7A5605L};
static uint16_t g_461 = 4UL;
static union U2 **g_532[1] = {(void*)0};
static int8_t g_597[3][3][1] = {{{1L},{0xCFL},{1L}},{{1L},{0xCFL},{1L}},{{1L},{0xCFL},{1L}}};
static const union U2 ** const *g_641 = (void*)0;
static struct S1 g_645 = {1,423,0x5AEB7F2B80DB6B87LL,6UL,0};
static struct S0 * const g_708 = &g_126;
static struct S0 * const *g_707 = &g_708;
static struct S1 **g_722 = &g_82;
static struct S1 ***g_721[1] = {&g_722};
static struct S0 g_725 = {0xC93CL,0x4BF4L,0UL};
static struct S0 *g_811 = &g_126;
static struct S0 **g_810[2][6][2] = {{{&g_811,(void*)0},{(void*)0,&g_811},{(void*)0,(void*)0},{&g_811,(void*)0},{(void*)0,&g_811},{(void*)0,(void*)0}},{{&g_811,(void*)0},{(void*)0,&g_811},{(void*)0,(void*)0},{&g_811,(void*)0},{(void*)0,&g_811},{(void*)0,(void*)0}}};
static struct S0 ***g_809 = &g_810[0][0][0];
static uint8_t g_928[3][6][4] = {{{0xDAL,0xF7L,0xDAL,0xBAL},{0xDAL,0xBAL,0xBAL,0xDAL},{3UL,0xBAL,0x02L,0xBAL},{0xBAL,0xF7L,0x02L,0x02L},{3UL,3UL,0xBAL,0x02L},{0xDAL,0xF7L,0xDAL,0xBAL}},{{0xDAL,0xBAL,0xBAL,0xDAL},{3UL,0xBAL,0x02L,0xBAL},{0xBAL,0xF7L,0x02L,0x02L},{3UL,3UL,0xBAL,0x02L},{0xDAL,0xF7L,0xDAL,0xBAL},{0xDAL,0xBAL,0xBAL,0xDAL}},{{3UL,0xBAL,0x02L,0xBAL},{0xBAL,0xF7L,0x02L,0x02L},{3UL,3UL,0xBAL,0x02L},{0xDAL,0xF7L,0xDAL,0xBAL},{0xDAL,0xBAL,0xBAL,0xDAL},{3UL,0xBAL,0x02L,0xBAL}}};
static int32_t g_941 = 8L;
static struct S1 * const *g_986 = &g_82;
static struct S1 * const **g_985 = &g_986;
static uint32_t * const g_1022 = &g_92[0][3];
static uint32_t * const *g_1021 = &g_1022;
static int8_t g_1066 = 0x39L;
static struct S0 * const * const *g_1149 = &g_707;
static struct S0 * const * const **g_1148 = &g_1149;
static struct S1 * const **g_1151[7] = {&g_986,&g_986,&g_986,&g_986,&g_986,&g_986,&g_986};
static int32_t g_1197 = 0xF5742774L;
static struct S1 * const ***g_1286 = &g_1151[5];
static struct S1 * const ****g_1285[6][5][7] = {{{&g_1286,&g_1286,&g_1286,(void*)0,&g_1286,&g_1286,&g_1286},{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,(void*)0},{&g_1286,&g_1286,&g_1286,(void*)0,(void*)0,&g_1286,&g_1286},{&g_1286,(void*)0,&g_1286,&g_1286,&g_1286,&g_1286,(void*)0},{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286}},{{(void*)0,&g_1286,&g_1286,(void*)0,(void*)0,&g_1286,&g_1286},{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286},{&g_1286,&g_1286,&g_1286,(void*)0,(void*)0,&g_1286,(void*)0},{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,(void*)0,&g_1286},{&g_1286,&g_1286,(void*)0,&g_1286,&g_1286,&g_1286,(void*)0}},{{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,(void*)0},{(void*)0,&g_1286,&g_1286,&g_1286,(void*)0,&g_1286,&g_1286},{(void*)0,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286},{&g_1286,(void*)0,(void*)0,&g_1286,&g_1286,&g_1286,&g_1286},{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286}},{{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286},{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286},{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286},{(void*)0,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,(void*)0},{&g_1286,&g_1286,(void*)0,&g_1286,&g_1286,&g_1286,(void*)0}},{{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286},{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,(void*)0},{&g_1286,&g_1286,(void*)0,&g_1286,&g_1286,&g_1286,&g_1286},{&g_1286,&g_1286,(void*)0,&g_1286,&g_1286,&g_1286,&g_1286},{(void*)0,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286}},{{&g_1286,(void*)0,&g_1286,&g_1286,&g_1286,&g_1286,(void*)0},{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286},{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,(void*)0,(void*)0},{&g_1286,(void*)0,(void*)0,&g_1286,&g_1286,&g_1286,&g_1286},{&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286,&g_1286}}};
static const uint16_t *g_1292 = (void*)0;
static const uint16_t **g_1291 = &g_1292;
static const uint16_t ***g_1290[1] = {&g_1291};
static uint16_t g_1338 = 1UL;
static int64_t * const *g_1347 = &g_229;
static int64_t * const **g_1346[3][1][5] = {{{&g_1347,&g_1347,&g_1347,&g_1347,&g_1347}},{{&g_1347,&g_1347,&g_1347,&g_1347,&g_1347}},{{&g_1347,&g_1347,&g_1347,&g_1347,&g_1347}}};
static int64_t * const ***g_1345 = &g_1346[2][0][4];
static int64_t ***g_1509 = &g_228;
static int64_t ****g_1508 = &g_1509;
static const struct S1 g_1552 = {0,64,0x8B5D2B35CC5249DFLL,0x7FB120BE50E091EDLL,0};
static const struct S1 *g_1551 = &g_1552;
static const struct S1 g_1565 = {1,40,1L,0UL,0};
static uint32_t *g_1582 = &g_92[1][3];
static uint32_t **g_1581 = &g_1582;
static uint32_t ***g_1580 = &g_1581;
static uint32_t ***g_1584 = &g_1581;
static int32_t g_1593 = 1L;
static int64_t *****g_1660 = &g_1508;
static struct S0 ****g_1820[5][7][7] = {{{&g_809,&g_809,&g_809,&g_809,(void*)0,(void*)0,&g_809},{&g_809,&g_809,&g_809,&g_809,(void*)0,&g_809,(void*)0},{&g_809,&g_809,&g_809,&g_809,&g_809,&g_809,&g_809},{(void*)0,&g_809,(void*)0,(void*)0,&g_809,&g_809,&g_809},{&g_809,&g_809,&g_809,(void*)0,(void*)0,&g_809,&g_809},{&g_809,(void*)0,&g_809,&g_809,&g_809,&g_809,&g_809},{&g_809,(void*)0,&g_809,&g_809,&g_809,&g_809,&g_809}},{{&g_809,&g_809,&g_809,&g_809,&g_809,&g_809,&g_809},{&g_809,&g_809,&g_809,&g_809,&g_809,(void*)0,&g_809},{(void*)0,&g_809,&g_809,(void*)0,&g_809,&g_809,&g_809},{&g_809,&g_809,&g_809,(void*)0,&g_809,(void*)0,&g_809},{&g_809,&g_809,&g_809,&g_809,(void*)0,&g_809,&g_809},{(void*)0,&g_809,(void*)0,&g_809,&g_809,&g_809,&g_809},{&g_809,(void*)0,&g_809,(void*)0,&g_809,&g_809,&g_809}},{{(void*)0,(void*)0,&g_809,(void*)0,&g_809,&g_809,&g_809},{&g_809,&g_809,&g_809,&g_809,&g_809,(void*)0,&g_809},{(void*)0,&g_809,&g_809,&g_809,(void*)0,&g_809,&g_809},{&g_809,(void*)0,&g_809,(void*)0,&g_809,(void*)0,&g_809},{(void*)0,&g_809,&g_809,(void*)0,&g_809,(void*)0,&g_809},{&g_809,&g_809,&g_809,&g_809,&g_809,&g_809,(void*)0},{(void*)0,&g_809,&g_809,&g_809,&g_809,&g_809,&g_809}},{{&g_809,&g_809,&g_809,&g_809,&g_809,&g_809,(void*)0},{(void*)0,&g_809,&g_809,&g_809,&g_809,&g_809,&g_809},{&g_809,(void*)0,&g_809,(void*)0,(void*)0,&g_809,&g_809},{&g_809,&g_809,(void*)0,(void*)0,&g_809,&g_809,&g_809},{&g_809,&g_809,&g_809,&g_809,&g_809,&g_809,&g_809},{(void*)0,&g_809,&g_809,&g_809,(void*)0,&g_809,&g_809},{&g_809,(void*)0,&g_809,&g_809,&g_809,(void*)0,&g_809}},{{(void*)0,&g_809,(void*)0,&g_809,(void*)0,&g_809,&g_809},{&g_809,(void*)0,&g_809,(void*)0,&g_809,&g_809,&g_809},{&g_809,&g_809,(void*)0,&g_809,&g_809,&g_809,&g_809},{&g_809,&g_809,&g_809,&g_809,(void*)0,(void*)0,(void*)0},{&g_809,&g_809,&g_809,(void*)0,&g_809,(void*)0,(void*)0},{(void*)0,&g_809,&g_809,(void*)0,(void*)0,&g_809,&g_809},{&g_809,&g_809,(void*)0,&g_809,(void*)0,&g_809,&g_809}}};
static struct S0 **** const *g_1819 = &g_1820[4][3][6];
static int16_t *g_1842 = (void*)0;
static const union U2 **** const *g_2066 = (void*)0;
static int16_t g_2091[2][4] = {{1L,1L,1L,1L},{1L,1L,1L,1L}};
static int32_t g_2105 = 0x57A5C46AL;
static int16_t **g_2179 = &g_1842;
static int16_t ** const *g_2178[7][2] = {{&g_2179,&g_2179},{&g_2179,&g_2179},{&g_2179,&g_2179},{&g_2179,&g_2179},{&g_2179,&g_2179},{&g_2179,&g_2179},{&g_2179,&g_2179}};
static uint32_t ***** const g_2283[2] = {(void*)0,(void*)0};
static uint32_t g_2333 = 18446744073709551615UL;
static uint64_t *g_2411 = &g_126.f2;
static uint64_t **g_2410 = &g_2411;
static uint16_t g_2421 = 0UL;
static int32_t g_2491[1] = {2L};
static uint32_t ****g_2532 = &g_1584;
static uint32_t **** const *g_2531[4] = {&g_2532,&g_2532,&g_2532,&g_2532};
static uint32_t g_2600[7] = {0xF045300EL,0xF045300EL,0xF045300EL,0xF045300EL,0xF045300EL,0xF045300EL,0xF045300EL};
static uint8_t *g_2606 = (void*)0;
static uint8_t **g_2605 = &g_2606;
static struct S1 g_2624 = {0,392,0xC21B159FEECF4AF0LL,0x230D08B4BF6FE09CLL,0};
static struct S1 g_2631[1][3][5] = {{{{1,226,0L,18446744073709551610UL,0},{1,226,0L,18446744073709551610UL,0},{1,226,0L,18446744073709551610UL,0},{1,226,0L,18446744073709551610UL,0},{1,226,0L,18446744073709551610UL,0}},{{0,668,0L,18446744073709551607UL,0},{0,668,0L,18446744073709551607UL,0},{0,668,0L,18446744073709551607UL,0},{0,668,0L,18446744073709551607UL,0},{0,668,0L,18446744073709551607UL,0}},{{1,226,0L,18446744073709551610UL,0},{1,226,0L,18446744073709551610UL,0},{1,226,0L,18446744073709551610UL,0},{1,226,0L,18446744073709551610UL,0},{1,226,0L,18446744073709551610UL,0}}}};
static uint16_t g_2755 = 0xDC92L;
static const int16_t g_2821 = 3L;
static int32_t **g_2889[1] = {&g_182};
static int32_t ***g_2888[2] = {&g_2889[0],&g_2889[0]};
static int32_t ****g_2887[2] = {&g_2888[1],&g_2888[1]};
static int32_t *****g_2886 = &g_2887[1];
static uint32_t g_2934 = 0x162BD56FL;
static int32_t g_2940 = 3L;
static const int32_t *g_2962 = (void*)0;
static int32_t g_3053 = 0L;
static int8_t *g_3125 = &g_597[1][1][0];
static int16_t g_3192[5][5][4] = {{{(-10L),0L,0L,1L},{0x844FL,0x5963L,0x7E8CL,(-1L)},{0x844FL,0xB065L,0L,0x844FL},{(-10L),(-1L),0x9E5FL,0L},{0x1D92L,4L,(-5L),0x09A2L}},{{0L,1L,0xB065L,(-1L)},{0L,0x5963L,0L,0L},{0x34BEL,0x1D92L,(-4L),0x8E0BL},{0L,0xB065L,0x9E5FL,0x1D92L},{0x5C03L,0xACCEL,1L,1L}},{{5L,5L,(-4L),(-1L)},{0x844FL,(-1L),0x34D0L,(-1L)},{0L,(-1L),0x5C03L,0x34D0L},{0L,(-1L),(-5L),(-1L)},{(-1L),(-1L),0x2AF1L,(-1L)}},{{(-10L),5L,0xB065L,1L},{0x34BEL,0xBD4BL,0x09A2L,0x34D0L},{1L,0x7E8CL,(-1L),1L},{(-1L),0x34D0L,3L,0L},{0L,(-10L),0x5963L,(-1L)}},{{0x5C03L,(-4L),0L,(-1L)},{0x221BL,1L,0x221BL,0L},{1L,0L,0x844FL,0x9E5FL},{0xB065L,0x7E8CL,0xF1F4L,0L},{(-1L),(-10L),0xF1F4L,3L}}};
static const union U2 g_3238[1][4][2] = {{{{0x0937L},{0x0937L}},{{0xF724L},{0x0937L}},{{0x0937L},{0xF724L}},{{0x0937L},{0x0937L}}}};
static int32_t g_3271 = 0xD0460DBBL;
static union U2 g_3320 = {0x5516L};
static int32_t *g_3340 = &g_941;
static int32_t **g_3339 = &g_3340;
static int32_t ***g_3338 = &g_3339;
static int32_t *g_3342 = &g_2105;
static uint16_t *g_3363[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint16_t ** const g_3362 = &g_3363[0];
static uint16_t ** const *g_3361 = &g_3362;
static const int32_t g_3380 = 0xDD621181L;
static int32_t g_3398 = 5L;
static int64_t g_3400 = 0xF08F06D7CE58A374LL;
static uint32_t g_3431 = 0x352D3A3BL;
static union U2 g_3579[6] = {{0x0930L},{0x0930L},{0x0930L},{0x0930L},{0x0930L},{0x0930L}};
static const union U2 g_3580 = {0x3AC2L};
static uint32_t g_3616 = 18446744073709551615UL;



static const int16_t  func_1(void);
static struct S1  func_11(struct S1  p_12);
static struct S1  func_13(uint16_t  p_14);
static uint64_t  func_18(const int64_t * p_19);
static int64_t * func_20(int64_t * p_21);
static int64_t * func_22(uint8_t  p_23, uint32_t  p_24, uint32_t  p_25, struct S1  p_26);
static int32_t  func_27(int64_t * p_28);
static union U2 * func_38(uint32_t  p_39, uint32_t  p_40, union U2  p_41, int64_t * p_42);




static const int16_t  func_1(void)
{ 
    uint8_t l_2 = 0xD6L;
    int32_t l_17 = 0xCAE8EF33L;
    struct S1 l_600 = {0,209,0x2099FEA9034977EELL,18446744073709551611UL,0};
    int32_t l_3268 = 0L;
    uint64_t l_3289 = 0x498D7A0AF69ECF22LL;
    int8_t l_3329 = 1L;
    int32_t *l_3336[4][1] = {{&g_941},{&g_941},{&g_941},{&g_941}};
    int32_t **l_3335 = &l_3336[0][0];
    int32_t ***l_3334 = &l_3335;
    union U2 *l_3355 = (void*)0;
    struct S0 *****l_3373 = &g_1820[3][0][5];
    struct S0 *****l_3374 = &g_1820[4][3][6];
    uint32_t l_3397 = 0x792EE285L;
    int32_t l_3407 = 0xFF5B466EL;
    int32_t l_3412 = 0x07FB7766L;
    int32_t l_3413 = 0xCE0CE374L;
    int32_t l_3414 = 0x1EE02420L;
    int32_t l_3419 = 1L;
    int32_t l_3420 = 0x4948B4B4L;
    int32_t l_3425 = 0xE2B00D84L;
    int32_t l_3427 = 0x3DBB2451L;
    int32_t l_3429[3];
    union U2 ** const *l_3447 = &g_532[0];
    const int8_t l_3457[2][3] = {{0xFAL,0xFAL,0xCEL},{0xFAL,0xFAL,0xCEL}};
    int64_t *** const *l_3505 = &g_1509;
    int64_t *** const **l_3504 = &l_3505;
    const uint8_t l_3548 = 248UL;
    uint32_t *****l_3598 = &g_2532;
    uint32_t *****l_3599[5] = {&g_2532,&g_2532,&g_2532,&g_2532,&g_2532};
    uint16_t l_3608 = 0x1D51L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_3429[i] = 1L;
    if (l_2)
    { 
        int64_t *l_15[2][7][4] = {{{(void*)0,&g_16[0][4][0],&g_16[0][1][0],(void*)0},{(void*)0,&g_16[0][1][1],&g_16[0][4][0],&g_16[0][4][0]},{(void*)0,(void*)0,(void*)0,&g_16[0][4][0]},{&g_16[0][1][0],&g_16[0][4][0],(void*)0,&g_16[0][1][1]},{(void*)0,(void*)0,&g_16[0][4][0],&g_16[0][4][0]},{&g_16[0][4][0],(void*)0,&g_16[0][4][0],&g_16[0][4][0]},{(void*)0,&g_16[0][4][0],(void*)0,(void*)0}},{{&g_16[0][1][0],&g_16[0][1][0],(void*)0,&g_16[0][4][0]},{(void*)0,&g_16[0][4][0],&g_16[0][4][0],(void*)0},{(void*)0,&g_16[0][4][0],&g_16[0][1][0],&g_16[0][4][0]},{(void*)0,&g_16[0][4][0],(void*)0,(void*)0},{&g_16[0][4][0],&g_16[0][4][0],&g_16[0][4][0],&g_16[0][4][0]},{(void*)0,&g_16[0][1][0],&g_16[0][4][0],(void*)0},{&g_16[0][4][0],&g_16[0][4][0],(void*)0,&g_16[0][4][0]}}};
        uint32_t l_598 = 0UL;
        uint32_t *l_599 = &g_197;
        uint32_t l_3248 = 0x23CFD88CL;
        int32_t * const *l_3253 = &g_182;
        int16_t l_3254 = 0xFEB1L;
        int64_t l_3269 = 0x865E37CC6F7905B2LL;
        struct S0 l_3332 = {2UL,-1L,18446744073709551615UL};
        uint16_t l_3348 = 0x7871L;
        int32_t l_3349[2];
        uint8_t *l_3350 = &g_119[3][1];
        int8_t l_3358[2][2][1];
        uint16_t ** const *l_3359 = &g_204;
        uint16_t ** const **l_3360 = (void*)0;
        int8_t l_3381 = 0x9EL;
        int32_t l_3404[6][1];
        int16_t l_3418[2];
        int32_t l_3430 = (-1L);
        int32_t l_3470 = 0x8FF18117L;
        const struct S1 **l_3474 = (void*)0;
        const struct S1 ***l_3473 = &l_3474;
        const struct S1 *** const *l_3472 = &l_3473;
        const struct S1 *** const **l_3471 = &l_3472;
        struct S0 l_3501 = {65533UL,0x54B5L,18446744073709551615UL};
        int64_t ***l_3544 = &g_228;
        union U2 l_3561 = {0xE2DAL};
        uint32_t *****l_3597[6][1][4];
        int32_t * const **l_3600[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_3349[i] = (-1L);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_3358[i][j][k] = 0x7AL;
            }
        }
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_3404[i][j] = 0xA45C6786L;
        }
        for (i = 0; i < 2; i++)
            l_3418[i] = 0xFA32L;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 4; k++)
                    l_3597[i][j][k] = &g_2532;
            }
        }
    }
    else
    { 
        uint8_t *l_3605[2][7] = {{&g_928[0][3][1],&g_928[0][3][1],&g_928[0][3][1],&g_928[0][3][1],&g_928[0][3][1],&g_928[0][3][1],&g_928[0][3][1]},{&g_928[0][1][1],&g_928[0][1][1],&g_928[0][1][1],&g_928[0][1][1],&g_928[0][1][1],&g_928[0][1][1],&g_928[0][1][1]}};
        int32_t l_3606 = (-1L);
        int32_t l_3607 = 0xA185EA3DL;
        struct S0 l_3609 = {1UL,1L,18446744073709551607UL};
        int16_t l_3617 = 0x0B67L;
        int i, j;
        (*g_3342) = 0x729B972BL;
        l_3425 |= ((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(((l_3606 = 0x2EL) | l_3607), l_3608)) ^ (l_3609 , l_3607)), ((safe_div_func_int64_t_s_s(l_2, (safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((((l_3609.f0 | l_3427) <= l_3457[1][2]) , (**g_2410)) || 18446744073709551606UL), 65535UL)), (*g_3125))))) != g_3616))) || l_3617);
        return l_3429[0];
    }
    return l_3548;
}



static struct S1  func_11(struct S1  p_12)
{ 
    int32_t **l_2348[7][3][1] = {{{&g_182},{&g_182},{&g_182}},{{&g_182},{&g_182},{&g_182}},{{&g_182},{&g_182},{&g_182}},{{&g_182},{&g_182},{&g_182}},{{&g_182},{&g_182},{&g_182}},{{&g_182},{&g_182},{&g_182}},{{&g_182},{&g_182},{&g_182}}};
    uint8_t *l_2355 = &g_119[3][1];
    int16_t l_2360[1];
    uint16_t l_2375 = 0xAFF5L;
    int32_t l_2388 = (-1L);
    int32_t * const l_2490 = &g_2491[0];
    int32_t * const *l_2489 = &l_2490;
    int32_t * const *l_2492 = &l_2490;
    int32_t * const *l_2493 = &l_2490;
    int32_t * const ** const l_2488[6][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2492,&l_2492,&l_2489,&l_2489,&l_2492,&l_2492,&l_2489},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2492,&l_2489,&l_2489,&l_2492,&l_2492,&l_2489,&l_2489},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_2492,&l_2492,&l_2489,&l_2489,&l_2492,&l_2492,&l_2489}};
    int32_t * const ** const *l_2487 = &l_2488[4][6];
    struct S1 l_2500 = {1,259,0xDFAC672FDFCC5255LL,1UL,0};
    int64_t ****l_2517 = &g_1509;
    struct S1 ***l_2521 = &g_722;
    int64_t **** const l_2524[2] = {&g_1509,&g_1509};
    uint32_t l_2548 = 2UL;
    int16_t l_2637 = 0L;
    uint32_t **l_2665[1];
    union U2 ***l_2670 = &g_532[0];
    union U2 ****l_2669 = &l_2670;
    union U2 *****l_2668 = &l_2669;
    int32_t l_2724 = 1L;
    struct S0 l_2787 = {0UL,-7L,1UL};
    const int32_t *l_2791 = &g_32[3][4];
    const int16_t *l_2820[2][5][6] = {{{&g_2821,&g_2821,&g_131.f0,&g_2821,&g_131.f0,&g_131.f0},{&g_2821,&g_2821,&g_2821,&g_2821,&g_131.f0,&g_131.f0},{&g_2821,&g_2821,&g_131.f0,&g_2821,&g_131.f0,&g_2821},{&g_2821,&g_2821,&g_131.f0,&g_2821,&g_131.f0,&g_131.f0},{&g_2821,&g_2821,&g_2821,&g_2821,&g_131.f0,&g_131.f0}},{{&g_2821,&g_2821,&g_131.f0,&g_2821,&g_131.f0,&g_2821},{&g_2821,&g_2821,&g_131.f0,&g_2821,&g_131.f0,&g_131.f0},{&g_2821,&g_2821,&g_2821,&g_2821,&g_131.f0,&g_131.f0},{&g_2821,&g_2821,&g_131.f0,&g_2821,&g_131.f0,&g_2821},{&g_2821,&g_2821,&g_131.f0,&g_2821,&g_131.f0,&g_131.f0}}};
    uint8_t ***l_2832[4] = {&g_2605,&g_2605,&g_2605,&g_2605};
    const uint64_t *l_2861 = &g_126.f2;
    const uint64_t ** const l_2860 = &l_2861;
    uint32_t l_2884[1][7][2] = {{{4UL,0UL},{4UL,0x2943CF3DL},{1UL,1UL},{0x2943CF3DL,4UL},{0UL,4UL},{0x2943CF3DL,1UL},{1UL,0x2943CF3DL}}};
    int32_t *****l_2885[3][1];
    uint16_t l_2928 = 0x6096L;
    int32_t *l_3131 = &g_2940;
    uint16_t l_3149[6][1][6] = {{{65526UL,0x6D09L,0x6D09L,65526UL,4UL,0x03D3L}},{{65526UL,4UL,0x03D3L,65527UL,0x6D09L,0x03D3L}},{{0UL,0x4B55L,0x6D09L,0x24DCL,0x6D09L,0x4B55L}},{{65527UL,4UL,0x7F67L,0x24DCL,4UL,0x6D09L}},{{0UL,0x6D09L,0x7F67L,65527UL,0x4B55L,0x4B55L}},{{65526UL,0x6D09L,0x6D09L,65526UL,4UL,0x03D3L}}};
    struct S0 **l_3190 = &g_811;
    union U2 l_3223[7][3] = {{{0xDC81L},{-1L},{-1L}},{{0xDC81L},{-1L},{-1L}},{{0xDC81L},{-1L},{-1L}},{{0xDC81L},{-1L},{-1L}},{{0xDC81L},{-1L},{-1L}},{{0xDC81L},{-1L},{-1L}},{{0xDC81L},{-1L},{-1L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2360[i] = 0L;
    for (i = 0; i < 1; i++)
        l_2665[i] = &g_1582;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_2885[i][j] = (void*)0;
    }
    g_182 = &g_29;
    g_35 |= (safe_div_func_uint64_t_u_u((((((p_12.f2 & (p_12.f2 < (((*g_182) ^ (g_32[2][5] |= (safe_sub_func_int16_t_s_s((p_12.f2 | ((void*)0 == l_2355)), (((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(p_12.f4, 0)), p_12.f0)) > (***g_1584)) > g_1565.f2))))) || p_12.f2))) && p_12.f4) == l_2360[0]) , (*g_182)) ^ (***g_1580)), 0x44DFFC98EF52EFA8LL));
    for (g_85.f2 = 0; (g_85.f2 <= (-10)); g_85.f2--)
    { 
        int32_t l_2365 = 0xA48D87A0L;
        uint64_t *l_2373[1][5] = {{&g_85.f3,&g_85.f3,&g_85.f3,&g_85.f3,&g_85.f3}};
        int64_t *l_2374 = &g_16[0][4][0];
        int32_t *l_2376 = &g_32[2][5];
        int i, j;
        (*g_182) = (safe_add_func_int32_t_s_s((l_2365 & (+((g_85.f1 , (((p_12.f2 , ((((((*l_2355) ^= (((*l_2374) = ((safe_mod_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((g_645.f3 = (l_2365 == (safe_lshift_func_uint8_t_u_s(((**g_204) & 0x526DL), (g_645.f2 > 252UL))))) == 0xD82279C13270EE40LL), p_12.f3)), p_12.f1)) , 0x1746D8D456DB1450LL)) != 0xD05AD4E6526E0FB5LL)) != 0x62L) <= (*g_182)) , l_2375) == 0xAD08FA81L)) , 0x5C84L) < l_2365)) == 2UL))), l_2365));
        l_2376 = &g_32[2][5];
    }
    return p_12;
}



static struct S1  func_13(uint16_t  p_14)
{ 
    int64_t l_1614 = (-1L);
    int32_t l_1627 = 0L;
    int64_t *****l_1659 = &g_1508;
    struct S1 l_1661 = {1,220,0xAC1CB2E1552DF8E2LL,0xC769FA791ABC4688LL,0};
    union U2 l_1685 = {6L};
    int32_t l_1698 = (-1L);
    int32_t l_1699[5] = {(-2L),(-2L),(-2L),(-2L),(-2L)};
    int8_t l_1700 = (-4L);
    int32_t l_1703 = 0x50359529L;
    int32_t l_1717[7][6][4] = {{{0x9C08706DL,(-1L),0x50D4640BL,0x2859A035L},{9L,(-4L),0xD152904AL,(-4L)},{0x63D92790L,0x2093925AL,0L,0x64A88BFDL},{(-4L),0x5F9A55BFL,6L,0x7645DFC5L},{0x6BE3AEDFL,0x7E5BFF5BL,5L,0x92E16F28L},{0x6BE3AEDFL,0x1C7ED693L,6L,0L}},{{(-4L),0x92E16F28L,(-1L),0x50D4640BL},{0x8D4D8A15L,0xE3817952L,0x1C7ED693L,(-5L)},{5L,1L,0x350549EBL,0x5F9A55BFL},{(-1L),0x92E16F28L,0xC424442AL,5L},{1L,0x5AAEBDC6L,0xD5CE4ACBL,8L},{(-1L),(-6L),0L,(-1L)}},{{1L,0L,0x2859A035L,(-9L)},{8L,(-4L),(-1L),0x5A31659BL},{0L,0xD2669FC3L,0x63D92790L,0x18155CC9L},{0x8A2F3190L,1L,0L,1L},{9L,0x92E16F28L,0xD152904AL,(-1L)},{4L,0xD5CE4ACBL,1L,0x2093925AL}},{{0x2859A035L,0x3A597955L,0x8D4D8A15L,(-5L)},{1L,9L,0x59C23B3AL,0xD04B56B1L},{0x91994A1EL,(-1L),0xC424442AL,0xC424442AL},{0x0142A48CL,0x0142A48CL,5L,0x18155CC9L},{0xD9D42FCAL,(-6L),0x350549EBL,0x6BE3AEDFL},{(-1L),0x59C23B3AL,0x64A88BFDL,0x350549EBL}},{{8L,0x59C23B3AL,1L,0x6BE3AEDFL},{0x59C23B3AL,(-6L),(-1L),0x18155CC9L},{0xD5CE4ACBL,0x0142A48CL,0x5AAEBDC6L,0xC424442AL},{1L,(-1L),0xD152904AL,0xD04B56B1L},{0L,9L,0x9C08706DL,(-5L)},{0x18155CC9L,0x3A597955L,0x1C7ED693L,0x2093925AL}},{{(-1L),0xD5CE4ACBL,(-9L),(-1L)},{0x91994A1EL,0x92E16F28L,0xD5CE4ACBL,1L},{0x5AAEBDC6L,1L,9L,0x18155CC9L},{(-1L),0xD2669FC3L,0x59C23B3AL,0x5A31659BL},{6L,(-4L),0x64A88BFDL,(-9L)},{0x8D4D8A15L,0L,0x9C08706DL,(-1L)}},{{(-4L),(-6L),0x63D92790L,8L},{9L,0x5AAEBDC6L,0xE43E1A1FL,5L},{1L,0x92E16F28L,(-1L),0x5F9A55BFL},{0x59C23B3AL,1L,(-1L),(-5L)},{0x2859A035L,0xE3817952L,0x2859A035L,0x50D4640BL},{6L,0x8A2F3190L,(-9L),0xD04B56B1L}}};
    int8_t l_1718 = 0x70L;
    struct S0 *l_1722[7] = {&g_725,&g_725,&g_725,&g_725,&g_725,&g_725,&g_725};
    const int64_t *l_1747 = &g_1552.f2;
    const int64_t **l_1746 = &l_1747;
    const int64_t ***l_1745 = &l_1746;
    const int64_t ****l_1744 = &l_1745;
    union U2 ****l_1792 = (void*)0;
    uint8_t l_1813 = 0UL;
    int64_t * const *l_1816 = &g_229;
    uint32_t *** const *l_1870[2][3];
    uint32_t *** const **l_1869 = &l_1870[1][2];
    union U2 l_1873 = {-1L};
    uint64_t l_1908[1][4][2] = {{{0xB91335C233449963LL,0xB91335C233449963LL},{0xB91335C233449963LL,0xB91335C233449963LL},{0xB91335C233449963LL,0xB91335C233449963LL},{0xB91335C233449963LL,0xB91335C233449963LL}}};
    int32_t l_1973 = 0xD2C4F5E4L;
    uint16_t l_1993 = 0x0DEAL;
    struct S0 *** const *l_2024 = &g_809;
    struct S0 *** const **l_2023[7];
    int16_t * const *l_2085 = &g_1842;
    uint8_t l_2097 = 4UL;
    int32_t l_2106 = (-1L);
    uint32_t l_2121[7][2][4] = {{{0x2EA697F7L,0xAE6DF44FL,0xA80F4721L,18446744073709551615UL},{1UL,0xAE6DF44FL,0xAE6DF44FL,1UL}},{{0xAE6DF44FL,1UL,0x2EA697F7L,18446744073709551611UL},{0xAE6DF44FL,0x2EA697F7L,0xAE6DF44FL,0xA80F4721L}},{{1UL,18446744073709551611UL,0xA80F4721L,0xA80F4721L},{0x2EA697F7L,0x2EA697F7L,18446744073709551615UL,18446744073709551611UL}},{{18446744073709551611UL,1UL,18446744073709551615UL,1UL},{0x2EA697F7L,0xAE6DF44FL,0xA80F4721L,18446744073709551615UL}},{{1UL,0xAE6DF44FL,18446744073709551611UL,0xAE6DF44FL},{18446744073709551611UL,0xAE6DF44FL,18446744073709551615UL,0xA80F4721L}},{{18446744073709551611UL,18446744073709551615UL,18446744073709551611UL,18446744073709551615UL},{0xAE6DF44FL,0xA80F4721L,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL,0x2EA697F7L,0xA80F4721L},{0xA80F4721L,0xAE6DF44FL,0x2EA697F7L,0xAE6DF44FL}}};
    int32_t l_2154 = 0L;
    uint16_t l_2172 = 0x97BFL;
    int32_t l_2180 = 2L;
    int16_t l_2183 = 0x185FL;
    uint64_t l_2217 = 0x07703AF5D0D1794DLL;
    int32_t l_2226 = 0x4E479D4EL;
    int32_t l_2232 = 0x48D3F96DL;
    uint32_t l_2234 = 0x8D38D0A7L;
    uint16_t l_2256[6];
    struct S0 ****l_2293 = &g_809;
    const int64_t *****l_2347 = &l_1744;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_1870[i][j] = (void*)0;
    }
    for (i = 0; i < 7; i++)
        l_2023[i] = &l_2024;
    for (i = 0; i < 6; i++)
        l_2256[i] = 65527UL;
    for (g_85.f3 = (-11); (g_85.f3 > 42); g_85.f3 = safe_add_func_int64_t_s_s(g_85.f3, 6))
    { 
        uint8_t l_1603 = 0xAEL;
        uint16_t *l_1604 = &g_461;
        uint16_t *l_1605 = &g_725.f0;
        uint16_t *l_1606 = &g_1338;
        uint64_t *l_1613[5][2][7] = {{{(void*)0,&g_85.f3,&g_725.f2,&g_645.f3,&g_85.f3,&g_645.f3,&g_85.f3},{(void*)0,&g_725.f2,(void*)0,(void*)0,&g_725.f2,(void*)0,&g_85.f3}},{{&g_645.f3,&g_85.f3,&g_645.f3,&g_725.f2,&g_85.f3,(void*)0,&g_126.f2},{&g_85.f3,(void*)0,&g_85.f3,&g_85.f3,&g_645.f3,&g_645.f3,&g_85.f3}},{{&g_725.f2,&g_85.f3,&g_645.f3,(void*)0,(void*)0,(void*)0,(void*)0},{&g_725.f2,&g_725.f2,&g_725.f2,(void*)0,&g_126.f2,&g_725.f2,&g_725.f2}},{{(void*)0,&g_85.f3,&g_725.f2,&g_85.f3,&g_725.f2,(void*)0,&g_126.f2},{&g_85.f3,&g_645.f3,&g_126.f2,&g_725.f2,&g_126.f2,&g_725.f2,&g_85.f3}},{{&g_85.f3,(void*)0,&g_126.f2,(void*)0,&g_126.f2,(void*)0,&g_85.f3},{&g_85.f3,&g_126.f2,&g_725.f2,&g_645.f3,(void*)0,&g_645.f3,&g_126.f2}}};
        int32_t l_1628 = 0x6ADF82C0L;
        int64_t ****l_1633 = &g_1509;
        int64_t l_1682 = 2L;
        int32_t *l_1684 = &g_64;
        int32_t l_1695 = 0x4350A26FL;
        int32_t l_1696[4] = {0x65105E9EL,0x65105E9EL,0x65105E9EL,0x65105E9EL};
        int8_t l_1701 = 0x32L;
        uint64_t l_1705 = 0xC474DBB13C633DB5LL;
        struct S1 l_1709[3][2] = {{{0,320,0x9114857D133152C9LL,1UL,0},{0,320,0x9114857D133152C9LL,1UL,0}},{{0,320,0x9114857D133152C9LL,1UL,0},{0,320,0x9114857D133152C9LL,1UL,0}},{{0,320,0x9114857D133152C9LL,1UL,0},{0,320,0x9114857D133152C9LL,1UL,0}}};
        int16_t l_1712 = (-3L);
        uint32_t l_1719 = 0xE6B0EF31L;
        const union U2 l_1756 = {-1L};
        int64_t *** const l_1765 = (void*)0;
        int64_t *** const *l_1764 = &l_1765;
        int64_t *** const **l_1763 = &l_1764;
        struct S0 *l_1766 = &g_126;
        union U2 *****l_1798[1];
        uint32_t ****l_1821 = (void*)0;
        uint16_t l_1864 = 65527UL;
        int64_t l_1925[5][3] = {{0x528DD7B89053014FLL,0x991402B1F5DF2FD5LL,0x528DD7B89053014FLL},{9L,9L,9L},{0x528DD7B89053014FLL,0x991402B1F5DF2FD5LL,0x528DD7B89053014FLL},{9L,9L,9L},{0x528DD7B89053014FLL,0x991402B1F5DF2FD5LL,0x528DD7B89053014FLL}};
        const int32_t *l_2071 = (void*)0;
        int16_t * const l_2090 = &g_2091[0][2];
        int16_t * const *l_2089 = &l_2090;
        int32_t l_2107 = 0xFE247396L;
        int32_t l_2108 = 0L;
        int32_t *l_2128 = &l_1703;
        int16_t l_2152 = (-10L);
        int32_t l_2230 = 1L;
        struct S1 ****l_2271 = &g_721[0];
        struct S1 *****l_2270[5] = {&l_2271,&l_2271,&l_2271,&l_2271,&l_2271};
        uint32_t *l_2280 = &g_92[0][0];
        uint32_t **l_2279[7];
        uint32_t l_2287 = 0xC2D175B5L;
        int32_t *l_2316 = (void*)0;
        int16_t l_2332 = 0x01CBL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1798[i] = &l_1792;
        for (i = 0; i < 7; i++)
            l_2279[i] = &l_2280;
    }
    for (g_126.f0 = 0; (g_126.f0 > 15); g_126.f0 = safe_add_func_uint32_t_u_u(g_126.f0, 1))
    { 
        int32_t *l_2338 = (void*)0;
        int32_t *l_2339 = &g_32[2][5];
        int32_t *l_2340 = (void*)0;
        int32_t *l_2341 = &g_141[2];
        int32_t *l_2342 = &g_141[4];
        int32_t *l_2343[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_2344[7][1][4] = {{{0xA51EEE18L,0x2BBC0F66L,0xA51EEE18L,0UL}},{{0xA51EEE18L,0UL,0UL,0xA51EEE18L}},{{0x36A02B3EL,0UL,0x0B6EF468L,0UL}},{{0UL,0x2BBC0F66L,0x0B6EF468L,0x0B6EF468L}},{{0x36A02B3EL,0x36A02B3EL,0UL,0x0B6EF468L}},{{0xA51EEE18L,0x2BBC0F66L,0xA51EEE18L,0UL}},{{0xA51EEE18L,0UL,0UL,0xA51EEE18L}}};
        int i, j, k;
        ++l_2344[3][0][0];
        if ((*g_182))
            continue;
        (*l_2339) &= p_14;
    }
    l_2347 = &l_1744;
    (*g_722) = &l_1661;
    return l_1661;
}



static uint64_t  func_18(const int64_t * p_19)
{ 
    uint16_t l_1555 = 0x3CCBL;
    const struct S1 *l_1563[4][2][7] = {{{&g_1552,&g_85,&g_1552,&g_1552,(void*)0,&g_645,(void*)0},{&g_1552,(void*)0,(void*)0,&g_1552,&g_85,&g_1552,&g_645}},{{&g_645,&g_1552,&g_1552,&g_85,&g_85,&g_1552,&g_1552},{&g_85,&g_645,&g_645,&g_85,(void*)0,&g_645,&g_645}},{{&g_645,&g_645,&g_85,&g_645,&g_645,&g_85,(void*)0},{&g_1552,&g_645,(void*)0,&g_1552,&g_1552,&g_1552,(void*)0}},{{&g_645,&g_645,(void*)0,&g_85,&g_645,&g_645,&g_85},{&g_85,&g_1552,(void*)0,(void*)0,&g_1552,&g_85,&g_1552}}};
    int16_t *l_1572 = (void*)0;
    int16_t *l_1573 = &g_725.f1;
    uint32_t ****l_1583[7] = {(void*)0,&g_1580,&g_1580,(void*)0,&g_1580,&g_1580,(void*)0};
    uint16_t *l_1585 = &g_725.f0;
    int64_t l_1586 = 0xB66115A31601DCC0LL;
    uint32_t *l_1587 = &g_197;
    int32_t *l_1589 = &g_64;
    int32_t *l_1590 = (void*)0;
    int32_t *l_1591 = (void*)0;
    int32_t *l_1592[6] = {&g_29,&g_32[2][5],&g_29,&g_29,&g_32[2][5],&g_29};
    uint32_t l_1594[6][1];
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_1594[i][j] = 0UL;
    }
    for (g_197 = 8; (g_197 == 23); g_197 = safe_add_func_uint16_t_u_u(g_197, 7))
    { 
        struct S0 l_1545 = {0xDDB2L,0x9F44L,0x0A65CCED213D1B11LL};
        union U2 ***l_1548 = &g_532[0];
        union U2 ****l_1547 = &l_1548;
        union U2 *****l_1546 = &l_1547;
        const struct S1 *l_1549 = &g_85;
        const struct S1 **l_1550[5][5][4] = {{{(void*)0,&l_1549,(void*)0,&l_1549},{&l_1549,&l_1549,&l_1549,&l_1549},{&l_1549,&l_1549,(void*)0,&l_1549},{(void*)0,&l_1549,(void*)0,&l_1549},{&l_1549,&l_1549,&l_1549,&l_1549}},{{&l_1549,&l_1549,(void*)0,&l_1549},{(void*)0,&l_1549,(void*)0,&l_1549},{&l_1549,&l_1549,&l_1549,&l_1549},{&l_1549,&l_1549,(void*)0,&l_1549},{(void*)0,&l_1549,(void*)0,&l_1549}},{{&l_1549,&l_1549,&l_1549,&l_1549},{&l_1549,&l_1549,(void*)0,&l_1549},{(void*)0,&l_1549,(void*)0,&l_1549},{&l_1549,&l_1549,&l_1549,&l_1549},{&l_1549,&l_1549,(void*)0,&l_1549}},{{(void*)0,&l_1549,(void*)0,&l_1549},{&l_1549,&l_1549,&l_1549,&l_1549},{&l_1549,&l_1549,(void*)0,&l_1549},{(void*)0,&l_1549,(void*)0,&l_1549},{&l_1549,&l_1549,&l_1549,&l_1549}},{{&l_1549,&l_1549,(void*)0,&l_1549},{(void*)0,&l_1549,(void*)0,&l_1549},{&l_1549,&l_1549,&l_1549,&l_1549},{&l_1549,&l_1549,(void*)0,&l_1549},{(void*)0,&l_1549,(void*)0,&l_1549}}};
        int32_t l_1553 = 0x94202CABL;
        int32_t *l_1554 = &g_32[2][5];
        int i, j, k;
        (****g_1148) = l_1545;
        if (g_197)
            goto lbl_1588;
        l_1546 = l_1546;
        g_1551 = l_1549;
        ++l_1555;
    }
    for (g_29 = 0; (g_29 < 3); g_29 = safe_add_func_uint64_t_u_u(g_29, 1))
    { 
        uint8_t *l_1561[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint8_t * const *l_1560 = &l_1561[2];
        uint8_t * const **l_1562 = &l_1560;
        const struct S1 *l_1564[1][1];
        const struct S1 **l_1566 = &l_1563[1][0][4];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_1564[i][j] = &g_1565;
        }
        (*l_1562) = l_1560;
        (*l_1566) = (l_1564[0][0] = l_1563[1][0][4]);
    }
lbl_1588:
    (*g_182) ^= (((((**g_1345) != &p_19) <= ((safe_lshift_func_uint8_t_u_u(l_1555, (safe_unary_minus_func_int64_t_s(((safe_add_func_uint16_t_u_u(((((*l_1573) = 0x55B8L) && ((*l_1573) = (((safe_sub_func_int64_t_s_s(((safe_div_func_int64_t_s_s(((**g_228) = ((((*l_1585) ^= (safe_add_func_int64_t_s_s((((g_1584 = g_1580) == (void*)0) & l_1555), l_1555))) == l_1555) , (*p_19))), l_1555)) , l_1586), l_1555)) , l_1587) == (void*)0))) , l_1555), l_1586)) , 5L))))) && 0x4BF1287051AD7116LL)) < g_404[2]) , l_1586);
    ++l_1594[3][0];
    (*g_182) = (*g_182);
    return g_72;
}



static int64_t * func_20(int64_t * p_21)
{ 
    uint64_t l_1045 = 0x6B486B35D00BBFEELL;
    int32_t l_1047 = 1L;
    union U2 l_1075 = {0xF110L};
    int64_t *l_1076 = &g_16[0][4][0];
    struct S1 *l_1093 = (void*)0;
    const union U2 *l_1105[6];
    const union U2 **l_1104 = &l_1105[0];
    uint32_t l_1113[5];
    int64_t *l_1129[2];
    int32_t l_1133 = 7L;
    int32_t l_1136 = 0xCFFBC4F8L;
    int32_t l_1137 = (-1L);
    struct S0 ****l_1147 = (void*)0;
    struct S1 l_1161 = {1,696,-9L,0x31695CFCA04BC6EFLL,0};
    int32_t *l_1195[2];
    uint16_t **l_1243 = &g_205;
    const uint8_t l_1250 = 1UL;
    uint32_t l_1342 = 1UL;
    struct S1 ****l_1348 = &g_721[0];
    uint64_t *l_1381[4] = {&l_1161.f3,&l_1161.f3,&l_1161.f3,&l_1161.f3};
    uint16_t l_1382 = 0xB263L;
    int8_t *l_1397 = &g_91;
    int16_t *l_1398 = (void*)0;
    int16_t *l_1399[2][4][6] = {{{(void*)0,&g_126.f1,&g_725.f1,&g_126.f1,&g_126.f1,&g_725.f1},{&g_126.f1,&g_126.f1,&g_725.f1,&g_126.f1,(void*)0,&g_725.f1},{&g_126.f1,(void*)0,&g_725.f1,(void*)0,&g_126.f1,&g_725.f1},{(void*)0,&g_126.f1,&g_725.f1,&g_126.f1,&g_126.f1,&g_725.f1}},{{&g_126.f1,&g_126.f1,&g_725.f1,&g_126.f1,(void*)0,&g_725.f1},{&g_126.f1,(void*)0,&g_725.f1,(void*)0,&g_126.f1,&g_725.f1},{(void*)0,&g_126.f1,&g_725.f1,&g_126.f1,&g_126.f1,&g_725.f1},{&g_126.f1,&g_126.f1,&g_725.f1,&g_126.f1,(void*)0,&g_725.f1}}};
    int16_t l_1400 = 3L;
    int32_t l_1401[4][1][6] = {{{1L,0xE6DA0717L,0xE6DA0717L,1L,0x65F1ECBFL,1L}},{{1L,0x65F1ECBFL,1L,0xE6DA0717L,0xE6DA0717L,1L}},{{1L,1L,0xE6DA0717L,0x336A4630L,0xE6DA0717L,1L}},{{0xE6DA0717L,0x65F1ECBFL,0x336A4630L,0x336A4630L,0x65F1ECBFL,0xE6DA0717L}}};
    struct S0 ***l_1402 = &g_810[0][3][1];
    int32_t *l_1403 = &g_404[2];
    uint32_t l_1404[5];
    struct S1 * const ***l_1416 = &g_1151[6];
    int16_t l_1421 = 2L;
    int32_t l_1523 = (-1L);
    struct S0 l_1542 = {0x21D7L,0xE7B3L,0UL};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1105[i] = &l_1075;
    for (i = 0; i < 5; i++)
        l_1113[i] = 0x65E5759CL;
    for (i = 0; i < 2; i++)
        l_1129[i] = &g_140[5];
    for (i = 0; i < 2; i++)
        l_1195[i] = &g_32[2][5];
    for (i = 0; i < 5; i++)
        l_1404[i] = 4UL;
    for (g_85.f3 = 0; (g_85.f3 <= 2); g_85.f3 += 1)
    { 
        const struct S0 l_1051[7] = {{0UL,-10L,18446744073709551615UL},{0UL,-10L,18446744073709551615UL},{0UL,-10L,18446744073709551615UL},{0UL,-10L,18446744073709551615UL},{0UL,-10L,18446744073709551615UL},{0UL,-10L,18446744073709551615UL},{0UL,-10L,18446744073709551615UL}};
        struct S1 l_1084 = {1,175,0x432E5B8A004A0542LL,18446744073709551611UL,0};
        union U2 *l_1096 = &g_131;
        struct S1 ** const l_1100 = &l_1093;
        int32_t l_1106[1];
        uint8_t l_1120 = 0x3CL;
        uint32_t *l_1189 = &g_92[1][2];
        int32_t l_1192[7][7] = {{2L,0xB2BF8CDAL,2L,0xB2BF8CDAL,2L,0xB2BF8CDAL,2L},{0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L},{2L,0xB2BF8CDAL,2L,0xB2BF8CDAL,2L,0xB2BF8CDAL,2L},{0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L},{2L,0xB2BF8CDAL,2L,0xB2BF8CDAL,2L,0xB2BF8CDAL,2L},{0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L,0x586A3A06L},{2L,0xB2BF8CDAL,2L,0xB2BF8CDAL,2L,0xB2BF8CDAL,2L}};
        const uint32_t l_1336 = 18446744073709551608UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1106[i] = 0x962B00F6L;
        for (g_645.f2 = 0; (g_645.f2 <= 2); g_645.f2 += 1)
        { 
            int32_t l_1038 = 5L;
            int32_t l_1049[5][2] = {{0xE6DF5B20L,(-9L)},{(-9L),0xE6DF5B20L},{(-9L),(-9L)},{0xE6DF5B20L,(-9L)},{(-9L),0xE6DF5B20L}};
            union U2 l_1050 = {0xCAA7L};
            int64_t *****l_1070 = (void*)0;
            int16_t l_1094[4] = {4L,4L,4L,4L};
            int i, j;
        }
    }
    (*g_182) = (g_35 ^= (safe_div_func_uint64_t_u_u((g_645.f3 = (l_1382 &= g_85.f2)), (+(safe_add_func_uint64_t_u_u(((((*l_1403) ^= (safe_sub_func_uint8_t_u_u(0xB3L, (((((((((*g_205) != 0xF618L) && ((+((((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((-10L), (((**l_1104) , ((((g_126.f1 &= (safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(((*l_1397) = (g_1066 = ((0UL != (*g_182)) , 0L))), g_941)) || (-8L)) == (-9L)), 0xBBL))) , (**l_1104)) , (**g_1021)) && (*g_182))) >= 65528UL))) , (**g_204)), l_1400)) | (*g_1022)) >= 6UL) || (**g_1021))) || (**g_1021))) , 255UL) == g_725.f0) > l_1401[2][0][5]) , l_1402) != (void*)0) && g_597[1][0][0])))) , l_1404[1]) == 0x504FL), (*p_21)))))));
lbl_1529:
    for (g_126.f0 = 0; (g_126.f0 <= 6); g_126.f0 = safe_add_func_int8_t_s_s(g_126.f0, 1))
    { 
        return p_21;
    }
    for (l_1136 = 0; (l_1136 >= 8); l_1136++)
    { 
        uint16_t l_1414 = 0x1388L;
        int32_t l_1420[2][3][2] = {{{1L,1L},{1L,1L},{1L,1L}},{{1L,1L},{1L,1L},{1L,1L}}};
        union U2 l_1436[1] = {{0x9F54L}};
        const struct S0 *l_1437 = &g_126;
        struct S1 l_1476 = {0,9,0x8CEA51DA6D0E0FE8LL,0xE7AE63D80B1BFEF2LL,0};
        int64_t ***l_1507 = &g_228;
        int64_t ****l_1506 = &l_1507;
        uint32_t l_1524 = 0x49170EEAL;
        int32_t *l_1528 = &g_29;
        uint16_t l_1539 = 65535UL;
        int i, j, k;
        for (g_126.f0 = 0; (g_126.f0 != 15); g_126.f0++)
        { 
            if ((*g_182))
                break;
        }
        l_1348 = (void*)0;
        for (g_725.f1 = 6; (g_725.f1 >= 0); g_725.f1 -= 1)
        { 
            struct S1 ****l_1415 = &g_721[0];
            int32_t l_1419 = 0xC0A3FFC2L;
            int32_t l_1440 = 0x827DD6A3L;
            uint32_t l_1441 = 0x755C059DL;
            uint16_t *l_1458 = &l_1382;
            uint32_t l_1471 = 0xEB64EEC0L;
            uint16_t *l_1472[2];
            int32_t l_1481 = 0xFC618E30L;
            uint8_t *l_1482 = &g_119[2][1];
            struct S0 **l_1489[1][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int32_t l_1515 = 2L;
            int32_t l_1516 = (-1L);
            int32_t l_1517 = 4L;
            int32_t l_1518 = (-4L);
            int32_t l_1519 = 0L;
            int32_t l_1520 = 0xAFC0F02DL;
            int32_t l_1521 = 0x38482D66L;
            int32_t l_1522[4][4] = {{(-10L),1L,(-10L),1L},{(-10L),1L,(-10L),1L},{(-10L),1L,(-10L),1L},{(-10L),1L,(-10L),1L}};
            uint8_t l_1530 = 255UL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1472[i] = &g_461;
            for (g_35 = 4; (g_35 >= 0); g_35 -= 1)
            { 
                struct S1 * const ****l_1417 = (void*)0;
                struct S1 * const ****l_1418[2][1];
                int32_t l_1422 = (-1L);
                const int64_t *l_1434[6] = {&g_16[0][4][0],&g_16[0][4][0],&g_16[0][4][0],&g_16[0][4][0],&g_16[0][4][0],&g_16[0][4][0]};
                const int64_t **l_1433 = &l_1434[1];
                const int64_t ***l_1432 = &l_1433;
                const int64_t ****l_1431 = &l_1432;
                const int64_t *****l_1430 = &l_1431;
                int32_t l_1435 = 0x8C13F826L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1418[i][j] = &g_1286;
                }
                (*g_182) ^= (safe_mul_func_uint8_t_u_u(((l_1419 = (safe_unary_minus_func_int32_t_s((l_1422 = (l_1414 == (((l_1415 != (l_1416 = l_1416)) , (l_1420[1][1][1] = l_1419)) != l_1421)))))) | ((void*)0 != &l_1348)), g_29));
                (*l_1104) = func_38(g_645.f0, (l_1420[1][1][1] < (l_1420[1][1][0] >= (18446744073709551611UL > (l_1435 &= (safe_div_func_uint32_t_u_u((((((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((~(((void*)0 == &g_204) ^ ((***g_1149) , 0xE8L))) < (**g_204)), l_1420[1][1][1])), 0x72L)) == 0x3BL) , l_1430) != (void*)0) != l_1422), 0x274C683DL)))))), l_1436[0], (*g_228));
            }
            for (g_54 = 0; (g_54 <= 2); g_54 += 1)
            { 
                const struct S0 **l_1438 = &l_1437;
                int32_t l_1439[2][1][5] = {{{0x864222F3L,0xB9A0ED46L,0x864222F3L,0xB9A0ED46L,0x864222F3L}},{{0x0C44078CL,0x0C44078CL,0x0C44078CL,0x0C44078CL,0x0C44078CL}}};
                int i, j, k;
                (*l_1438) = l_1437;
                if (l_1419)
                    break;
                ++l_1441;
                for (l_1133 = 0; (l_1133 <= 1); l_1133 += 1)
                { 
                    return (*g_228);
                }
                (*g_182) |= (safe_mul_func_uint16_t_u_u((~(0xAFEEL && (*g_205))), (!(safe_mod_func_int16_t_s_s(((**g_228) | (l_1436[0].f0 , (safe_rshift_func_int16_t_s_u((((((*p_21) & (safe_lshift_func_int16_t_s_s(l_1414, ((((safe_rshift_func_int8_t_s_u((((**g_1021) ^ 4294967295UL) & 255UL), 6)) >= l_1439[1][0][1]) ^ l_1440) <= 2UL)))) < l_1420[0][1][1]) != l_1439[1][0][1]) ^ l_1439[0][0][4]), 5)))), l_1439[1][0][1])))));
            }
            if ((*g_182))
                break;
            g_64 |= (safe_mul_func_uint8_t_u_u((((*l_1458)++) ^ (safe_sub_func_int8_t_s_s(g_645.f1, (safe_rshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u(g_1338, ((*l_1482) |= ((safe_lshift_func_uint8_t_u_u(((((*l_1076) = ((safe_sub_func_uint32_t_u_u((((g_725.f0 = l_1471) == (g_126.f0 = 0xE708L)) <= (g_126.f1 = (~l_1419))), ((*g_1022) ^= (((l_1476 , ((*l_1397) |= (((safe_mul_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(((l_1471 , (void*)0) == (void*)0), l_1471)) , g_597[2][2][0]), l_1441)) <= l_1471) | 0x30L))) || 0L) > 0xCACEL)))) , (-1L))) & l_1420[1][1][1]) ^ l_1440), g_141[2])) , l_1481)))) > 1UL) , g_85.f1), l_1481))))), 1L));
            for (l_1342 = 0; (l_1342 <= 2); l_1342 += 1)
            { 
                uint8_t l_1485 = 0x1EL;
                struct S0 **l_1488[1][7][7] = {{{&g_811,(void*)0,(void*)0,&g_811,(void*)0,(void*)0,&g_811},{&g_811,&g_811,&g_811,&g_811,&g_811,&g_811,&g_811},{&g_811,&g_811,&g_811,&g_811,&g_811,&g_811,&g_811},{&g_811,&g_811,&g_811,&g_811,&g_811,&g_811,&g_811},{(void*)0,&g_811,(void*)0,(void*)0,&g_811,(void*)0,(void*)0},{&g_811,&g_811,(void*)0,&g_811,&g_811,(void*)0,&g_811},{&g_811,(void*)0,&g_811,&g_811,&g_811,&g_811,&g_811}}};
                int32_t l_1512[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1512[i] = 0xB519E360L;
                l_1420[1][1][1] ^= (g_126.f2 && (safe_add_func_int8_t_s_s((l_1485 & (-1L)), (safe_lshift_func_uint16_t_u_u(l_1436[0].f0, (((((*g_809) = l_1488[0][1][2]) == l_1489[0][5]) != (((*g_182) >= l_1485) <= 0xD922L)) & 0x5F03719AL))))));
                (*l_1104) = (*l_1104);
                for (g_1197 = 6; (g_1197 >= 2); g_1197 -= 1)
                { 
                    uint16_t l_1490 = 0x9EBBL;
                    struct S0 *l_1491 = &g_725;
                    struct S0 *l_1492 = (void*)0;
                    int32_t l_1511 = 0x659D9907L;
                    int32_t l_1513 = 0x077849B4L;
                    int32_t l_1514[4][1][4] = {{{3L,3L,3L,3L}},{{3L,3L,3L,3L}},{{3L,3L,3L,3L}},{{3L,3L,3L,3L}}};
                    int32_t **l_1527[2][4] = {{&l_1195[1],&l_1195[1],&l_1195[1],&l_1195[1]},{&l_1195[1],&l_1195[1],&l_1195[1],&l_1195[1]}};
                    int i, j, k;
                    l_1440 |= l_1490;
                    l_1492 = l_1491;
                    l_1511 = (+((l_1490 | (safe_add_func_int32_t_s_s((((safe_mod_func_uint64_t_u_u((l_1440 = (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(0x6FL, ((*l_1482) ^= (g_141[5] | (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((g_1508 = l_1506) != (void*)0), l_1476.f1)), (!l_1476.f0))))))) > l_1419), 6))), (-5L))) > l_1485) || (*p_21)), (*g_1022)))) > 0x66L));
                    --l_1524;
                    l_1528 = &l_1512[1];
                }
            }
            for (l_1517 = 0; (l_1517 <= 6); l_1517 += 1)
            { 
                if (((void*)0 != &p_21))
                { 
                    l_1481 |= l_1519;
                    if (g_126.f0)
                        goto lbl_1529;
                    ++l_1530;
                }
                else
                { 
                    return p_21;
                }
            }
        }
        l_1420[1][1][1] ^= ((((safe_sub_func_uint16_t_u_u((*g_205), ((void*)0 != &g_197))) >= (safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u(l_1539, (safe_sub_func_int8_t_s_s((0UL | (*g_182)), (-2L))))), 0x4CL))) <= 247UL) || 1L);
    }
    (**g_707) = l_1542;
    return p_21;
}



static int64_t * func_22(uint8_t  p_23, uint32_t  p_24, uint32_t  p_25, struct S1  p_26)
{ 
    struct S1 **l_602 = (void*)0;
    struct S1 ***l_601 = &l_602;
    int32_t l_603 = 0x19AE93DFL;
    struct S1 **l_604 = &g_82;
    struct S0 *l_605[1];
    int64_t *l_618 = &g_16[0][1][1];
    uint32_t l_677 = 0x1CB59F38L;
    int32_t l_697 = 0x113F2521L;
    int32_t l_698 = 1L;
    int32_t l_699 = 0x8166F8A6L;
    int32_t l_700 = 0xDB951696L;
    int32_t l_701 = 0x15A94038L;
    int32_t l_702 = 0xD251283AL;
    int32_t l_703[3][3][1] = {{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)}}};
    uint8_t l_704 = 250UL;
    union U2 l_717 = {5L};
    int64_t ***l_751[4][6] = {{&g_228,&g_228,(void*)0,&g_228,(void*)0,&g_228},{(void*)0,&g_228,&g_228,&g_228,&g_228,(void*)0},{&g_228,(void*)0,&g_228,(void*)0,&g_228,&g_228},{&g_228,(void*)0,(void*)0,&g_228,&g_228,&g_228}};
    int64_t ****l_750 = &l_751[2][2];
    struct S1 *l_756 = (void*)0;
    struct S0 * const **l_808[6][7][6] = {{{&g_707,&g_707,&g_707,&g_707,(void*)0,(void*)0},{&g_707,&g_707,&g_707,&g_707,&g_707,(void*)0},{&g_707,&g_707,&g_707,(void*)0,&g_707,&g_707},{&g_707,&g_707,&g_707,&g_707,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_707,&g_707},{(void*)0,&g_707,&g_707,&g_707,(void*)0,&g_707},{&g_707,&g_707,&g_707,&g_707,(void*)0,(void*)0}},{{(void*)0,&g_707,&g_707,&g_707,&g_707,&g_707},{&g_707,(void*)0,&g_707,&g_707,(void*)0,&g_707},{&g_707,&g_707,&g_707,&g_707,&g_707,&g_707},{&g_707,&g_707,(void*)0,(void*)0,&g_707,&g_707},{&g_707,&g_707,(void*)0,(void*)0,(void*)0,&g_707},{&g_707,&g_707,&g_707,&g_707,&g_707,&g_707},{&g_707,&g_707,&g_707,&g_707,&g_707,&g_707}},{{&g_707,&g_707,&g_707,&g_707,&g_707,&g_707},{(void*)0,&g_707,(void*)0,&g_707,&g_707,&g_707},{&g_707,(void*)0,(void*)0,&g_707,&g_707,&g_707},{(void*)0,&g_707,&g_707,(void*)0,&g_707,&g_707},{(void*)0,&g_707,&g_707,&g_707,&g_707,&g_707},{&g_707,&g_707,&g_707,(void*)0,&g_707,&g_707},{&g_707,&g_707,(void*)0,&g_707,&g_707,&g_707}},{{&g_707,&g_707,(void*)0,&g_707,&g_707,&g_707},{(void*)0,&g_707,&g_707,&g_707,&g_707,&g_707},{&g_707,&g_707,&g_707,&g_707,&g_707,&g_707},{&g_707,&g_707,(void*)0,(void*)0,(void*)0,&g_707},{&g_707,&g_707,&g_707,(void*)0,&g_707,&g_707},{&g_707,&g_707,(void*)0,(void*)0,&g_707,&g_707},{&g_707,(void*)0,&g_707,&g_707,&g_707,&g_707}},{{&g_707,&g_707,&g_707,&g_707,&g_707,&g_707},{(void*)0,(void*)0,&g_707,(void*)0,&g_707,(void*)0},{&g_707,&g_707,&g_707,(void*)0,&g_707,(void*)0},{&g_707,&g_707,&g_707,&g_707,&g_707,&g_707},{&g_707,&g_707,&g_707,(void*)0,&g_707,&g_707},{&g_707,&g_707,&g_707,&g_707,&g_707,&g_707},{&g_707,&g_707,(void*)0,&g_707,(void*)0,&g_707}},{{&g_707,&g_707,&g_707,&g_707,(void*)0,&g_707},{&g_707,&g_707,(void*)0,&g_707,&g_707,&g_707},{(void*)0,&g_707,&g_707,&g_707,&g_707,&g_707},{&g_707,&g_707,&g_707,(void*)0,&g_707,&g_707},{(void*)0,&g_707,&g_707,&g_707,&g_707,&g_707},{&g_707,&g_707,&g_707,&g_707,&g_707,(void*)0},{(void*)0,(void*)0,&g_707,(void*)0,&g_707,&g_707}}};
    uint8_t l_972 = 7UL;
    uint32_t l_982 = 0x30A55396L;
    uint32_t *l_998 = &g_92[2][3];
    uint32_t **l_997[2];
    uint32_t ***l_996 = &l_997[1];
    uint32_t ****l_995 = &l_996;
    const uint32_t l_1001 = 18446744073709551608UL;
    struct S1 *l_1020 = &g_645;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_605[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_997[i] = &l_998;
    return (*g_228);
}



static int32_t  func_27(int64_t * p_28)
{ 
    int32_t l_59 = 5L;
    int32_t l_459 = 0x7636DDB8L;
    uint16_t * const *l_497 = &g_205;
    union U2 *l_539[2];
    int32_t l_560 = 0x031EF99EL;
    int32_t l_561 = 0xB464E4D4L;
    uint32_t l_592[3][6][7] = {{{0UL,0xA274F8CCL,0UL,4294967293UL,0UL,4294967293UL,0UL},{0xE030C5F1L,0xE8EF4409L,1UL,0xE030C5F1L,0xE030C5F1L,1UL,0xE8EF4409L},{0xF15DA8F4L,4294967293UL,0UL,0xA274F8CCL,0UL,4294967293UL,0xF15DA8F4L},{4294967295UL,0xE030C5F1L,0xB20DAD22L,0xB20DAD22L,0xE030C5F1L,4294967295UL,0xB20DAD22L},{0UL,0xA274F8CCL,0UL,0xA274F8CCL,0UL,0x4225F5B1L,0UL},{0xE030C5F1L,0xB20DAD22L,0xB20DAD22L,0xE030C5F1L,4294967295UL,0xB20DAD22L,0xE8EF4409L}},{{0UL,0xA274F8CCL,0UL,4294967293UL,0xF15DA8F4L,4294967293UL,0UL},{0xE030C5F1L,0xE030C5F1L,1UL,0xE8EF4409L,0xE030C5F1L,0x2E2355A0L,0xE8EF4409L},{0UL,4294967293UL,0UL,0xA274F8CCL,0UL,4294967293UL,0UL},{4294967295UL,0xE8EF4409L,0xB20DAD22L,4294967295UL,0xE030C5F1L,0xB20DAD22L,1UL},{0UL,4294967293UL,0xF15DA8F4L,4294967293UL,0UL,0xA274F8CCL,0UL},{4294967295UL,0x2E2355A0L,1UL,0xB20DAD22L,0x2E2355A0L,0x2E2355A0L,0xB20DAD22L}},{{0UL,4294967293UL,0UL,0x4225F5B1L,0UL,0x4225F5B1L,0UL},{4294967295UL,0xB20DAD22L,0xE8EF4409L,4294967295UL,4294967295UL,0xE8EF4409L,0xB20DAD22L},{0UL,0x4225F5B1L,4294967287UL,4294967293UL,4294967287UL,0x4225F5B1L,0UL},{0x2E2355A0L,4294967295UL,1UL,1UL,4294967295UL,0x2E2355A0L,1UL},{0UL,4294967293UL,0UL,4294967293UL,0UL,0xA274F8CCL,0UL},{4294967295UL,1UL,1UL,4294967295UL,0x2E2355A0L,1UL,0xB20DAD22L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_539[i] = &g_131;
    for (g_29 = 5; (g_29 <= (-5)); g_29--)
    { 
        uint32_t l_430 = 0x7792218BL;
        int32_t l_438 = 0xEC087532L;
        uint64_t l_453 = 0xA56FE63A0B21617BLL;
        uint16_t ***l_458 = (void*)0;
        int32_t **l_498 = &g_182;
        uint32_t l_535[1][6];
        int32_t l_549 = 0xFE779BE8L;
        int32_t l_553 = 0x0A9F5813L;
        int32_t l_558 = (-1L);
        int32_t l_559 = (-1L);
        int32_t l_563 = 0L;
        int8_t *l_593 = &g_91;
        uint64_t *l_594 = (void*)0;
        uint64_t *l_595 = &l_453;
        int8_t *l_596 = &g_597[1][0][0];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 6; j++)
                l_535[i][j] = 18446744073709551609UL;
        }
        for (g_32[2][5] = 0; (g_32[2][5] <= 2); g_32[2][5] = safe_add_func_uint16_t_u_u(g_32[2][5], 9))
        { 
            uint16_t l_435 = 2UL;
            uint64_t *l_454 = &g_126.f2;
            int32_t l_457 = 0x9E889F41L;
            uint16_t *l_460 = &g_461;
            uint32_t *l_462 = &g_92[1][0];
            int32_t *l_463 = &g_64;
            int32_t *l_476 = &l_457;
            uint16_t ***l_496 = &g_204;
            uint8_t *l_499 = &g_54;
            int32_t l_548 = (-6L);
            int32_t l_550 = 3L;
            int32_t l_552 = 0xB1A535FDL;
            int32_t l_555 = 0xE0BB6B36L;
            int32_t l_562 = 0xE190B459L;
            int32_t l_565 = 0xD36307E5L;
        }
        (**l_498) = (safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((*l_596) &= (safe_add_func_uint64_t_u_u((**l_498), ((g_85.f4 = (+(safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u(18446744073709551610UL, ((*g_229) = (((((**l_498) >= (safe_mul_func_int8_t_s_s(((((*g_205) , &l_539[1]) == g_532[0]) <= ((*l_595) |= (safe_lshift_func_int16_t_s_s(((((*l_593) = ((safe_mul_func_uint8_t_u_u((((!(safe_lshift_func_int16_t_s_s((((0xB274B251C87D094FLL != l_592[1][2][2]) > 0UL) != (**l_498)), g_54))) ^ (**g_228)) , 0x12L), 0xC3L)) < 0L)) , (**l_498)) , g_16[0][5][1]), l_592[2][2][1])))), g_85.f0))) >= (**l_498)) | 0x1E95L) | (*g_182))))), (**l_498))))) ^ l_459)))), 0x33L)), 1UL));
    }
    return (*g_182);
}



static union U2 * func_38(uint32_t  p_39, uint32_t  p_40, union U2  p_41, int64_t * p_42)
{ 
    int16_t l_66 = 1L;
    int32_t *l_75 = &g_64;
    struct S1 *l_84 = &g_85;
    int32_t l_142 = 1L;
    int32_t l_144 = 0x33642C4CL;
    int32_t l_149 = 0x8CBBD656L;
    int32_t l_150 = 0x98D20E63L;
    int32_t l_151[7][6] = {{9L,(-3L),9L,9L,(-3L),9L},{9L,(-3L),9L,9L,(-3L),9L},{9L,(-3L),9L,9L,(-3L),9L},{9L,(-3L),9L,9L,(-3L),9L},{9L,(-3L),9L,9L,(-3L),9L},{9L,(-3L),9L,9L,(-3L),9L},{9L,(-3L),9L,9L,(-3L),9L}};
    struct S0 *l_157 = &g_126;
    uint8_t *l_159 = &g_119[6][2];
    int32_t l_184 = 0xED307D86L;
    int64_t l_185 = (-6L);
    int64_t l_196 = 0L;
    uint16_t *l_304[6][3][3] = {{{&g_126.f0,&g_126.f0,&g_126.f0},{&g_5,&g_126.f0,&g_5},{&g_126.f0,&g_126.f0,&g_126.f0}},{{&g_5,&g_126.f0,&g_5},{&g_126.f0,&g_126.f0,&g_126.f0},{&g_5,&g_126.f0,&g_5}},{{&g_126.f0,&g_126.f0,&g_126.f0},{&g_5,&g_126.f0,&g_5},{&g_126.f0,&g_126.f0,&g_126.f0}},{{&g_5,&g_126.f0,&g_5},{&g_126.f0,&g_126.f0,&g_126.f0},{&g_5,&g_126.f0,&g_5}},{{&g_126.f0,&g_126.f0,&g_126.f0},{&g_5,&g_126.f0,&g_5},{&g_126.f0,&g_126.f0,&g_126.f0}},{{&g_5,&g_126.f0,&g_5},{&g_126.f0,&g_126.f0,&g_126.f0},{&g_5,&g_126.f0,&g_5}}};
    uint32_t l_422[5][3];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
            l_422[i][j] = 0xA5625F85L;
    }
    for (p_40 = 0; (p_40 >= 5); p_40 = safe_add_func_uint64_t_u_u(p_40, 7))
    { 
        int32_t *l_63 = &g_64;
        int32_t *l_65 = &g_64;
        int32_t *l_67 = (void*)0;
        int32_t *l_68 = &g_64;
        int32_t *l_69 = &g_64;
        int32_t *l_70 = (void*)0;
        int32_t *l_71[3];
        int i;
        for (i = 0; i < 3; i++)
            l_71[i] = &g_64;
        --g_72;
    }
    return &g_131;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_16[i][j][k], "g_16[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_29, "g_29", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_85.f0, "g_85.f0", print_hash_value);
    transparent_crc(g_85.f1, "g_85.f1", print_hash_value);
    transparent_crc(g_85.f2, "g_85.f2", print_hash_value);
    transparent_crc(g_85.f3, "g_85.f3", print_hash_value);
    transparent_crc(g_85.f4, "g_85.f4", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_92[i][j], "g_92[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_119[i][j], "g_119[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_126.f0, "g_126.f0", print_hash_value);
    transparent_crc(g_126.f1, "g_126.f1", print_hash_value);
    transparent_crc(g_126.f2, "g_126.f2", print_hash_value);
    transparent_crc(g_131.f0, "g_131.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_140[i], "g_140[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_404[i], "g_404[i]", print_hash_value);

    }
    transparent_crc(g_461, "g_461", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_597[i][j][k], "g_597[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_645.f0, "g_645.f0", print_hash_value);
    transparent_crc(g_645.f1, "g_645.f1", print_hash_value);
    transparent_crc(g_645.f2, "g_645.f2", print_hash_value);
    transparent_crc(g_645.f3, "g_645.f3", print_hash_value);
    transparent_crc(g_645.f4, "g_645.f4", print_hash_value);
    transparent_crc(g_725.f0, "g_725.f0", print_hash_value);
    transparent_crc(g_725.f1, "g_725.f1", print_hash_value);
    transparent_crc(g_725.f2, "g_725.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_928[i][j][k], "g_928[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_941, "g_941", print_hash_value);
    transparent_crc(g_1066, "g_1066", print_hash_value);
    transparent_crc(g_1197, "g_1197", print_hash_value);
    transparent_crc(g_1338, "g_1338", print_hash_value);
    transparent_crc(g_1552.f0, "g_1552.f0", print_hash_value);
    transparent_crc(g_1552.f1, "g_1552.f1", print_hash_value);
    transparent_crc(g_1552.f2, "g_1552.f2", print_hash_value);
    transparent_crc(g_1552.f3, "g_1552.f3", print_hash_value);
    transparent_crc(g_1552.f4, "g_1552.f4", print_hash_value);
    transparent_crc(g_1565.f0, "g_1565.f0", print_hash_value);
    transparent_crc(g_1565.f1, "g_1565.f1", print_hash_value);
    transparent_crc(g_1565.f2, "g_1565.f2", print_hash_value);
    transparent_crc(g_1565.f3, "g_1565.f3", print_hash_value);
    transparent_crc(g_1565.f4, "g_1565.f4", print_hash_value);
    transparent_crc(g_1593, "g_1593", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2091[i][j], "g_2091[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_2105, "g_2105", print_hash_value);
    transparent_crc(g_2333, "g_2333", print_hash_value);
    transparent_crc(g_2421, "g_2421", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2491[i], "g_2491[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_2600[i], "g_2600[i]", print_hash_value);

    }
    transparent_crc(g_2624.f0, "g_2624.f0", print_hash_value);
    transparent_crc(g_2624.f1, "g_2624.f1", print_hash_value);
    transparent_crc(g_2624.f2, "g_2624.f2", print_hash_value);
    transparent_crc(g_2624.f3, "g_2624.f3", print_hash_value);
    transparent_crc(g_2624.f4, "g_2624.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2631[i][j][k].f0, "g_2631[i][j][k].f0", print_hash_value);
                transparent_crc(g_2631[i][j][k].f1, "g_2631[i][j][k].f1", print_hash_value);
                transparent_crc(g_2631[i][j][k].f2, "g_2631[i][j][k].f2", print_hash_value);
                transparent_crc(g_2631[i][j][k].f3, "g_2631[i][j][k].f3", print_hash_value);
                transparent_crc(g_2631[i][j][k].f4, "g_2631[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_2755, "g_2755", print_hash_value);
    transparent_crc(g_2821, "g_2821", print_hash_value);
    transparent_crc(g_2934, "g_2934", print_hash_value);
    transparent_crc(g_2940, "g_2940", print_hash_value);
    transparent_crc(g_3053, "g_3053", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_3192[i][j][k], "g_3192[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_3238[i][j][k].f0, "g_3238[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_3271, "g_3271", print_hash_value);
    transparent_crc(g_3320.f0, "g_3320.f0", print_hash_value);
    transparent_crc(g_3380, "g_3380", print_hash_value);
    transparent_crc(g_3398, "g_3398", print_hash_value);
    transparent_crc(g_3400, "g_3400", print_hash_value);
    transparent_crc(g_3431, "g_3431", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_3579[i].f0, "g_3579[i].f0", print_hash_value);

    }
    transparent_crc(g_3580.f0, "g_3580.f0", print_hash_value);
    transparent_crc(g_3616, "g_3616", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
