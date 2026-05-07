// SPDX-License-Identifier: MIT
// cctest_csmith_d59f5824.c --- cctest case csmith_d59f5824 (csmith seed 3583989796)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x86ee3aec */

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

// Options:   -s 3583989796 -o /tmp/csmith_gen_3zdwa3hf/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const signed f0 : 5;
   unsigned f1 : 30;
   unsigned f2 : 2;
};
#pragma pack(pop)

struct S1 {
   unsigned f0 : 6;
   const signed f1 : 5;
   const uint32_t  f2;
   signed f3 : 6;
};

union U2 {
   uint16_t  f0;
   uint16_t  f1;
   int32_t  f2;
   uint64_t  f3;
};

union U3 {
   unsigned f0 : 4;
   const uint8_t  f1;
};

union U4 {
   signed f0 : 30;
   const int8_t  f1;
};


static uint8_t g_8 = 0xA8L;
static int32_t g_24 = (-8L);
static uint64_t g_26 = 0x5D8720725FC1C575LL;
static struct S0 g_34[5] = {{-3,27242,1},{-3,27242,1},{-3,27242,1},{-3,27242,1},{-3,27242,1}};
static union U4 g_38 = {0x394A737BL};
static uint64_t g_52 = 0xEE481DB3AAC01277LL;
static uint64_t *g_51 = &g_52;
static int8_t g_58 = 0xA0L;
static int32_t g_72 = 0x1F6E690DL;
static int16_t g_85[2][4] = {{0xD856L,0x1E91L,0xD856L,0x1E91L},{0xD856L,0x1E91L,0xD856L,0x1E91L}};
static uint16_t g_88[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static struct S0 g_107 = {-0,22091,1};
static struct S1 g_114[7] = {{1,3,5UL,4},{1,3,5UL,4},{1,3,5UL,4},{1,3,5UL,4},{1,3,5UL,4},{1,3,5UL,4},{1,3,5UL,4}};
static union U2 g_118 = {65535UL};
static uint32_t g_131 = 0x6DCB1400L;
static int64_t g_134 = 5L;
static union U3 g_184 = {0xAF002CDDL};
static struct S0 *g_196 = &g_107;
static struct S0 **g_195 = &g_196;
static int16_t g_204[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int16_t g_205 = (-4L);
static int16_t g_206 = (-6L);
static int64_t g_207 = 0xD140ED9186F8B660LL;
static int64_t g_208[1][7] = {{9L,9L,9L,9L,9L,9L,9L}};
static uint16_t g_209 = 0xE319L;
static uint64_t g_317 = 18446744073709551610UL;
static int8_t *g_324 = &g_58;
static const int8_t g_329[3] = {0x52L,0x52L,0x52L};
static const int32_t *g_339 = (void*)0;
static int64_t g_358 = 0x9276F7A8BFFB300FLL;
static uint32_t g_359 = 2UL;
static uint64_t g_372 = 0UL;
static int8_t g_396 = 0xFDL;
static uint8_t *g_411 = (void*)0;
static uint8_t **g_410 = &g_411;
static const struct S1 *g_424[4][2][2] = {{{&g_114[4],&g_114[4]},{&g_114[4],&g_114[4]}},{{&g_114[4],&g_114[4]},{&g_114[4],&g_114[4]}},{{&g_114[4],&g_114[4]},{&g_114[4],&g_114[4]}},{{&g_114[4],&g_114[4]},{&g_114[4],&g_114[4]}}};
static const struct S1 **g_423 = &g_424[0][0][1];
static int8_t g_431 = 0x83L;
static uint16_t g_483[2] = {0UL,0UL};
static uint8_t g_509[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
static uint64_t g_511 = 0x52C124EF39D5B40FLL;
static int32_t g_518 = 0x1F4056B0L;
static int64_t g_521 = 0x82D5CA2DADA7264BLL;
static int16_t g_522 = 0xF610L;
static uint8_t g_525 = 0UL;
static union U4 g_584 = {0xDE3ABEA5L};
static union U4 * const g_583 = &g_584;
static union U4 * const *g_582[7] = {&g_583,&g_583,&g_583,&g_583,&g_583,&g_583,&g_583};
static union U2 **g_594 = (void*)0;
static union U2 *g_602 = &g_118;
static int8_t g_621 = 0xCFL;
static int32_t g_622 = 0L;
static uint64_t g_623 = 0x2AF5E9E7A45A9656LL;
static union U3 g_631 = {4294967286UL};
static union U3 *g_630[4][1][4] = {{{(void*)0,&g_184,&g_631,&g_631}},{{&g_631,&g_631,(void*)0,&g_631}},{{&g_631,&g_184,&g_631,(void*)0}},{{&g_631,(void*)0,(void*)0,&g_631}}};
static uint8_t g_650 = 0xFFL;
static uint64_t **g_654 = &g_51;
static uint64_t ***g_653 = &g_654;
static int32_t g_670 = 0x713BA92FL;
static int32_t g_726 = (-1L);
static int16_t g_728[1] = {0L};
static uint64_t g_729 = 0xA4699F279D20FF14LL;
static int16_t g_743 = 0x6537L;
static uint16_t g_744 = 0x0AECL;
static uint64_t g_786 = 18446744073709551610UL;
static union U2 ***g_790[5] = {&g_594,&g_594,&g_594,&g_594,&g_594};
static union U2 ****g_789 = &g_790[3];
static union U3 g_796 = {4294967286UL};
static uint16_t g_840 = 0x0604L;
static uint64_t g_877 = 0xA6B98657468C28A9LL;
static union U3 **g_899 = &g_630[2][0][0];
static union U3 ***g_898[6][5][7] = {{{&g_899,(void*)0,&g_899,(void*)0,&g_899,(void*)0,&g_899},{(void*)0,&g_899,&g_899,&g_899,&g_899,&g_899,(void*)0},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,(void*)0},{(void*)0,&g_899,(void*)0,&g_899,&g_899,&g_899,(void*)0},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899}},{{&g_899,(void*)0,(void*)0,&g_899,&g_899,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,(void*)0,(void*)0},{&g_899,&g_899,&g_899,(void*)0,&g_899,(void*)0,&g_899}},{{&g_899,(void*)0,(void*)0,&g_899,&g_899,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,(void*)0,&g_899,&g_899},{&g_899,&g_899,(void*)0,&g_899,&g_899,&g_899,(void*)0},{&g_899,(void*)0,&g_899,&g_899,&g_899,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899}},{{(void*)0,&g_899,&g_899,(void*)0,(void*)0,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,(void*)0,&g_899},{&g_899,&g_899,&g_899,(void*)0,&g_899,(void*)0,&g_899}},{{&g_899,&g_899,(void*)0,&g_899,&g_899,&g_899,(void*)0},{&g_899,&g_899,(void*)0,&g_899,&g_899,&g_899,&g_899},{(void*)0,(void*)0,&g_899,&g_899,&g_899,&g_899,&g_899},{&g_899,(void*)0,&g_899,&g_899,(void*)0,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,(void*)0}},{{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,(void*)0,(void*)0,(void*)0},{&g_899,(void*)0,&g_899,&g_899,&g_899,(void*)0,&g_899},{&g_899,(void*)0,&g_899,&g_899,&g_899,&g_899,&g_899},{&g_899,&g_899,&g_899,&g_899,&g_899,&g_899,&g_899}}};
static uint32_t g_917 = 0xDB1C0CBDL;
static int16_t g_922 = 0xA70AL;
static uint8_t g_924 = 1UL;
static int32_t *g_950 = &g_72;
static uint32_t g_989 = 18446744073709551609UL;
static int64_t g_1010 = 0x7EC721A16534738DLL;
static int8_t g_1011 = 0xA7L;
static int16_t g_1012 = 0x8C2EL;
static int32_t g_1014 = 0L;
static int32_t g_1015 = 0L;
static uint8_t g_1016[2][6] = {{3UL,3UL,0xA6L,3UL,3UL,0xA6L},{3UL,3UL,0xA6L,3UL,3UL,0xA6L}};
static struct S0 ***g_1037 = &g_195;
static struct S0 ****g_1036 = &g_1037;
static struct S0 *****g_1035 = &g_1036;
static int32_t **g_1039 = &g_950;
static int64_t g_1136 = 9L;
static uint32_t g_1137 = 0x70185ADFL;
static int8_t g_1145 = (-1L);
static uint64_t g_1146 = 18446744073709551612UL;
static uint16_t g_1152 = 0xCE75L;
static uint64_t g_1183 = 1UL;
static union U3 g_1196[7][4][6] = {{{{0x38BC799CL},{0UL},{0x823C9EB5L},{0UL},{0x823C9EB5L},{0UL}},{{4294967295UL},{0x3BCB606DL},{0x0A4A828DL},{0x226CD841L},{0xBD2965B4L},{0xA6591000L}},{{0x48465C09L},{1UL},{0xE104F455L},{4294967295UL},{0UL},{0xEEBC528AL}},{{0x3BCB606DL},{1UL},{0x38BC799CL},{1UL},{0xBD2965B4L},{4294967295UL}}},{{{0xD08FE99EL},{0x3BCB606DL},{4294967295UL},{0xE5137E5BL},{0x823C9EB5L},{8UL}},{{8UL},{0UL},{0xC24FEDE4L},{0xD08FE99EL},{0xEEBC528AL},{1UL}},{{0x319E6E36L},{4294967295UL},{4294967293UL},{0x0A4A828DL},{4294967295UL},{0xD08FE99EL}},{{0xE41D3E62L},{0xD08FE99EL},{0x823C9EB5L},{0xEEBC528AL},{0x48465C09L},{0x319E6E36L}}},{{{0x823C9EB5L},{4294967287UL},{0UL},{0x226CD841L},{0x226CD841L},{0UL}},{{0x43E11E79L},{0x43E11E79L},{4294967295UL},{4294967295UL},{0UL},{7UL}},{{0x85049554L},{0UL},{0x3BCB606DL},{0UL},{0xE104F455L},{4294967295UL}},{{0UL},{0x85049554L},{0x3BCB606DL},{4UL},{0x43E11E79L},{7UL}}},{{{8UL},{4UL},{4294967295UL},{0UL},{4294967295UL},{0UL}},{{0UL},{4294967295UL},{0UL},{0x4A319EC3L},{0UL},{0x319E6E36L}},{{1UL},{4294967293UL},{0x823C9EB5L},{7UL},{0UL},{0xD08FE99EL}},{{0UL},{0x38BC799CL},{4294967293UL},{0x226CD841L},{0xC24FEDE4L},{1UL}}},{{{1UL},{0x48465C09L},{0xC24FEDE4L},{8UL},{0UL},{8UL}},{{4294967295UL},{0x823C9EB5L},{4294967295UL},{0xA6591000L},{0xDF17AB0CL},{4294967295UL}},{{4294967295UL},{1UL},{4294967295UL},{0xE41D3E62L},{5UL},{4294967293UL}},{{0x0A4A828DL},{4294967287UL},{0UL},{0xE41D3E62L},{0UL},{0xDF17AB0CL}}},{{{4294967295UL},{0x4A319EC3L},{0x226CD841L},{0xDF17AB0CL},{0x0A4A828DL},{0x38BC799CL}},{{1UL},{0x3BCB606DL},{0x2E6AEBCBL},{0x0A4A828DL},{0x77BADC9CL},{4294967287UL}},{{0xBF4E55A0L},{8UL},{0xDF17AB0CL},{1UL},{4294967295UL},{4294967295UL}},{{0UL},{0x77BADC9CL},{0x823C9EB5L},{0UL},{0x319E6E36L},{1UL}}},{{{0xEEBC528AL},{5UL},{8UL},{4294967286UL},{0UL},{0UL}},{{4294967287UL},{0xEEBC528AL},{0xEEBC528AL},{4294967287UL},{0xBF4E55A0L},{0xA6591000L}},{{0x0A4A828DL},{1UL},{1UL},{4294967295UL},{0xC894F573L},{4294967286UL}},{{0x38BC799CL},{0x4A319EC3L},{0xC24FEDE4L},{0xBD2965B4L},{0xC894F573L},{0x3BCB606DL}}}};
static const union U3 g_1224 = {1UL};
static union U4 *g_1240 = (void*)0;
static uint32_t g_1242 = 5UL;
static uint32_t * const **g_1276 = (void*)0;
static uint32_t * const ***g_1275 = &g_1276;
static union U2 *****g_1281 = &g_789;
static uint32_t *g_1341 = &g_917;
static uint32_t **g_1340 = &g_1341;
static int64_t g_1372 = 0x4F94F721B6F26953LL;
static int8_t g_1403 = 0x4AL;
static uint16_t g_1404 = 65529UL;
static int16_t g_1431 = (-2L);
static int16_t g_1432 = (-1L);
static int8_t g_1433 = 0xF4L;
static uint8_t g_1434[2][7][6] = {{{1UL,0x7AL,1UL,1UL,8UL,0x0AL},{0x4DL,1UL,2UL,1UL,0UL,6UL},{8UL,0x9FL,0xD3L,0x9DL,0UL,6UL},{247UL,1UL,0xDCL,8UL,8UL,0xDCL},{0x7AL,0x7AL,0xEAL,8UL,1UL,0x0EL},{247UL,1UL,6UL,0x9DL,0xDCL,0xEAL},{8UL,247UL,6UL,1UL,0x7AL,0x0EL}},{{0x4DL,1UL,0xEAL,1UL,1UL,0xDCL},{1UL,1UL,0xDCL,0UL,0x7AL,6UL},{0xDCL,247UL,0xD3L,247UL,0xDCL,6UL},{0xDCL,1UL,2UL,0UL,1UL,0x0AL},{1UL,0x7AL,1UL,1UL,8UL,0x0AL},{0x4DL,1UL,2UL,1UL,0UL,6UL},{8UL,0x9FL,0xD3L,0x9DL,0UL,6UL}}};
static union U4 **g_1449 = &g_1240;
static union U4 ***g_1448 = &g_1449;
static union U4 ****g_1447 = &g_1448;
static int16_t g_1455 = (-1L);
static uint32_t g_1456 = 0UL;
static int16_t *g_1468 = (void*)0;
static int16_t **g_1467[5][2] = {{&g_1468,&g_1468},{&g_1468,&g_1468},{&g_1468,&g_1468},{&g_1468,&g_1468},{&g_1468,&g_1468}};
static int16_t ***g_1466[5][2] = {{&g_1467[0][1],&g_1467[0][1]},{&g_1467[0][1],&g_1467[0][1]},{&g_1467[0][1],&g_1467[0][1]},{&g_1467[0][1],&g_1467[0][1]},{&g_1467[0][1],&g_1467[0][1]}};
static const uint32_t *g_1477 = (void*)0;
static uint32_t g_1556 = 0x0AA3E4A7L;
static uint32_t **g_1569 = (void*)0;
static uint32_t ***g_1568 = &g_1569;
static uint32_t ****g_1567 = &g_1568;
static uint32_t *****g_1566 = &g_1567;
static int64_t g_1596 = 6L;
static int32_t g_1666 = 0xE0ECF7E5L;
static uint16_t g_1667[7][2][1] = {{{0x476EL},{0x9CD2L}},{{0x9CD2L},{0x476EL}},{{65534UL},{0x476EL}},{{0x9CD2L},{0x9CD2L}},{{0x476EL},{65534UL}},{{0x476EL},{0x9CD2L}},{{0x9CD2L},{0x476EL}}};
static int8_t g_1683 = 0L;
static uint32_t g_1768 = 7UL;
static int8_t g_1796 = 0L;
static uint64_t * const *g_1834[7] = {&g_51,&g_51,&g_51,&g_51,&g_51,&g_51,&g_51};
static uint64_t * const **g_1833 = &g_1834[3];
static union U2 ** const *g_1857[4] = {&g_594,&g_594,&g_594,&g_594};
static union U2 ** const **g_1856 = &g_1857[0];
static union U2 ** const ***g_1855 = &g_1856;
static uint32_t ** const *g_1860 = (void*)0;
static uint32_t ** const **g_1859[6][7] = {{&g_1860,(void*)0,&g_1860,&g_1860,&g_1860,&g_1860,&g_1860},{(void*)0,(void*)0,&g_1860,(void*)0,(void*)0,&g_1860,(void*)0},{&g_1860,(void*)0,(void*)0,&g_1860,&g_1860,&g_1860,(void*)0},{&g_1860,(void*)0,(void*)0,&g_1860,&g_1860,&g_1860,&g_1860},{(void*)0,(void*)0,&g_1860,&g_1860,&g_1860,(void*)0,(void*)0},{&g_1860,&g_1860,(void*)0,&g_1860,&g_1860,&g_1860,(void*)0}};
static int32_t g_1933 = 0x84E294F3L;
static union U3 g_1954 = {1UL};
static struct S0 *****g_1984[6] = {(void*)0,(void*)0,&g_1036,(void*)0,(void*)0,&g_1036};
static const uint32_t g_1992 = 7UL;
static uint8_t g_2163 = 0x22L;
static union U3 ****g_2196 = &g_898[0][1][4];
static uint16_t g_2222 = 0UL;
static uint64_t g_2236 = 18446744073709551613UL;



static uint64_t  func_1(void);
static int16_t  func_11(uint32_t  p_12, union U3  p_13);
static union U3  func_15(struct S1  p_16, int64_t  p_17, uint8_t  p_18, int32_t  p_19);
static struct S1  func_20(union U3  p_21);
static union U2 * func_31(struct S0  p_32, uint64_t  p_33);
static int32_t  func_35(union U4  p_36, int32_t * p_37);
static int32_t * func_39(struct S0  p_40, uint32_t  p_41, int32_t  p_42, union U2 * p_43, union U2 * p_44);
static struct S0  func_45(uint32_t  p_46);




static uint64_t  func_1(void)
{ 
    int32_t l_14 = 0L;
    union U3 l_22[5] = {{1UL},{1UL},{1UL},{1UL},{1UL}};
    const int32_t *l_669 = &g_670;
    int16_t l_671 = (-3L);
    uint16_t *l_2227 = &g_88[2];
    int32_t *l_2228 = &g_1666;
    int32_t *l_2229 = &g_72;
    int32_t *l_2230 = &g_670;
    int32_t l_2231 = 0x82968143L;
    int32_t l_2232 = (-4L);
    int32_t *l_2233 = &g_1666;
    int32_t *l_2234 = &g_670;
    int32_t *l_2235[5];
    int i;
    for (i = 0; i < 5; i++)
        l_2235[i] = &g_622;
    (*l_2228) &= ((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_8, 1UL)), ((*l_2227) = (safe_rshift_func_int16_t_s_u(func_11(l_14, func_15(func_20(l_22[2]), (g_114[0].f2 == (safe_div_func_uint8_t_u_u((~(((~(0x33BBEA4214613B6ELL ^ g_509[2])) , l_669) == (void*)0)), l_671))), (*l_669), (*l_669))), g_621))))) ^ (*l_669)), 1L)) == (*l_669));
    ++g_2236;
    return (***g_1833);
}



static int16_t  func_11(uint32_t  p_12, union U3  p_13)
{ 
    const struct S0 *l_1528 = &g_34[2];
    const struct S0 * const *l_1527[3][2][6] = {{{&l_1528,&l_1528,&l_1528,(void*)0,&l_1528,(void*)0},{&l_1528,&l_1528,&l_1528,(void*)0,&l_1528,(void*)0}},{{&l_1528,&l_1528,&l_1528,(void*)0,&l_1528,(void*)0},{&l_1528,&l_1528,&l_1528,(void*)0,&l_1528,(void*)0}},{{&l_1528,&l_1528,&l_1528,(void*)0,&l_1528,(void*)0},{&l_1528,&l_1528,&l_1528,(void*)0,&l_1528,(void*)0}}};
    const struct S0 * const **l_1526 = &l_1527[2][0][5];
    const struct S0 * const ***l_1525 = &l_1526;
    const struct S0 * const ****l_1524 = &l_1525;
    uint32_t l_1546 = 0xDB25E1F0L;
    int32_t l_1549 = 0L;
    int32_t l_1550 = 0xDCDF6B21L;
    int32_t l_1551 = 1L;
    int32_t l_1552 = 6L;
    int32_t l_1553 = (-5L);
    int32_t l_1554 = 0x183157D8L;
    int32_t l_1555 = (-8L);
    int64_t l_1606 = 0x50CD429C2E3714C8LL;
    int64_t l_1763[1][1];
    uint8_t ** const *l_1824[3];
    uint16_t l_1863 = 6UL;
    uint32_t *l_1874 = (void*)0;
    uint32_t **l_1873 = &l_1874;
    struct S0 **l_1889 = (void*)0;
    uint32_t l_1896 = 18446744073709551613UL;
    int64_t l_1902 = 9L;
    union U2 **l_1913 = &g_602;
    uint64_t *l_1974 = &g_786;
    uint16_t *l_2054 = &g_118.f1;
    union U3 *l_2080 = &g_1196[5][1][5];
    struct S1 l_2093 = {1,-3,0xAC8236ADL,-0};
    struct S0 **l_2094 = &g_196;
    uint32_t *****l_2118[2];
    struct S0 l_2136[6][2][2] = {{{{1,2553,1},{4,27963,1}},{{4,27963,1},{1,2553,1}}},{{{4,27963,1},{4,27963,1}},{{1,2553,1},{4,27963,1}}},{{{4,27963,1},{1,2553,1}},{{4,27963,1},{4,27963,1}}},{{{1,2553,1},{4,27963,1}},{{4,27963,1},{1,2553,1}}},{{{4,27963,1},{4,27963,1}},{{1,2553,1},{4,27963,1}}},{{{4,27963,1},{1,2553,1}},{{4,27963,1},{4,27963,1}}}};
    union U2 ****l_2173 = &g_790[3];
    int8_t l_2176 = 0xF8L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_1763[i][j] = 0L;
    }
    for (i = 0; i < 3; i++)
        l_1824[i] = &g_410;
    for (i = 0; i < 2; i++)
        l_2118[i] = &g_1567;
    for (g_72 = 0; (g_72 != 17); g_72 = safe_add_func_uint8_t_u_u(g_72, 1))
    { 
        int64_t *l_1540 = &g_208[0][3];
        int32_t l_1541 = (-1L);
        union U3 l_1544 = {0UL};
        uint16_t *l_1545 = &g_118.f1;
        int32_t l_1547 = 0xB6211CDEL;
        int32_t *l_1548[1];
        uint32_t ***l_1565 = (void*)0;
        uint32_t ****l_1564[6][6] = {{&l_1565,&l_1565,&l_1565,&l_1565,&l_1565,&l_1565},{&l_1565,&l_1565,&l_1565,&l_1565,(void*)0,&l_1565},{&l_1565,(void*)0,&l_1565,&l_1565,&l_1565,&l_1565},{&l_1565,(void*)0,&l_1565,&l_1565,(void*)0,&l_1565},{(void*)0,&l_1565,&l_1565,&l_1565,&l_1565,(void*)0},{&l_1565,&l_1565,&l_1565,&l_1565,&l_1565,&l_1565}};
        uint32_t *****l_1563[5];
        uint64_t l_1586 = 18446744073709551615UL;
        uint32_t l_1587 = 18446744073709551615UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1548[i] = &g_24;
        for (i = 0; i < 5; i++)
            l_1563[i] = &l_1564[2][4];
        l_1547 = (safe_lshift_func_int16_t_s_u(((void*)0 != l_1524), ((safe_unary_minus_func_uint8_t_u((((((safe_mul_func_int16_t_s_s(0x6B94L, ((safe_mul_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(g_329[1], 1UL)) == (safe_mod_func_uint16_t_u_u(((*l_1545) &= (safe_sub_func_int64_t_s_s(((*l_1540) = g_1014), ((--(***g_653)) | (l_1544 , g_34[3].f1))))), g_511))), p_12)) > 0xDDCEL))) | l_1546) == 18446744073709551615UL) | p_12) > l_1546))) < l_1546)));
        g_1556--;
        for (g_1146 = 0; (g_1146 <= 1); g_1146 += 1)
        { 
            union U2 l_1595 = {65526UL};
            int i, j;
        }
    }
    for (g_623 = 0; (g_623 <= 0); g_623 += 1)
    { 
        int32_t l_1631 = 0L;
        const uint8_t *l_1646 = &g_1016[1][1];
        uint32_t *l_1678 = (void*)0;
        struct S0 l_1700 = {-0,26483,0};
        struct S1 l_1701[5] = {{2,-3,18446744073709551608UL,-5},{2,-3,18446744073709551608UL,-5},{2,-3,18446744073709551608UL,-5},{2,-3,18446744073709551608UL,-5},{2,-3,18446744073709551608UL,-5}};
        union U3 **l_1703 = &g_630[2][0][0];
        uint64_t **l_1726 = (void*)0;
        union U2 l_1785 = {0x477BL};
        int8_t **l_1795 = &g_324;
        int32_t l_1809 = 0x76E18D2DL;
        uint8_t ** const *l_1825 = &g_410;
        uint32_t *l_1872 = &g_131;
        uint32_t **l_1871 = &l_1872;
        int64_t *l_1880 = &g_1596;
        int16_t *l_1881 = &g_728[0];
        uint32_t l_1882 = 0x6AFFDA02L;
        union U3 *l_1953 = &g_1954;
        uint64_t *l_1973[5][2][4] = {{{(void*)0,&g_26,&g_26,(void*)0},{&g_26,(void*)0,&g_26,&g_26}},{{(void*)0,(void*)0,&g_511,(void*)0},{(void*)0,&g_26,&g_26,(void*)0}},{{&g_26,(void*)0,&g_26,&g_26},{(void*)0,(void*)0,&g_511,(void*)0}},{{(void*)0,&g_26,&g_26,(void*)0},{&g_26,(void*)0,&g_26,&g_26}},{{(void*)0,(void*)0,&g_511,(void*)0},{(void*)0,&g_26,&g_26,&g_26}}};
        union U4 *l_1975 = &g_584;
        uint32_t *****l_2047 = &g_1567;
        struct S0 **l_2073 = &g_196;
        uint16_t l_2117[6][5] = {{1UL,65534UL,1UL,1UL,65534UL},{65535UL,0x837AL,0xD8ECL,0xD8ECL,0x837AL},{1UL,65534UL,1UL,1UL,65534UL},{65535UL,0x837AL,0xD8ECL,0xD8ECL,0x837AL},{1UL,65534UL,1UL,1UL,65534UL},{65535UL,0x837AL,0xD8ECL,0xD8ECL,0x837AL}};
        struct S0 * const **l_2130 = (void*)0;
        struct S0 * const ***l_2129[2][4] = {{&l_2130,&l_2130,&l_2130,&l_2130},{&l_2130,&l_2130,&l_2130,&l_2130}};
        int32_t l_2162[3][2] = {{0L,1L},{0L,0L},{1L,0L}};
        union U2 * const *l_2172 = &g_602;
        union U2 * const **l_2171 = &l_2172;
        union U2 * const ***l_2170[3];
        uint64_t l_2181 = 0xF92CC1E9321A2F8BLL;
        union U2 l_2193 = {0x5380L};
        union U2 **l_2209 = &g_602;
        int32_t ***l_2213 = &g_1039;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_2170[i] = &l_2171;
    }
    return l_1549;
}



static union U3  func_15(struct S1  p_16, int64_t  p_17, uint8_t  p_18, int32_t  p_19)
{ 
    const int16_t l_674 = 0x0913L;
    const uint64_t *l_676 = (void*)0;
    int32_t l_687 = 0xD9496CB9L;
    uint32_t *l_691 = &g_131;
    uint32_t **l_690 = &l_691;
    int32_t l_720 = 8L;
    union U2 **l_819 = &g_602;
    int16_t l_895 = (-1L);
    union U3 *l_937 = &g_184;
    uint8_t **l_954[4] = {&g_411,&g_411,&g_411,&g_411};
    struct S0 l_994 = {-4,4841,1};
    int32_t *l_996 = &g_24;
    int8_t l_1008 = 0xE2L;
    int32_t l_1009[2][6][5] = {{{0x56D4A4A9L,0xEF437EBDL,0x56D4A4A9L,0x56D4A4A9L,0xEF437EBDL},{0L,0xBAC0F9D7L,0xBAC0F9D7L,0L,0xBAC0F9D7L},{0xEF437EBDL,0xEF437EBDL,0L,0xEF437EBDL,0xEF437EBDL},{0xBAC0F9D7L,0L,0xBAC0F9D7L,0xBAC0F9D7L,0L},{0xEF437EBDL,0x56D4A4A9L,0x56D4A4A9L,0xEF437EBDL,0x56D4A4A9L},{0L,0L,(-4L),0L,0L}},{{0x56D4A4A9L,0xEF437EBDL,0x56D4A4A9L,0x56D4A4A9L,0xEF437EBDL},{0L,0xBAC0F9D7L,0xBAC0F9D7L,0L,0xBAC0F9D7L},{0xEF437EBDL,0xEF437EBDL,0L,0xEF437EBDL,0xEF437EBDL},{0xBAC0F9D7L,0L,0xBAC0F9D7L,0xBAC0F9D7L,0L},{0xEF437EBDL,0x56D4A4A9L,0x56D4A4A9L,0xEF437EBDL,0x56D4A4A9L},{0L,0L,(-4L),0L,0L}}};
    int64_t l_1013[4][3] = {{0xF18C82E41D53B946LL,0xF18C82E41D53B946LL,0xF18C82E41D53B946LL},{(-2L),0x664612C88CB372DFLL,(-2L)},{0xF18C82E41D53B946LL,0xF18C82E41D53B946LL,0xF18C82E41D53B946LL},{(-2L),0x664612C88CB372DFLL,(-2L)}};
    uint32_t *l_1038 = (void*)0;
    int32_t l_1051 = 1L;
    uint16_t l_1064 = 65535UL;
    uint8_t l_1111[7][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
    uint64_t *l_1227 = &g_511;
    uint8_t l_1236[3];
    int64_t l_1238 = 3L;
    const struct S1 l_1247 = {7,0,0x3FD4158EL,-0};
    union U2 *****l_1265 = &g_789;
    struct S0 **l_1278 = &g_196;
    const union U4 l_1284 = {-7L};
    uint8_t l_1516 = 0x57L;
    int32_t *l_1519[6][3][2] = {{{(void*)0,&g_24},{&l_1051,(void*)0},{&g_24,&g_670}},{{&g_622,&g_622},{&l_1051,&g_622},{&g_622,&g_670}},{{&g_24,(void*)0},{&l_1051,&g_24},{(void*)0,&g_670}},{{(void*)0,&g_24},{&l_1051,(void*)0},{&g_24,&g_670}},{{&g_622,&g_622},{&l_1051,&g_622},{&g_622,&g_670}},{{&g_24,(void*)0},{&l_1051,&g_24},{(void*)0,&g_670}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1236[i] = 0x6DL;
    return (*l_937);
}



static struct S1  func_20(union U3  p_21)
{ 
    int32_t *l_23[5][2][5] = {{{&g_24,&g_24,&g_24,&g_24,&g_24},{&g_24,&g_24,&g_24,&g_24,&g_24}},{{&g_24,&g_24,&g_24,&g_24,&g_24},{&g_24,&g_24,&g_24,(void*)0,&g_24}},{{(void*)0,&g_24,&g_24,&g_24,&g_24},{&g_24,&g_24,(void*)0,(void*)0,&g_24}},{{&g_24,&g_24,(void*)0,&g_24,&g_24},{&g_24,&g_24,&g_24,&g_24,&g_24}},{{&g_24,&g_24,(void*)0,&g_24,&g_24},{&g_24,(void*)0,&g_24,(void*)0,&g_24}}};
    int64_t l_25 = 0xC9BA5B0420410224LL;
    struct S1 l_664 = {0,-4,4UL,1};
    int i, j, k;
    g_26++;
    for (l_25 = 0; (l_25 < (-7)); --l_25)
    { 
        union U2 **l_627 = &g_602;
        union U3 *l_629 = &g_184;
        union U3 **l_628[1][2][4] = {{{&l_629,&l_629,&l_629,&l_629},{&l_629,&l_629,&l_629,&l_629}}};
        const int32_t l_651 = (-1L);
        int64_t l_656 = 0xAC22D6BFA959186CLL;
        int32_t l_659[6][2][5] = {{{(-7L),(-7L),(-8L),0xA20BBAF5L,(-9L)},{0xCFF4850DL,0xD9733FBBL,0xD9733FBBL,0xCFF4850DL,(-6L)}},{{0x899021FAL,0xA20BBAF5L,0xAA272196L,0xAA272196L,0xA20BBAF5L},{(-6L),0xD9733FBBL,0x6B5B5D9EL,0x6039EA8EL,0x6039EA8EL}},{{1L,(-7L),1L,0xAA272196L,(-8L)},{0x1100970DL,0xCFF4850DL,0x6039EA8EL,0xCFF4850DL,0x1100970DL}},{{1L,0x899021FAL,(-7L),0xA20BBAF5L,(-7L)},{(-6L),(-6L),0x6039EA8EL,0x1100970DL,1L}},{{0x899021FAL,1L,1L,0x899021FAL,(-7L)},{0xCFF4850DL,0x1100970DL,0x6B5B5D9EL,0x6B5B5D9EL,0x1100970DL}},{{(-7L),1L,0xAA272196L,(-8L),(-8L)},{0xD9733FBBL,(-6L),0xD9733FBBL,0x6B5B5D9EL,0x6039EA8EL}}};
        int i, j, k;
        (*l_627) = func_31(g_34[3], g_34[3].f1);
        g_630[1][0][1] = &p_21;
        if (g_631.f0)
            break;
        for (g_431 = 6; (g_431 >= 0); g_431 -= 1)
        { 
            int32_t l_652 = 0x6FF2CD97L;
            uint8_t l_661 = 255UL;
            int i;
            g_622 = ((g_204[g_431] | (safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((l_652 &= (((safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((g_204[g_431] == ((safe_div_func_int16_t_s_s((safe_add_func_int64_t_s_s(p_21.f0, ((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(g_34[3].f1, (0UL != (*g_324)))) & ((g_650 != p_21.f0) > 0xAE46L)), p_21.f0)) <= g_26))), g_204[g_431])) != 0L)), (*g_324))) & 0UL) , (-5L)), g_204[g_431])), l_651)) != g_114[0].f3) == p_21.f0)) && (*g_324)) || (*g_51)), 1L)), p_21.f0))) , 1L);
            for (l_652 = 0; (l_652 <= 6); l_652 += 1)
            { 
                uint64_t ***l_655 = &g_654;
                int32_t l_657 = 0x1336CDD6L;
                int32_t l_658 = 0xA2F15E8CL;
                int32_t l_660 = 0xC66BD057L;
                l_655 = g_653;
                g_114[0].f3 = l_656;
                --l_661;
                if (l_652)
                    continue;
            }
        }
    }
    return l_664;
}



static union U2 * func_31(struct S0  p_32, uint64_t  p_33)
{ 
    union U2 *l_117 = &g_118;
    int32_t *l_626 = &g_24;
    (*l_626) = func_35(g_38, func_39(func_45(p_32.f2), ((p_32.f0 , p_32.f1) , 0x98DEB230L), (0xDC179BD3B10D6F68LL || 1L), l_117, l_117));
    return l_117;
}



static int32_t  func_35(union U4  p_36, int32_t * p_37)
{ 
    uint8_t *l_401 = (void*)0;
    uint8_t *l_402[5][7] = {{&g_8,&g_8,(void*)0,&g_8,&g_8,&g_8,(void*)0},{&g_8,&g_8,(void*)0,&g_8,&g_8,(void*)0,&g_8},{&g_8,&g_8,&g_8,&g_8,&g_8,(void*)0,&g_8},{&g_8,&g_8,&g_8,(void*)0,(void*)0,&g_8,(void*)0},{&g_8,(void*)0,(void*)0,&g_8,&g_8,&g_8,(void*)0}};
    uint8_t **l_403 = &l_402[3][3];
    uint8_t ***l_412 = (void*)0;
    uint8_t ***l_413 = &l_403;
    int32_t l_414[5];
    uint8_t l_430 = 249UL;
    union U2 l_436 = {0x4341L};
    struct S1 l_437 = {3,3,0xAC0E24B2L,5};
    const int64_t l_440[4][6][6] = {{{0x87B5A5742831745ELL,0xD7E762A7FB312D9BLL,0L,0x8A65E6D9E8982A68LL,0x81919B3D731B6230LL,0x8A65E6D9E8982A68LL},{0x0F8FDA9C6A9508A8LL,0x105EE8748BCDBA9DLL,0x0F8FDA9C6A9508A8LL,0xD7E762A7FB312D9BLL,(-6L),0x8A65E6D9E8982A68LL},{0x54037CBAE9583856LL,0x6B1CAD4268E1F56DLL,0L,(-10L),0L,0x6B1CAD4268E1F56DLL},{(-6L),0x105EE8748BCDBA9DLL,4L,(-10L),(-9L),0xD7E762A7FB312D9BLL},{0x54037CBAE9583856LL,0xD7E762A7FB312D9BLL,0L,0xD7E762A7FB312D9BLL,0x54037CBAE9583856LL,0x6B1CAD4268E1F56DLL},{0x0F8FDA9C6A9508A8LL,0xD7E762A7FB312D9BLL,(-6L),0x8A65E6D9E8982A68LL,(-9L),0x8A65E6D9E8982A68LL}},{{0x87B5A5742831745ELL,0x105EE8748BCDBA9DLL,0x87B5A5742831745ELL,0xD7E762A7FB312D9BLL,0L,0x8A65E6D9E8982A68LL},{(-1L),0xD7E762A7FB312D9BLL,0x0F8FDA9C6A9508A8LL,0x105EE8748BCDBA9DLL,0x0F8FDA9C6A9508A8LL,0xD7E762A7FB312D9BLL},{0x87B5A5742831745ELL,0x6B1CAD4268E1F56DLL,0x81919B3D731B6230LL,0x105EE8748BCDBA9DLL,0x54037CBAE9583856LL,0x8A65E6D9E8982A68LL},{(-6L),0x8A65E6D9E8982A68LL,(-9L),0x8A65E6D9E8982A68LL,(-6L),0xD7E762A7FB312D9BLL},{0L,0x8A65E6D9E8982A68LL,0x87B5A5742831745ELL,(-10L),0x54037CBAE9583856LL,(-10L)},{4L,0x6B1CAD4268E1F56DLL,4L,0x8A65E6D9E8982A68LL,0x0F8FDA9C6A9508A8LL,(-10L)}},{{0L,0xD7E762A7FB312D9BLL,0x87B5A5742831745ELL,0x105EE8748BCDBA9DLL,0x87B5A5742831745ELL,0xD7E762A7FB312D9BLL},{0x0F8FDA9C6A9508A8LL,0x6B1CAD4268E1F56DLL,(-9L),0x105EE8748BCDBA9DLL,(-1L),0x8A65E6D9E8982A68LL},{0L,0x8A65E6D9E8982A68LL,0x81919B3D731B6230LL,0x8A65E6D9E8982A68LL,0L,0xD7E762A7FB312D9BLL},{4L,0x8A65E6D9E8982A68LL,0x0F8FDA9C6A9508A8LL,(-10L),(-1L),(-10L)},{0L,0x6B1CAD4268E1F56DLL,0L,0x8A65E6D9E8982A68LL,0x87B5A5742831745ELL,(-10L)},{(-6L),0xD7E762A7FB312D9BLL,0x0F8FDA9C6A9508A8LL,0x105EE8748BCDBA9DLL,0x0F8FDA9C6A9508A8LL,0xD7E762A7FB312D9BLL}},{{0x87B5A5742831745ELL,0x6B1CAD4268E1F56DLL,0x81919B3D731B6230LL,0x105EE8748BCDBA9DLL,0x54037CBAE9583856LL,0x8A65E6D9E8982A68LL},{(-6L),0x8A65E6D9E8982A68LL,(-9L),0x8A65E6D9E8982A68LL,(-6L),0xD7E762A7FB312D9BLL},{0L,0x8A65E6D9E8982A68LL,0x87B5A5742831745ELL,(-10L),0x54037CBAE9583856LL,(-10L)},{4L,0x6B1CAD4268E1F56DLL,4L,0x8A65E6D9E8982A68LL,0x0F8FDA9C6A9508A8LL,(-10L)},{0L,0xD7E762A7FB312D9BLL,0x87B5A5742831745ELL,0x105EE8748BCDBA9DLL,0x87B5A5742831745ELL,0xD7E762A7FB312D9BLL},{0x0F8FDA9C6A9508A8LL,0x6B1CAD4268E1F56DLL,(-9L),0x105EE8748BCDBA9DLL,(-1L),0x8A65E6D9E8982A68LL}}};
    struct S1 *l_548[2][7];
    struct S1 ** const l_547 = &l_548[1][1];
    int8_t l_562 = 0x61L;
    const union U4 *l_592 = &g_584;
    const union U4 **l_591 = &l_592;
    const union U2 *l_598 = &g_118;
    int32_t *l_620[6][4] = {{&l_414[1],(void*)0,&g_72,(void*)0},{(void*)0,&l_414[1],&g_72,&g_72},{&l_414[1],&l_414[1],(void*)0,&g_72},{&l_414[1],&l_414[1],&l_414[1],(void*)0},{&l_414[1],(void*)0,(void*)0,&l_414[1]},{&l_414[1],(void*)0,&g_72,(void*)0}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_414[i] = 1L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
            l_548[i][j] = &l_437;
    }
    if ((((*g_324) == (g_396 = (((safe_lshift_func_uint16_t_u_s(g_205, 8)) ^ ((l_401 = l_401) != ((*l_403) = l_402[2][1]))) , (((((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_8, (&l_401 == ((*l_413) = g_410)))), 0x8FCB349FL)), (-1L))) == l_414[1]) | 0x90A043C2L) != 0xEEE265548835CBDDLL) && g_372)))) > l_414[4]))
    { 
        struct S1 *l_422 = (void*)0;
        struct S1 ** const l_421 = &l_422;
        uint8_t ***l_425 = &g_410;
        int32_t *l_427 = &g_72;
        int32_t **l_426 = &l_427;
        int32_t l_475 = (-4L);
        int32_t l_476 = 0x4DF2F42FL;
        uint32_t l_510 = 0xE7367082L;
        int32_t l_514 = 0xDDAC59FFL;
        int32_t l_516 = 0x51502551L;
        int32_t l_517 = 0xA9EC0A7DL;
        int32_t l_523 = 1L;
        int32_t l_524[2];
        int8_t l_537[3][2] = {{(-4L),(-4L)},{0x80L,(-4L)},{(-4L),0x80L}};
        uint32_t *l_544 = &g_359;
        int32_t *l_549 = &l_523;
        int i, j;
        for (i = 0; i < 2; i++)
            l_524[i] = 0xAA0F5035L;
        (*l_426) = (func_45(((safe_rshift_func_uint8_t_u_s(p_36.f0, 6)) < (safe_mod_func_int8_t_s_s(((p_36 , ((safe_mod_func_uint32_t_u_u((l_421 == g_423), p_36.f0)) >= ((*g_324) | ((void*)0 != l_425)))) >= p_36.f0), p_36.f0)))) , p_37);
        for (g_207 = 0; (g_207 >= 0); g_207 -= 1)
        { 
            const uint32_t l_428 = 4294967295UL;
            int32_t *l_429[5] = {&g_24,&g_24,&g_24,&g_24,&g_24};
            uint16_t *l_438 = (void*)0;
            uint16_t *l_439 = &g_209;
            uint64_t l_450[1][7] = {{1UL,0x90DDEF2FD902092CLL,1UL,1UL,0x90DDEF2FD902092CLL,1UL,1UL}};
            int16_t l_458 = 1L;
            union U2 *l_467 = &g_118;
            int i, j;
            l_430 = l_428;
            if ((((g_431 = (l_430 && g_329[2])) || (safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((l_436 , (((*l_439) = (l_437 , 5UL)) != ((*g_324) ^ (g_184 , l_440[1][1][4])))), 5)) & (*g_51)), 0))) , 0L))
            { 
                uint32_t *l_449 = &g_359;
                int32_t l_457 = 0xB2A8E6D8L;
                int32_t **l_472 = &l_429[0];
                int16_t l_474 = 2L;
                int32_t l_477[6][7] = {{0L,0x1FD518D7L,0L,5L,1L,0x66B907F1L,1L},{1L,0xFDC4D2F9L,0x600FA4EEL,0x600FA4EEL,0xFDC4D2F9L,1L,0xFDC4D2F9L},{0L,5L,1L,0x66B907F1L,1L,0x66B907F1L,1L},{0x5B44C725L,0x5B44C725L,1L,0x600FA4EEL,1L,0x5B44C725L,0x5B44C725L},{(-1L),5L,1L,5L,(-1L),0L,1L},{5L,0xFDC4D2F9L,5L,1L,1L,5L,0xFDC4D2F9L}};
                uint16_t l_478 = 6UL;
                int i, j;
                g_38.f0 = ((safe_mul_func_uint8_t_u_u((g_114[0].f3 <= ((safe_mul_func_uint16_t_u_u((((p_36.f0 != ((safe_sub_func_int32_t_s_s((g_72 ^= 0L), l_414[1])) , (p_36.f0 > l_437.f1))) , func_45(((*l_449) = (((*g_51) = (safe_rshift_func_int8_t_s_s((-1L), p_36.f0))) | 0x88B26008E882E908LL)))) , 65529UL), l_450[0][4])) > 18446744073709551612UL)), p_36.f0)) == 1L);
                l_458 = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_36.f0, (l_436.f0 > ((0UL > (p_36.f0 >= p_36.f0)) & ((((*g_324) >= (safe_lshift_func_int8_t_s_u(0L, p_36.f0))) || 0xDF68D6B1L) < l_457))))), 8));
                for (g_372 = 0; (g_372 <= 0); g_372 += 1)
                { 
                    union U2 **l_468 = (void*)0;
                    union U2 **l_469 = &l_467;
                    uint32_t *l_473 = (void*)0;
                    int i, j;
                    (**l_472) = ((((safe_sub_func_int32_t_s_s(g_208[g_207][(g_207 + 6)], p_36.f0)) > (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((*l_469) = l_467) != (void*)0), 0x1EB17DAAL)), p_36.f0)), 3)) ^ (g_34[3].f1 = ((*l_449) = (safe_mod_func_int16_t_s_s((((l_472 != (void*)0) & l_437.f3) ^ l_440[1][1][4]), g_204[2]))))) < g_208[g_207][(g_207 + 6)])) < g_372) == l_474);
                    --l_478;
                    (**l_472) ^= 0xB3292310L;
                }
                if (l_440[1][1][4])
                    continue;
            }
            else
            { 
                int64_t l_486 = (-7L);
                int32_t l_515 = 0L;
                int32_t l_519 = (-3L);
                int32_t l_520 = 0L;
                if ((safe_lshift_func_uint16_t_u_s(g_52, 4)))
                { 
                    g_483[0]--;
                    if (l_486)
                        continue;
                }
                else
                { 
                    int64_t *l_508 = &g_208[0][1];
                    p_36.f0 = (l_475 = ((~0xB7B4E7857034A2D4LL) <= ((safe_mod_func_uint8_t_u_u((((*l_508) |= (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s((((g_204[2] | (safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((g_24 && ((((-8L) & (~p_36.f0)) ^ (safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u(0xF20ED74E5D60B486LL, ((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(p_36.f0, 0)), p_36.f0)) , l_486))), (*g_324)))) , l_436.f0)), l_486)), p_36.f0))) < 18446744073709551615UL) ^ p_36.f0))), l_486)) == p_36.f0), 7))) != 0L), 0xC6L)) <= p_36.f0)));
                }
                l_510 = (g_24 = g_509[2]);
                g_511--;
                --g_525;
            }
            g_24 ^= (((((safe_sub_func_uint8_t_u_u(0x20L, l_414[4])) ^ (-7L)) <= 0L) , &l_458) != &g_205);
            for (l_436.f1 = 0; (l_436.f1 <= 1); l_436.f1 += 1)
            { 
                struct S0 l_530[3][3][1] = {{{{-1,20827,0}},{{-1,20827,0}},{{3,12532,0}}},{{{-1,20827,0}},{{-1,20827,0}},{{3,12532,0}}},{{{3,12532,0}},{{3,12532,0}},{{1,6819,0}}}};
                union U2 *l_536[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_536[i] = &l_436;
                (*l_426) = func_39(l_530[1][2][0], g_88[2], ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_u(l_437.f1, p_36.f0)) <= (~((*g_324) , l_440[1][1][4]))), 3)) & (l_437.f3 ^= (&l_427 == (void*)0))), l_536[1], &g_118);
                (*g_423) = (*g_423);
                for (g_317 = 0; (g_317 <= 1); g_317 += 1)
                { 
                    if (l_440[1][1][4])
                        break;
                }
            }
        }
        (*l_549) = ((p_36.f0 , (l_537[2][0] | (((safe_mul_func_int16_t_s_s((4UL == (((safe_sub_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(p_36.f0, ((*l_544)--))), ((l_547 == (void*)0) || (g_38.f0 ^= (l_440[1][1][4] , 0xFD0AD576L))))) && (*g_51)) & l_440[3][3][4])), p_36.f0)) != 0xC852837AL) >= 0x2A3F20EEL))) != l_437.f3);
    }
    else
    { 
        int32_t l_556 = 5L;
        int32_t l_561 = (-1L);
        int32_t *l_563 = &g_24;
        struct S1 l_564 = {0,-4,0x994592D8L,5};
        uint64_t **l_571 = &g_51;
        union U3 l_572 = {4294967295UL};
        uint16_t *l_575 = (void*)0;
        uint16_t *l_576 = &g_209;
        union U4 * const **l_581 = (void*)0;
        union U4 *l_586 = &g_38;
        union U4 **l_585 = &l_586;
        (*l_563) |= (((l_561 = ((l_556 = (safe_div_func_int32_t_s_s((((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(g_72, (g_38 , (l_556 < (((((safe_rshift_func_int16_t_s_s(0x6824L, 0)) && (g_184.f0 && ((safe_rshift_func_uint8_t_u_s(((g_118 , l_556) & g_511), (*g_324))) <= 1UL))) > 252UL) || p_36.f0) != (*g_51)))))), 13)) >= p_36.f0) >= p_36.f0) >= 0xA4CF3531L) >= 0x9A65L), 0x579572A9L))) >= p_36.f0)) & l_440[1][1][4]) < l_562);
        l_437.f3 ^= (l_564 , (*l_563));
        (*l_563) = (safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_571 != (void*)0), (l_572 , ((g_582[6] = ((((0x5AL != ((l_437.f3 ^= (((safe_rshift_func_uint8_t_u_u(p_36.f0, 1)) != ((*l_576) = g_118.f1)) , (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0xA5L, p_36.f0)), l_562)))) || 1UL)) , l_414[1]) && p_36.f0) , (void*)0)) == l_585)))), 0xD7L)) < l_437.f1), 0x39L));
        for (g_522 = 0; (g_522 >= (-6)); g_522 = safe_sub_func_uint32_t_u_u(g_522, 4))
        { 
            const union U4 ***l_593 = &l_591;
            union U2 *l_597 = &l_436;
            union U2 **l_596 = &l_597;
            union U2 ***l_595 = &l_596;
            const union U2 **l_599 = &l_598;
            union U2 ****l_600 = &l_595;
            union U2 ***l_601 = &g_594;
            (*l_563) |= (((((void*)0 == &g_339) > (((*l_593) = l_591) == ((g_594 != ((*l_595) = ((*g_196) , (void*)0))) , &g_583))) ^ 9L) || 0xA85428DD4951C927LL);
            (*l_599) = l_598;
            l_601 = ((*l_600) = (void*)0);
        }
    }
    g_602 = &g_118;
    l_414[3] ^= (safe_div_func_uint8_t_u_u((((&g_329[1] != &l_562) <= (&l_436 == ((&g_72 != (void*)0) , (void*)0))) & ((((((*l_403) != (void*)0) <= p_36.f0) , p_36) , &l_592) == &g_583)), (*g_324)));
    g_584.f0 = ((l_437.f2 <= (safe_mod_func_uint8_t_u_u(9UL, (safe_rshift_func_int8_t_s_u(((safe_add_func_int64_t_s_s((safe_div_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(((l_437.f3 != ((safe_mod_func_int64_t_s_s(((*g_51) && (0x7EED9788DE7A86F9LL > (safe_rshift_func_uint16_t_u_s(0x52BCL, (safe_unary_minus_func_uint32_t_u(((l_436.f1 == 0x302ED027DDD9D562LL) && p_36.f0))))))), p_36.f0)) <= p_36.f0)) , g_372), l_436.f0)) && 0xD5L) || g_38.f0), p_36.f0)), p_36.f0)) == g_114[0].f2), 4))))) <= 0x0CB83D58L);
    g_623++;
    return p_36.f0;
}



static int32_t * func_39(struct S0  p_40, uint32_t  p_41, int32_t  p_42, union U2 * p_43, union U2 * p_44)
{ 
    struct S1 *l_119 = &g_114[0];
    int32_t l_123[6] = {0xCCE31A55L,0xCCE31A55L,0xCCE31A55L,0xCCE31A55L,0xCCE31A55L,0xCCE31A55L};
    uint32_t *l_130 = &g_131;
    int64_t *l_132 = (void*)0;
    int64_t *l_133[4][1][4] = {{{&g_134,&g_134,&g_134,&g_134}},{{&g_134,&g_134,&g_134,&g_134}},{{&g_134,&g_134,&g_134,&g_134}},{{&g_134,&g_134,&g_134,&g_134}}};
    int32_t l_135 = 1L;
    uint64_t **l_136 = &g_51;
    uint16_t *l_137[1];
    int32_t l_138 = 0x3D3ABD02L;
    struct S0 **l_198 = &g_196;
    union U4 l_200 = {-1L};
    union U2 l_202 = {0x4F26L};
    uint8_t l_273[6][1];
    uint32_t l_297 = 7UL;
    union U3 l_300[4][2] = {{{0xA587E9C4L},{0xA587E9C4L}},{{0xA587E9C4L},{0xA587E9C4L}},{{0xA587E9C4L},{0xA587E9C4L}},{{0xA587E9C4L},{0xA587E9C4L}}};
    const int8_t *l_328 = &g_329[1];
    union U4 l_383 = {1L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_137[i] = &g_88[2];
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_273[i][j] = 249UL;
    }
    if (((((*p_43) , &g_114[1]) == l_119) & (safe_unary_minus_func_uint32_t_u((((safe_sub_func_int8_t_s_s(l_123[3], ((safe_mul_func_uint8_t_u_u(g_85[1][2], (safe_lshift_func_int8_t_s_u(p_41, 7)))) | ((l_138 = ((((((l_135 = (((*l_130) = p_41) != p_41)) > g_118.f0) | p_41) , &g_51) != l_136) & 0UL)) < p_40.f0)))) | l_123[1]) , l_123[2])))))
    { 
        uint16_t *l_139 = (void*)0;
        int16_t l_140 = 0x3380L;
        int32_t *l_141[5][4] = {{&l_138,&g_24,&g_24,&l_138},{&g_24,&l_138,&g_24,&l_123[2]},{&g_24,&g_24,&g_24,(void*)0},{&l_138,&l_123[2],(void*)0,(void*)0},{&g_24,&g_24,&l_138,&l_123[2]}};
        uint32_t l_187 = 0x8F759302L;
        const struct S0 *l_190 = (void*)0;
        struct S0 ***l_197[7][2] = {{&g_195,&g_195},{&g_195,&g_195},{&g_195,&g_195},{&g_195,&g_195},{&g_195,&g_195},{&g_195,&g_195},{&g_195,&g_195}};
        struct S1 l_199 = {5,-1,0xE5F1C336L,-4};
        int16_t *l_201 = &g_85[1][0];
        int i, j;
lbl_165:
        l_135 = (l_123[3] = (p_40.f2 >= (l_138 || (((void*)0 == l_139) | l_140))));
        for (g_72 = 0; (g_72 < (-26)); g_72 = safe_sub_func_int32_t_s_s(g_72, 3))
        { 
            uint32_t **l_159 = &l_130;
            int32_t l_160 = 0x764A2DA5L;
            const struct S0 *l_188 = &g_34[1];
            if ((p_41 <= (safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((0x5FL && (safe_lshift_func_uint8_t_u_u(((g_85[0][1] != ((l_123[4] ^ ((safe_unary_minus_func_int8_t_s(((safe_rshift_func_uint16_t_u_s((p_40.f1 != ((((p_40.f2 , (((*g_51)--) > (((*l_159) = ((safe_mod_func_uint64_t_u_u(18446744073709551610UL, l_123[3])) , l_141[2][3])) == (void*)0))) ^ p_42) ^ 0xDAL) & l_135)), 6)) ^ 18446744073709551615UL))) , p_40.f2)) ^ 2UL)) < l_160), p_42))), 0xC3L)), p_40.f2)), p_40.f1))))
            { 
                for (g_26 = 0; (g_26 <= 0); g_26 += 1)
                { 
                    int32_t *l_161 = &g_72;
                    return l_161;
                }
            }
            else
            { 
                return &g_72;
            }
            for (l_160 = 0; (l_160 < 2); l_160 = safe_add_func_uint16_t_u_u(l_160, 4))
            { 
                int32_t **l_164 = &l_141[4][1];
                (*l_164) = &g_72;
            }
            if (p_40.f0)
                goto lbl_165;
            for (g_118.f0 = 0; (g_118.f0 > 20); g_118.f0 = safe_add_func_int64_t_s_s(g_118.f0, 9))
            { 
                union U4 *l_169 = (void*)0;
                union U4 **l_168 = &l_169;
                int32_t l_177 = 0x7908CCFFL;
                int32_t l_178 = 0L;
                int16_t *l_183 = &g_85[1][2];
                (*l_168) = &g_38;
                g_24 &= (safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((!(safe_mod_func_uint64_t_u_u((((g_88[5]--) , (l_138 |= ((safe_mul_func_uint16_t_u_u((g_88[2] = ((g_114[0].f3 = (l_183 != (void*)0)) <= (g_184 , (&g_51 != (g_184 , &g_51))))), (((safe_div_func_uint8_t_u_u(((0x9C0B20075B0AE68ELL || (*g_51)) ^ g_134), (-7L))) > 5UL) && 0x7EL))) , (*g_51)))) < 0UL), l_187))), l_178)), p_42));
                for (l_140 = 2; (l_140 <= 6); l_140 += 1)
                { 
                    const struct S0 **l_189[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_189[i] = &l_188;
                    l_190 = l_188;
                }
            }
            if (l_123[2])
                break;
        }
        l_138 = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((*l_201) ^= (((l_198 = g_195) == &g_196) ^ (((l_199 , l_200) , p_44) != (void*)0))), 13)), (l_202 , 0x09L)));
        return &g_24;
    }
    else
    { 
        int32_t *l_203[1];
        int32_t **l_212 = &l_203[0];
        uint32_t l_218 = 7UL;
        struct S1 *l_227 = &g_114[0];
        uint32_t **l_262 = &l_130;
        union U3 *l_266 = (void*)0;
        union U4 l_314 = {-1L};
        int8_t *l_323 = &g_58;
        int i;
        for (i = 0; i < 1; i++)
            l_203[i] = &l_123[3];
        --g_209;
        (*l_212) = &l_135;
        if (g_34[3].f1)
        { 
            int8_t *l_225[2];
            int32_t l_226 = 0x60AC7220L;
            struct S1 **l_228 = &l_119;
            int32_t l_229 = 0x986FCF50L;
            int i;
            for (i = 0; i < 2; i++)
                l_225[i] = (void*)0;
            g_72 = (safe_rshift_func_uint8_t_u_u((~p_41), (safe_div_func_uint16_t_u_u(l_218, (safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((g_88[2] = ((l_226 = p_41) > (l_227 != ((*l_228) = (void*)0)))), l_229)), ((0x687F2490424AEAB2LL <= l_123[3]) || 0xA1C89E38L))) <= l_229), (**l_212)))))));
            if (((**l_212) = 0xACBB44B8L))
            { 
                (*l_212) = &l_123[1];
            }
            else
            { 
                uint8_t l_243 = 0x56L;
                if ((((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((g_114[3] , (safe_mod_func_int32_t_s_s((g_184 , (safe_unary_minus_func_uint8_t_u(249UL))), g_205))), (safe_mod_func_uint64_t_u_u(l_202.f0, (safe_sub_func_uint64_t_u_u(p_40.f1, g_208[0][1])))))) || l_243), 2)), l_229)) <= g_58) , (-3L)))
                { 
                    int32_t *l_244 = (void*)0;
                    return l_244;
                }
                else
                { 
                    return &g_24;
                }
            }
lbl_267:
            for (l_202.f3 = 0; (l_202.f3 > 3); l_202.f3++)
            { 
                uint64_t l_261 = 9UL;
                int32_t *l_263 = &l_123[0];
                union U3 *l_265 = (void*)0;
                union U3 **l_264[1][1][6] = {{{&l_265,&l_265,&l_265,&l_265,&l_265,&l_265}}};
                int i, j, k;
                for (l_138 = (-6); (l_138 <= (-30)); --l_138)
                { 
                    (**l_212) = ((-1L) < (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(65535UL, (0UL != (18446744073709551608UL != ((**l_136) = (safe_rshift_func_uint16_t_u_u(2UL, (safe_rshift_func_int16_t_s_s(0x503CL, ((safe_div_func_int32_t_s_s((0x32L > 0x04L), 0x656744ACL)) & 0x3BE11147L)))))))))), g_8)), l_261)));
                    (*l_212) = (*l_212);
                    l_200.f0 = ((4294967295UL >= ((*l_130) = ((((**l_212) = p_41) & ((((((void*)0 == l_262) && 1L) , g_114[0].f3) <= (0x297C0A964B6351B0LL & (*g_51))) != 0UL)) , 0xD0F48B29L))) && p_41);
                    (*l_212) = l_263;
                }
                (*l_263) |= ((void*)0 != &g_85[0][0]);
                l_266 = &g_184;
                if (l_202.f0)
                    goto lbl_267;
            }
            for (l_202.f2 = 0; (l_202.f2 <= 0); l_202.f2 += 1)
            { 
                if (g_107.f2)
                    break;
                if (g_134)
                    break;
            }
        }
        else
        { 
            uint8_t l_284 = 0UL;
            const int32_t l_295 = (-9L);
            int32_t l_296[3];
            int32_t l_356 = (-7L);
            int i;
            for (i = 0; i < 3; i++)
                l_296[i] = 0xC1667867L;
lbl_332:
            if ((+g_107.f2))
            { 
                union U4 * const l_274 = &g_38;
                for (g_58 = 2; (g_58 < 5); g_58 = safe_add_func_int8_t_s_s(g_58, 9))
                { 
                    union U4 *l_276 = &g_38;
                    union U4 **l_275 = &l_276;
                    (**l_212) = (safe_add_func_int16_t_s_s(l_273[3][0], g_8));
                    (*l_275) = l_274;
                    return &g_24;
                }
            }
            else
            { 
                int16_t *l_282 = (void*)0;
                int16_t *l_283 = &g_85[0][3];
                int32_t l_291 = 0xF1BF990CL;
                int32_t l_294 = (-6L);
                const union U2 *l_304 = &l_202;
                (*l_212) = (*l_212);
                if ((l_296[2] |= (safe_unary_minus_func_uint32_t_u((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((l_284 = ((*l_283) = g_131)), (safe_sub_func_uint64_t_u_u(p_40.f2, (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(9L, ((((l_291 && ((l_123[4] = p_40.f2) , 3L)) ^ (safe_mul_func_int8_t_s_s(((l_294 = (g_184 , 0x29C00FFBC523401ELL)) == l_295), g_8))) || (*g_51)) , g_208[0][1]))), g_88[0])))))), 0x31DA364DE6C08DA6LL))))))
                { 
                    --l_297;
                }
                else
                { 
                    const union U2 *l_301 = (void*)0;
                    const union U2 **l_302 = (void*)0;
                    const union U2 **l_303 = &l_301;
                    struct S0 ***l_306 = &l_198;
                    l_296[2] = 0x2CEEA7DDL;
                    if (g_107.f2)
                        goto lbl_305;
lbl_305:
                    l_304 = (l_300[1][0] , ((*l_227) , ((*l_303) = l_301)));
                    (*l_306) = &g_196;
                }
                for (g_118.f3 = 0; (g_118.f3 != 54); g_118.f3 = safe_add_func_int8_t_s_s(g_118.f3, 9))
                { 
                    uint16_t l_309 = 0UL;
                    (**l_212) = 1L;
                    ++l_309;
                }
                (**l_212) &= (p_40.f1 , p_40.f1);
            }
            if ((safe_sub_func_int8_t_s_s(g_207, ((((*l_119) , 0x85L) <= (l_314 , (safe_rshift_func_int8_t_s_s(5L, 5)))) && 0UL))))
            { 
                uint16_t l_320 = 0UL;
                int8_t *l_321 = &g_58;
                for (g_24 = 2; (g_24 >= 0); g_24 -= 1)
                { 
                    int i;
                    l_296[g_24] ^= p_40.f2;
                    ++g_317;
                    if ((**l_212))
                        continue;
                }
                l_320 = (g_38 , (&p_40 == (*g_195)));
                g_72 |= (g_26 == ((*l_321) = 0x75L));
            }
            else
            { 
                int32_t *l_322 = &g_72;
                return l_322;
            }
            for (g_209 = 0; (g_209 <= 0); g_209 += 1)
            { 
                uint8_t *l_325 = &l_273[3][0];
                uint8_t *l_326 = &l_284;
                const int8_t **l_327 = (void*)0;
                int i;
                (**l_212) = ((g_324 = l_323) == (((*l_326) = ((*l_325) ^= g_114[0].f3)) , (l_328 = l_326)));
                (**l_212) |= g_208[0][4];
                for (l_202.f1 = 0; (l_202.f1 <= 0); l_202.f1 += 1)
                { 
                    int i, j;
                    if (g_208[g_209][(l_202.f1 + 1)])
                        break;
                    if (g_208[l_202.f1][(l_202.f1 + 5)])
                        break;
                }
            }
            for (p_41 = (-24); (p_41 >= 57); p_41 = safe_add_func_uint16_t_u_u(p_41, 3))
            { 
                uint32_t l_341 = 4294967289UL;
                int32_t *l_357 = &l_123[2];
                for (l_202.f0 = 0; (l_202.f0 <= 0); l_202.f0 += 1)
                { 
                    int32_t *l_333 = &l_296[2];
                    int i, j;
                    if (g_58)
                        goto lbl_332;
                    (*l_212) = l_333;
                    if (g_208[l_202.f0][(l_202.f0 + 5)])
                        continue;
                    (**l_212) = g_207;
                    return &g_24;
                }
                for (p_42 = 0; (p_42 < 6); p_42 = safe_add_func_uint16_t_u_u(p_42, 8))
                { 
                    const int32_t *l_336[4][3][3] = {{{&l_123[3],&l_296[2],&l_296[2]},{&g_24,(void*)0,(void*)0},{&l_123[3],&l_296[2],&l_296[2]}},{{&g_24,(void*)0,(void*)0},{&l_123[3],&l_296[2],&l_296[2]},{&g_24,(void*)0,(void*)0}},{{&l_123[3],&l_296[2],&l_296[2]},{&g_24,(void*)0,(void*)0},{&l_123[3],&l_296[2],&l_296[2]}},{{&g_24,(void*)0,(void*)0},{&l_123[3],&l_296[2],&l_296[2]},{&g_24,(void*)0,(void*)0}}};
                    const int32_t **l_337 = (void*)0;
                    const int32_t **l_338 = &l_336[2][0][2];
                    int32_t l_340 = (-1L);
                    uint64_t *l_355[7] = {&g_26,&g_317,&g_317,&g_26,&g_317,&g_317,&g_26};
                    int i, j, k;
                    g_339 = ((*l_338) = l_336[2][1][2]);
                    l_341++;
                    l_356 ^= (safe_mod_func_uint16_t_u_u(((g_107.f2 < (((safe_div_func_int64_t_s_s((safe_add_func_uint16_t_u_u((g_52 | 0UL), (!(safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_300[1][0].f0 != ((p_41 && (((l_355[0] != (void*)0) && (-4L)) && g_114[0].f0)) , (-4L))), l_135)), 1UL))))), 2L)) , l_296[2]) , g_207)) , p_40.f1), 1L));
                }
                (**l_212) = 1L;
                return &g_72;
            }
            (**l_212) = l_284;
        }
        g_359--;
    }
    for (l_202.f3 = (-15); (l_202.f3 > 38); l_202.f3++)
    { 
        int16_t l_364 = 1L;
        int32_t *l_365 = (void*)0;
        int32_t *l_366 = &l_135;
        int32_t *l_367 = &g_72;
        int32_t l_368 = 0x5B5C5C84L;
        int32_t *l_369 = &l_135;
        int32_t *l_370 = (void*)0;
        int32_t *l_371[7][2];
        union U4 *l_387[5];
        union U4 **l_386 = &l_387[3];
        int8_t *l_395 = &g_396;
        int16_t *l_397 = &g_206;
        int32_t l_398[5][7][3] = {{{1L,0x8F519CF4L,(-8L)},{0xE8A6A471L,0L,9L},{0xBD05B2C2L,1L,0xA97C7B05L},{0xBD05B2C2L,0xD3E9F785L,1L},{0xE8A6A471L,1L,0x66BE0789L},{1L,9L,1L},{1L,0xCB7F358BL,0xA97C7B05L}},{{0xD57DC6D3L,0xCB7F358BL,9L},{(-1L),9L,(-8L)},{(-2L),1L,(-1L)},{(-1L),0xD3E9F785L,0xE8A6A471L},{0xD57DC6D3L,1L,0xE8A6A471L},{1L,0L,(-1L)},{1L,0x8F519CF4L,(-8L)}},{{0xE8A6A471L,0L,9L},{0xBD05B2C2L,1L,0xA97C7B05L},{0xBD05B2C2L,0xD3E9F785L,1L},{0xE8A6A471L,1L,0x66BE0789L},{1L,9L,1L},{1L,0xCB7F358BL,0xA97C7B05L},{0xD57DC6D3L,0xCB7F358BL,9L}},{{(-1L),9L,(-8L)},{(-2L),1L,(-1L)},{(-1L),0xD3E9F785L,0xE8A6A471L},{0xD57DC6D3L,1L,0xE8A6A471L},{0x715E444CL,9L,0xAD5A55B9L},{0xAAEFFB6EL,0xBD05B2C2L,0x60817985L},{6L,9L,1L}},{{0x7D91602FL,(-1L),0x5F2741B6L},{0x7D91602FL,0xA97C7B05L,0xAAEFFB6EL},{6L,(-2L),(-1L)},{0xAAEFFB6EL,1L,0xAAEFFB6EL},{0x715E444CL,(-10L),0x5F2741B6L},{0x798C4C04L,(-10L),1L},{0xAD5A55B9L,1L,0x60817985L}}};
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
                l_371[i][j] = &l_135;
        }
        for (i = 0; i < 5; i++)
            l_387[i] = &l_200;
        ++g_372;
        (*l_367) |= (safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(l_202.f3, (g_114[0].f3 = (safe_add_func_int32_t_s_s(((p_41 >= (((l_383 , (((*l_130) &= ((safe_sub_func_uint32_t_u_u(p_40.f1, ((((*l_386) = &l_200) != (void*)0) >= (((*l_366) = (((*l_397) ^= (((*l_395) &= ((safe_mod_func_uint8_t_u_u((!(((((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((-10L), (*l_369))), 11)) || l_273[3][0]) , p_40.f2) & (*g_324)) , (void*)0) == l_133[0][0][3]) || l_273[3][0])), l_202.f0)) ^ p_40.f2)) <= g_107.f2)) && l_273[3][0])) | l_200.f0)))) != p_40.f1)) == 0x3DC61EB5L)) , &g_72) != &l_368)) > 0L), l_398[0][1][1]))))), 1L));
        (*l_369) = ((*g_196) , (0x5524L ^ l_300[1][0].f0));
    }
    return &g_24;
}



static struct S0  func_45(uint32_t  p_46)
{ 
    uint64_t *l_47 = (void*)0;
    uint64_t *l_48 = &g_26;
    int32_t *l_53 = (void*)0;
    int32_t *l_54 = &g_24;
    struct S0 *l_106 = &g_107;
    int32_t l_112 = 0xABBA7F7EL;
    struct S1 *l_113 = &g_114[0];
    struct S0 **l_116 = &l_106;
    struct S0 ***l_115 = &l_116;
    (*l_54) = ((++(*l_48)) ^ ((*g_51) = ((p_46 ^ 0x89L) >= ((0x8DCEL & (4UL == (-1L))) && (g_51 == l_48)))));
    for (g_24 = 0; (g_24 != 10); g_24++)
    { 
        uint64_t **l_57 = &g_51;
        int32_t *l_71 = &g_72;
        int32_t l_82 = 0L;
        uint64_t ** const l_83 = &l_47;
        int16_t *l_84 = &g_85[0][3];
        uint16_t *l_86 = (void*)0;
        uint16_t *l_87 = &g_88[2];
        uint32_t l_99 = 0UL;
        l_57 = &g_51;
        g_58 = p_46;
        if ((safe_div_func_int16_t_s_s((l_82 = ((safe_sub_func_int16_t_s_s((((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((*l_87) |= (safe_rshift_func_int16_t_s_s(((*l_84) = ((safe_div_func_int32_t_s_s(1L, ((g_26 >= ((((l_71 = &g_24) == &g_24) <= (safe_lshift_func_int16_t_s_s((((4294967290UL >= ((safe_add_func_uint64_t_u_u(((1L && (!(safe_sub_func_uint8_t_u_u(g_38.f0, l_82)))) <= (-5L)), l_82)) && g_26)) , &g_51) != l_83), p_46))) != 4294967295UL)) & (*g_51)))) == g_34[3].f1)), g_34[3].f0))) & 0x228CL), 12)), p_46)) >= g_24) , p_46), g_58)) < p_46)), 3UL)))
        { 
            int16_t l_95 = (-2L);
            int32_t *l_98 = &g_72;
            (*l_98) ^= (safe_mod_func_uint8_t_u_u(g_85[0][1], ((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((l_95 , (p_46 > ((void*)0 == l_98))), g_34[3].f2)), l_99)) , p_46)));
        }
        else
        { 
            uint64_t l_108 = 1UL;
            int32_t l_110 = 0xD4860CE0L;
            int64_t l_111 = (-6L);
            g_72 = (*l_71);
            for (l_99 = 1; (l_99 <= 6); l_99 += 1)
            { 
                int32_t l_105 = 0xB30C50D1L;
                int i;
                if ((((((g_88[l_99] > 0xFF65L) != g_34[3].f2) , ((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(((g_88[l_99] = 0x8827L) >= 0x18A5L), 0x80L)), p_46)) && 0xD7B3L)) < (-1L)) < 0x6D3E8DF325EC3E4FLL))
                { 
                    int32_t *l_104 = &l_82;
                    l_105 = ((*l_104) = ((void*)0 == &g_51));
                    if (p_46)
                        continue;
                    l_106 = &g_34[1];
                }
                else
                { 
                    if ((*l_71))
                        break;
                    if (l_108)
                        continue;
                }
                if ((*l_54))
                    break;
                g_72 = (+4L);
                l_110 = p_46;
            }
            l_112 |= (5UL || (l_111 && 0x787CCB484BB253DCLL));
        }
    }
    l_113 = (void*)0;
    (*l_115) = &l_106;
    return g_34[3];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_34[i].f0, "g_34[i].f0", print_hash_value);
        transparent_crc(g_34[i].f1, "g_34[i].f1", print_hash_value);
        transparent_crc(g_34[i].f2, "g_34[i].f2", print_hash_value);

    }
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_85[i][j], "g_85[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_88[i], "g_88[i]", print_hash_value);

    }
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    transparent_crc(g_107.f2, "g_107.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_114[i].f0, "g_114[i].f0", print_hash_value);
        transparent_crc(g_114[i].f1, "g_114[i].f1", print_hash_value);
        transparent_crc(g_114[i].f2, "g_114[i].f2", print_hash_value);
        transparent_crc(g_114[i].f3, "g_114[i].f3", print_hash_value);

    }
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_118.f1, "g_118.f1", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_184.f0, "g_184.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_204[i], "g_204[i]", print_hash_value);

    }
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_208[i][j], "g_208[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_329[i], "g_329[i]", print_hash_value);

    }
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_483[i], "g_483[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_509[i], "g_509[i]", print_hash_value);

    }
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_584.f0, "g_584.f0", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_623, "g_623", print_hash_value);
    transparent_crc(g_631.f0, "g_631.f0", print_hash_value);
    transparent_crc(g_650, "g_650", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_728[i], "g_728[i]", print_hash_value);

    }
    transparent_crc(g_729, "g_729", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_744, "g_744", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    transparent_crc(g_796.f0, "g_796.f0", print_hash_value);
    transparent_crc(g_840, "g_840", print_hash_value);
    transparent_crc(g_877, "g_877", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_924, "g_924", print_hash_value);
    transparent_crc(g_989, "g_989", print_hash_value);
    transparent_crc(g_1010, "g_1010", print_hash_value);
    transparent_crc(g_1011, "g_1011", print_hash_value);
    transparent_crc(g_1012, "g_1012", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    transparent_crc(g_1015, "g_1015", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1016[i][j], "g_1016[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1137, "g_1137", print_hash_value);
    transparent_crc(g_1145, "g_1145", print_hash_value);
    transparent_crc(g_1146, "g_1146", print_hash_value);
    transparent_crc(g_1152, "g_1152", print_hash_value);
    transparent_crc(g_1183, "g_1183", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1196[i][j][k].f0, "g_1196[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_1224.f0, "g_1224.f0", print_hash_value);
    transparent_crc(g_1242, "g_1242", print_hash_value);
    transparent_crc(g_1372, "g_1372", print_hash_value);
    transparent_crc(g_1403, "g_1403", print_hash_value);
    transparent_crc(g_1404, "g_1404", print_hash_value);
    transparent_crc(g_1431, "g_1431", print_hash_value);
    transparent_crc(g_1432, "g_1432", print_hash_value);
    transparent_crc(g_1433, "g_1433", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1434[i][j][k], "g_1434[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1455, "g_1455", print_hash_value);
    transparent_crc(g_1456, "g_1456", print_hash_value);
    transparent_crc(g_1556, "g_1556", print_hash_value);
    transparent_crc(g_1596, "g_1596", print_hash_value);
    transparent_crc(g_1666, "g_1666", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1667[i][j][k], "g_1667[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1683, "g_1683", print_hash_value);
    transparent_crc(g_1768, "g_1768", print_hash_value);
    transparent_crc(g_1796, "g_1796", print_hash_value);
    transparent_crc(g_1933, "g_1933", print_hash_value);
    transparent_crc(g_1954.f0, "g_1954.f0", print_hash_value);
    transparent_crc(g_1992, "g_1992", print_hash_value);
    transparent_crc(g_2163, "g_2163", print_hash_value);
    transparent_crc(g_2222, "g_2222", print_hash_value);
    transparent_crc(g_2236, "g_2236", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
