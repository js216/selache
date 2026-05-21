// SPDX-License-Identifier: MIT
// cctest_csmith_5b5dbd0e.c --- cctest case csmith_5b5dbd0e (csmith seed 1532869902)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x47644fc */

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

// Options:   -s 1532869902 -o /tmp/csmith_gen_auodw1ao/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   uint16_t  f1;
   int32_t  f2;
   int16_t  f3;
   const uint16_t  f4;
   int16_t  f5;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint16_t  f1;
   int16_t  f2;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   int32_t  f1;
};
#pragma pack(pop)

struct S3 {
   uint16_t  f0;
   uint32_t  f1;
};

union U4 {
   const int16_t  f0;
   uint64_t  f1;
};

union U5 {
   uint16_t  f0;
   const struct S1  f1;
};


static int32_t g_2 = 0xF37C04CCL;
static union U4 g_17 = {-1L};
static int32_t g_32 = (-8L);
static struct S2 g_33 = {0UL,-4L};
static union U5 g_41 = {0x3704L};
static struct S3 g_84 = {0x9778L,0UL};
static int16_t g_106 = 0L;
static uint32_t g_107[5][2] = {{0UL,18446744073709551615UL},{9UL,0UL},{0x2F557AD6L,0x2F557AD6L},{0x2F557AD6L,0UL},{9UL,18446744073709551615UL}};
static int32_t g_108[2][1][4] = {{{0x3BE9465DL,0x3BE9465DL,0x3BE9465DL,0x3BE9465DL}},{{0x3BE9465DL,0x3BE9465DL,0x3BE9465DL,0x3BE9465DL}}};
static uint64_t g_151 = 2UL;
static int64_t g_152 = 0L;
static int16_t g_161 = 0xBF07L;
static int32_t g_188 = 1L;
static uint32_t g_192[1] = {0xB1F6A926L};
static uint64_t g_195 = 3UL;



static int32_t  func_1(void);
static const int32_t  func_5(uint64_t  p_6);
static uint64_t  func_7(int8_t  p_8);
static int16_t  func_15(union U4  p_16);




static int32_t  func_1(void)
{ 
    uint8_t l_14 = 8UL;
    uint32_t l_75 = 1UL;
    uint32_t l_81 = 0x94CAA1C6L;
    struct S2 l_83 = {0x05A567ADL,-1L};
    int32_t l_191 = 1L;
    for (g_2 = 0; (g_2 >= (-12)); g_2 = safe_sub_func_int8_t_s_s(g_2, 1))
    { 
        int32_t l_57 = 0xB7CB4D62L;
        struct S1 l_114[2] = {{0xF4667568L,65535UL,0x9B53L},{0xF4667568L,65535UL,0x9B53L}};
        uint8_t l_160[2][5][2] = {{{0x79L,249UL},{1UL,3UL},{249UL,3UL},{1UL,249UL},{0x79L,0x79L}},{{0x79L,249UL},{1UL,3UL},{249UL,3UL},{1UL,249UL},{0x79L,0x79L}}};
        int8_t l_185 = 0L;
        int32_t l_190[5] = {0L,0L,0L,0L,0L};
        int i, j, k;
        l_57 = func_5(func_7((safe_mod_func_uint64_t_u_u(((~(safe_add_func_int16_t_s_s((0xF23E93D0B5486B6FLL | (l_14 = g_2)), func_15(g_17)))) | g_2), 0xBB643C8F438361CDLL))));
        if ((safe_sub_func_int16_t_s_s(((((safe_mod_func_int16_t_s_s((g_41.f0 != (((safe_rshift_func_uint16_t_u_u(l_14, 1)) > ((((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((!((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((((g_32 <= ((g_2 | g_2) || g_33.f1)) && l_75) != l_57), g_2)) | g_2), l_75)), g_41.f0)) || 0x99EAL)) ^ g_41.f0), 18446744073709551606UL)) <= l_14), 2)) || g_33.f1) != l_57) ^ g_33.f1)) <= l_57)), g_33.f1)) < 0x8F24B1200BAF9C35LL) <= 18446744073709551615UL) <= 1UL), l_57)))
        { 
            int64_t l_82 = (-1L);
            for (l_14 = 0; (l_14 != 53); ++l_14)
            { 
                if (g_33.f1)
                    break;
            }
            g_33.f1 = ((((0xE934167AL || (safe_unary_minus_func_int64_t_s((safe_mul_func_int16_t_s_s(g_33.f0, (g_41.f0 ^= (l_81 | ((g_17.f0 , l_82) || 0x76L)))))))) < g_17.f0) >= 5L) & 0L);
            l_83 = g_33;
        }
        else
        { 
            struct S2 l_97 = {0x8E2B0832L,-1L};
            int32_t l_105 = (-4L);
            uint32_t l_109 = 0x64B8EAE7L;
            union U4 l_131 = {0L};
            if (l_57)
            { 
                int8_t l_104[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_104[i] = 0L;
                if (g_33.f1)
                    break;
                g_33.f1 = (((g_84 , (((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((g_108[1][0][0] = (g_107[2][1] = (g_106 |= (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint8_t_u_u(l_57, (((((l_97 = l_83) , (safe_mod_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u((g_41.f0 != l_104[4]), l_104[4])), 5)) & 0xCDAFL) && 0x71502624D59534E3LL) > 1L), g_32))) || g_33.f0) ^ 18446744073709551611UL) ^ l_105))) & g_41.f0), 6)), g_84.f0))))), g_84.f0)), l_104[2])), 8)) , l_57) < g_2)) == 1L) < 0x9CL);
            }
            else
            { 
                --l_109;
                g_33.f1 = ((safe_sub_func_uint16_t_u_u((8UL != l_109), (l_114[1] , ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(g_17.f0, g_108[0][0][2])) || (-6L)), 0)) > 0xD0585325L)))) | g_107[2][1]);
            }
            for (l_83.f1 = 0; (l_83.f1 < (-17)); l_83.f1 = safe_sub_func_int8_t_s_s(l_83.f1, 9))
            { 
                g_33.f1 = (safe_rshift_func_uint8_t_u_u((0x5982L || (safe_rshift_func_int8_t_s_u((g_41.f0 & (g_32 = ((safe_lshift_func_int16_t_s_s(0x97DBL, (safe_lshift_func_uint16_t_u_s((g_33.f0 & l_57), 6)))) < g_84.f0))), l_83.f1))), 1));
                g_32 = g_32;
            }
            l_97.f1 = (((l_131 , (g_17 , ((l_114[1].f2 == (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u(((safe_add_func_int64_t_s_s(g_106, l_131.f0)) >= g_2), 6)) ^ l_109) > g_108[1][0][3]), g_33.f0)), 0)), l_97.f1))) , 1L))) && 0x05EB5DA6L) == g_108[1][0][0]);
        }
        for (g_33.f0 = 0; (g_33.f0 < 4); ++g_33.f0)
        { 
            uint32_t l_150 = 18446744073709551615UL;
            int32_t l_159 = 0x07010F87L;
            int32_t l_187 = 0x097E5DDEL;
            int32_t l_189 = 0x0CB55262L;
            g_32 |= (g_33.f1 |= 0x08DCF833L);
            for (l_14 = 9; (l_14 != 34); l_14++)
            { 
                g_152 = (g_151 |= (((l_83.f1 |= g_33.f1) < (g_2 , l_75)) == (((safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((((l_114[0] , g_17.f1) , g_17.f0) , 0x0DL), l_114[1].f1)), l_150)) <= g_32) <= 6UL)));
                g_161 = (246UL > (safe_sub_func_uint8_t_u_u((((l_83.f1 = g_84.f1) != (0x5EB517B2L != (safe_mod_func_uint64_t_u_u((l_159 = (l_114[1].f0 = (g_33.f1 <= l_150))), 18446744073709551608UL)))) || 0x81C4FB29L), l_160[1][4][1])));
            }
            if ((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((g_17.f0 , l_159), 5)), l_81)), (g_84.f0 != 0xF958245BBFDF0F64LL))), 0x95L)))
            { 
                uint8_t l_170 = 0x2DL;
                g_32 &= (0xA338L < (l_160[1][2][1] ^ (l_170 == ((safe_rshift_func_uint8_t_u_s(g_161, g_33.f0)) < 0x2687B70EE5EE185ALL))));
                if (l_159)
                    continue;
                g_33.f1 |= ((safe_mul_func_int16_t_s_s(l_159, (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(g_33.f0, (safe_add_func_uint64_t_u_u(((l_114[1].f0 = g_41.f0) >= (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((l_83.f1 = ((1L | l_185) || 0x4AD5L)), g_17.f0)), l_160[1][0][0]))), g_152)))), 3)))) || 0UL);
            }
            else
            { 
                int32_t l_186 = 0xB645F29CL;
                g_192[0]--;
                g_195++;
                if (l_186)
                    continue;
            }
        }
    }
    return l_14;
}



static const int32_t  func_5(uint64_t  p_6)
{ 
    struct S0 l_42[5] = {{0UL,1UL,4L,-8L,0UL,0xF497L},{0UL,1UL,4L,-8L,0UL,0xF497L},{0UL,1UL,4L,-8L,0UL,0xF497L},{0UL,1UL,4L,-8L,0UL,0xF497L},{0UL,1UL,4L,-8L,0UL,0xF497L}};
    int32_t l_45 = (-2L);
    int32_t l_56[4][5] = {{0x1FD1B63EL,0x41E2253EL,(-1L),(-1L),0x41E2253EL},{0x41E2253EL,(-1L),0x1FD1B63EL,0x41E2253EL,(-1L)},{0x6A37A547L,0x41E2253EL,0x8C4B1E4FL,0x41E2253EL,0x6A37A547L},{0x1FD1B63EL,0xB667D157L,(-1L),(-1L),0xB667D157L}};
    int i, j;
    g_32 = (g_41 , (l_45 = ((((0x3A4BL || ((l_42[2] , (safe_rshift_func_int16_t_s_u((l_42[2].f5 <= g_32), 0))) && (-6L))) , g_33.f0) != p_6) , l_42[2].f0)));
    l_56[0][0] |= (safe_mul_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((((((safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u(g_33.f1, (safe_mul_func_int16_t_s_s(((l_45 >= (((safe_unary_minus_func_uint32_t_u(l_42[2].f3)) <= (0xE3F992CEL | p_6)) <= 0xF408L)) , g_32), p_6)))), 8L)) != l_42[2].f5) <= 0x96125B66L) , 253UL) >= 3UL))), p_6));
    return g_33.f1;
}



static uint64_t  func_7(int8_t  p_8)
{ 
    uint64_t l_38[3];
    int i;
    for (i = 0; i < 3; i++)
        l_38[i] = 0xE082ADE89B93B3BBLL;
    --l_38[2];
    return l_38[2];
}



static int16_t  func_15(union U4  p_16)
{ 
    uint8_t l_18 = 7UL;
    struct S2 l_31[5][4] = {{{0x707E294BL,0x8FE4DE5AL},{0xD8C65816L,0L},{0xD8C65816L,0L},{0x707E294BL,0x8FE4DE5AL}},{{0xD8C65816L,0L},{0x707E294BL,0x8FE4DE5AL},{0xD8C65816L,0L},{0xD8C65816L,0L}},{{0x707E294BL,0x8FE4DE5AL},{0x707E294BL,0x8FE4DE5AL},{4294967288UL,0xEF7E2919L},{0x707E294BL,0x8FE4DE5AL}},{{0x707E294BL,0x8FE4DE5AL},{0xD8C65816L,0L},{0xD8C65816L,0L},{0x707E294BL,0x8FE4DE5AL}},{{0xD8C65816L,0L},{0x707E294BL,0x8FE4DE5AL},{0xD8C65816L,0L},{0xD8C65816L,0L}}};
    int i, j;
    l_18 = 0x7A329EF4L;
    for (g_17.f1 = 0; (g_17.f1 >= 6); g_17.f1++)
    { 
        g_32 &= ((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((g_17.f1 & g_17.f1), (safe_rshift_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s((p_16.f0 <= g_2), p_16.f0)), 0L)) | l_18) , l_31[1][2]) , 0xE4L), g_2)))), g_17.f1)) || g_17.f1);
        l_31[1][2] = g_33;
    }
    l_31[1][2].f1 = (g_33.f1 ^= (((safe_lshift_func_uint16_t_u_s(l_31[1][2].f1, p_16.f0)) == (safe_mul_func_uint8_t_u_u((l_18 < 6UL), l_31[1][2].f1))) , l_18));
    return l_18;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33.f0, "g_33.f0", print_hash_value);
    transparent_crc(g_33.f1, "g_33.f1", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_107[i][j], "g_107[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_108[i][j][k], "g_108[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_192[i], "g_192[i]", print_hash_value);

    }
    transparent_crc(g_195, "g_195", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
